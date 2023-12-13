#ifndef GAME_H
#define GAME_H

#include "ui_mainwindow.h"
#include <QObject>
#include "jogador.h"
#include "tabuleiro.h"

class Game
{
public:
    Game();
    void inicia_Game(Ui::MainWindow *);
    void novo_jogo();
    void peca_clicada(int, int);
    void tab_clicado(int, int, int);    
private:
    Tabuleiro _tab;
    Jogador _player01, _player02;
    Ui::MainWindow * _ui;
};

#endif // GAME_H
