#ifndef PECA_H
#define PECA_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QPixmap>


class Peca
{
private:
    QPushButton * peca_button;
public:
    Peca();
    Peca(QPushButton *, int, int);
};

#endif // PECA_H
