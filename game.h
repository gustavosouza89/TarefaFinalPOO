#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "jogador.h"
#include "tabuleiro.h"

class Game
{
public:
    Game();
    void inicia_Game(Ui::MainWindow *);
private:
    Tabuleiro _tab;
    Jogador _player01, _player02;
    Ui::MainWindow * _ui;
};

#endif // GAME_H
