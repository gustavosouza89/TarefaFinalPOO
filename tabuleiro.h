#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "peca.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QPixmap>

class Tabuleiro
{
private:
    Peca _peca1, _peca2, _peca3, _peca4, _peca5, _peca6, _peca7, _peca8, _peca9;
    QLabel * _label;
public:
    Tabuleiro();
    void inicia_Tabuleiro(Ui::MainWindow *);
    void libera_Tabuleiro();
    void bloqueia_Tabuleiro();
    void ativa_label();
    void desativa_label();
    void atualiza_Tabuleiro(int, int, int);
    bool valida_jogada(int, int, int);
    bool valida_vencedor();
};

#endif // TABULEIRO_H
