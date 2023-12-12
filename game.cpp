#include "game.h"

Game::Game() {}

void Game::inicia_Game(Ui::MainWindow * ui) {
    _ui = ui;
    _player01.inicia_Jogador(ui, 1);
    _player02.inicia_Jogador(ui, 2);
    _tab.inicia_Tabuleiro(ui);
    _player02.desativa_label();
    _player02.bloqueia_peca();
    _player01.ativa_label();
    _player01.libera_peca();
    _tab.bloqueia_Tabuleiro();
}

void Game::novo_jogo(){
    _player02.desativa_label();
    _player01.ativa_label();
    _player01.libera_peca();
}

void Game::peca_clicada(int jogador, int peca){
    _tab.libera_Tabuleiro();
    if(jogador == 1){
        _player01.desativa_label();
        _player01.limpa_peca(peca);
        _player01.bloqueia_peca();
    }else if (jogador == 2){
        _player02.desativa_label();
        _player02.limpa_peca(peca);
        _player02.bloqueia_peca();
    }
}

void Game::tab_clicado(int jogador, int peca, int tab){
    _tab.atualiza_Tabuleiro(jogador, peca, tab);
    _tab.bloqueia_Tabuleiro();
    if(jogador == 1){
        _player02.libera_peca();
    }else if (jogador == 2){
        _player01.libera_peca();
    }
}
