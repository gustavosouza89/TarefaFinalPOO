#ifndef JOGADOR_H
#define JOGADOR_H

#include "peca.h"
#include "ui_mainwindow.h"
#include <QLabel>

class Jogador
{
private:
    Peca *_peca1, *_peca2, *_peca3, *_peca4, *_peca5, *_peca6;
    QLabel * _label;
public:
    Jogador(Ui::MainWindow *, int);
    void ativa_label();
    void desativa_label();
};

#endif // JOGADOR_H
