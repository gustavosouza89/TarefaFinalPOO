#include "tabuleiro.h"

Tabuleiro::Tabuleiro(){}

void Tabuleiro::inicia_Tabuleiro(Ui::MainWindow *ui){
    _label = ui->label_Tabuleiro;
    QPixmap img_tabuleiro("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Jogo.png");
    _label->setPixmap(img_tabuleiro);
    _peca1.inicia_peca(ui->btn_Jogo11, 0, 00);
    _peca2.inicia_peca(ui->btn_Jogo12, 0, 00);
    _peca3.inicia_peca(ui->btn_Jogo13, 0, 00);
    _peca4.inicia_peca(ui->btn_Jogo21, 0, 00);
    _peca5.inicia_peca(ui->btn_Jogo22, 0, 00);
    _peca6.inicia_peca(ui->btn_Jogo23, 0, 00);
    _peca7.inicia_peca(ui->btn_Jogo31, 0, 00);
    _peca8.inicia_peca(ui->btn_Jogo32, 0, 00);
    _peca9.inicia_peca(ui->btn_Jogo33, 0, 00);
}

void Tabuleiro::libera_Tabuleiro(){
    _peca1.habilita_peca();
    _peca2.habilita_peca();
    _peca3.habilita_peca();
    _peca4.habilita_peca();
    _peca5.habilita_peca();
    _peca6.habilita_peca();
    _peca7.habilita_peca();
    _peca8.habilita_peca();
    _peca9.habilita_peca();
}

void Tabuleiro::bloqueia_Tabuleiro(){
    _peca1.desabilita_peca();
    _peca2.desabilita_peca();
    _peca3.desabilita_peca();
    _peca4.desabilita_peca();
    _peca5.desabilita_peca();
    _peca6.desabilita_peca();
    _peca7.desabilita_peca();
    _peca8.desabilita_peca();
    _peca9.desabilita_peca();
}

void Tabuleiro::ativa_label(){
    _label->show();
}
void Tabuleiro::desativa_label(){
    _label->clear();
}

void Tabuleiro::atualiza_Tabuleiro(int jogador, int peca, int tab){
    int tamanho=0;
    if(peca == 1 || peca == 2)
        tamanho = 1;
    else     if(peca == 3 || peca == 4)
        tamanho = 2;
    else     if(peca == 5 || peca == 6)
        tamanho = 3;

    switch (tab) {
    case 1:
        _peca1.atualiza_peca(jogador, tamanho);
        break;
    case 2:
        _peca2.atualiza_peca(jogador, tamanho);
        break;
    case 3:
        _peca3.atualiza_peca(jogador, tamanho);
        break;
    case 4:
        _peca4.atualiza_peca(jogador, tamanho);
        break;
    case 5:
        _peca5.atualiza_peca(jogador, tamanho);
        break;
    case 6:
        _peca6.atualiza_peca(jogador, tamanho);
        break;
    case 7:
        _peca7.atualiza_peca(jogador, tamanho);
        break;
    case 8:
        _peca8.atualiza_peca(jogador, tamanho);
        break;
    case 9:
        _peca9.atualiza_peca(jogador, tamanho);
        break;
    default:
        break;
    }

}
