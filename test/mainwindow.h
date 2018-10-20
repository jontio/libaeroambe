#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QObject *ambe;

    QFile infile;
    QFile outfile;

    QByteArray ba;

    void get_encoded_data();
    quint64 framecount;

public slots:
    void decode_result(const QByteArray &decoded_data);
signals:
    void to_decode_signal(const QByteArray &data);
private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
