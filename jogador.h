#ifndef JOGADOR_H
#define JOGADOR_H

#include "peca.h"
#include "ui_mainwindow.h"
#include <QLabel>

class Jogador
{
private:
    Peca _peca1, _peca2, _peca3, _peca4, _peca5, _peca6;
    QLabel * _label;
public:
    Jogador();
    void inicia_Jogador(Ui::MainWindow *, int);
    void libera_peca();
    void bloqueia_peca();
    void ativa_label();
    void desativa_label();
    void limpa_peca(int);
};

#endif // JOGADOR_H
