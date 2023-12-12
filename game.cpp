#include "game.h"

Game::Game() {}

void Game::inicia_Game(Ui::MainWindow * ui) {
    _ui = ui;
    _player01.inicia_Jogador(_ui, 1);
    _player02.inicia_Jogador(_ui, 2);
    _tab.inicia_Tabuleiro(_ui);
}
