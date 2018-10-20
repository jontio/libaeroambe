#include "aeroambe.h"
//#include <QDebug>
#include <QString>

QObject *createAeroAMBE(QObject *parent)
{
    AeroAMBE *aeroambe = new AeroAMBE(parent);
    return aeroambe;
}

AeroAMBE::AeroAMBE(QObject *parent) : QObject(parent)
{
    mbe_initMbeParms(&current, &prev, &prev_mp_enhanced);
}

void AeroAMBE::to_decode_slot(const QByteArray &data)
{

    errors = 0;
    errors2 = 0;

    if(data.size()!=AmbeAero_Frame_Len_Bytes)
    {
        emit error("Error: AeroAMBE::decode: Datasize must be "+QString::number(AmbeAero_Frame_Len_Bytes)+"bytes!!");
        return;
    }

    // unpack the bytes and reverse
    for(int x=0; x<AmbeAero_Frame_Len_Bytes; x++)
    {
        for(int i = 0; i < 8; i++)
        {
            // reversed
            ambe_bits[(x*8)+i] = ((((uchar)data[x]) >> i) & 0x01);
        }
    }

    //deinterleave
    for (int i = 0; i < 96; i++)
    {
        ambe_fr[rW[i]][rX[i]] = ambe_bits[i];
    }

    //process fram
    decoded_data.resize(320);
    mbe_processAmbe4800x3600Frame(((short*)decoded_data.data()), &errors, &errors2, errorbuffer, ambe_fr, ambe_d, &current, &prev, &prev_mp_enhanced, 1);

    //qDebug() << "processd frame golay errors " << errors << " hamming errors " << errors2;

    emit decoded_signal(decoded_data);

}
