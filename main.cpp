#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>

class Peca{
private:
    QPushButton *_pbtn;
public:
    Peca(QPushButton *btn){
        _pbtn = btn;
    }


};



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
