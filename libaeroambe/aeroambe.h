#ifndef AEROAMBE_H
#define AEROAMBE_H

#include <QObject>
#include <QByteArray>

#include <QObject>
extern "C" {
#include "../mbelib-master/mbelib.h"
}

#define AmbeAero_Frame_Len_Bytes 12

class AeroAMBE : public QObject
{
    Q_OBJECT

    const unsigned char rX[96] = {
        23, 11, 14, 2, 5, 8, 9, 11, 22, 10, 13, 1, 4, 7, 8, 10, 21, 9, 12, 0, 3, 6, 7, 9, 20, 8, 11, 14, 2, 5, 6,
        8, 19, 7, 10, 13, 1, 4, 5, 7, 18, 6, 9, 12, 0, 3, 4, 6, 17, 5, 8, 11, 14, 2, 3, 5, 16, 4, 7, 10, 13, 1, 2,
        4, 15, 3, 6, 9, 12, 0, 1, 3, 14, 2, 5, 8, 11, 12, 0, 2, 13, 1, 4, 7, 10, 11, 13, 1, 12, 0, 3, 6, 9, 10, 12, 0
    };
    const unsigned char rW[96] = {
        0, 0, 1, 1, 2, 3, 4, 5, 0, 0, 1, 1, 2, 3, 4, 5, 0, 0, 1, 1, 2, 3, 4, 5, 0, 0, 1, 2, 2, 3, 4, 5, 0, 0, 1, 2,
        2, 3, 4, 5, 0, 0, 1, 2, 2, 3, 4, 5, 0, 0, 1, 2, 3, 3, 4, 5, 0, 0, 1, 2, 3, 3, 4, 5, 0, 0, 1, 2, 3, 3, 4, 5,
        0, 0, 1, 2, 3, 4, 4, 5, 0, 0, 1, 2, 3, 4, 5, 5, 0, 0, 1, 2, 3, 4, 5, 5
    };

public:
    explicit AeroAMBE(QObject *parent = 0);

signals:
    void error(QString msg);
    void decoded_signal(const QByteArray &decoded_data);
public slots:
    void to_decode_slot(const QByteArray &data);
private:
    unsigned char ambe_bits[96];
    unsigned char data[AmbeAero_Frame_Len_Bytes];

    short out[160];
    char ambe_fr[6][24];
    char ambe_d[72];

    char errorbuffer[1024];
    int errors = 0;
    int errors2 = 0;

    mbe_parms current;
    mbe_parms prev;
    mbe_parms prev_mp_enhanced;

    QByteArray decoded_data;
};

#if defined EXPORTLIB
 #define LIB_COMMON_DLLSPEC Q_DECL_EXPORT
#else
 #define LIB_COMMON_DLLSPEC Q_DECL_IMPORT
#endif

extern "C" LIB_COMMON_DLLSPEC QObject *createAeroAMBE(QObject *parent=0);


#endif // AEROAMBE_H
