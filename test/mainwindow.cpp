#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QLibrary>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //load library
    QLibrary library("aeroambe.dll");
    if(!library.load())library.setFileName("aeroambe.so");
    if(!library.load())
    {
        qDebug()<<"Can't find or load all the libraries necessary for aeroambe.";
        ambe=new QObject;
    }
    if(library.load())
    {
        qDebug() << "aeroambe library loaded";
        typedef QObject *(*CreateQObjectFunction)(QObject*);
        CreateQObjectFunction cof = (CreateQObjectFunction)library.resolve("createAeroAMBE");
        if (cof)
        {
            ambe = cof(0);
        }
        else
        {
            ambe=new QObject;
            qDebug()<<"Could not resolve createAeroAMBE in aeroambe.";
        }
    }

    //define where the files are
    infile.setFileName("audio.bin");
    outfile.setFileName("audio.raw");

    //open files
    if(!outfile.open(QFile::WriteOnly|QFile::Truncate))
    {
        qDebug() << "could not open raw outfile ";
        return;
    }
    if(!infile.open(QIODevice::ReadOnly))
    {
        qDebug() << "could not read datafile ";
        return;
    }

    //runtime connection with library
    connect(ambe,SIGNAL(decoded_signal(QByteArray)),this,SLOT(decode_result(QByteArray)),Qt::QueuedConnection);
    connect(this,SIGNAL(to_decode_signal(QByteArray)),ambe,SLOT(to_decode_slot(QByteArray)));

    //put in first request
    get_encoded_data();

}

MainWindow::~MainWindow()
{
    delete ambe;
    delete ui;
}

void MainWindow::get_encoded_data()
{
    //put next request
    ba=infile.read(12);
    if(ba.size()==12)
    {
        emit to_decode_signal(ba);
    }
     else
     {
        qDebug()<<"end of file or error reading file!!";
        outfile.close();
        infile.close();
     }

}

void MainWindow::decode_result(const QByteArray &decoded_data)
{
    //update ui
    ui->label_framecount->setText(QString::number(framecount++));

    //write output raw audio
    outfile.write(decoded_data);

    //load more data and send a request to decode it
    get_encoded_data();
}
