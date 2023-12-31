#include "peca.h"

Peca::Peca(){}


/*
 * int tipo =   0 (tabuleiro)
 *              1 (jogador 1)
 *              2 (jogador 2)
 * int tamanho =    1 (peça menor)
 *                  2 (peça média)
 *                  3 (peça maior)
 * */

void Peca::inicia_peca(QPushButton * bt, int tipo, int tamanho){
    peca_button = bt;
    peca_button->show();
    _jogador = 0;
    _tamanho = 0;
    peca_button->blockSignals(true);
    QString caminho;
    if(tipo == 0){
        peca_button->setIcon(QIcon());
    }
    else {if(tipo == 1 && tamanho == 1){
        caminho = "C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca11.png";
    }
    else if(tipo == 1 && tamanho == 2){
        caminho = "C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca12.png";
    }
    else if(tipo == 1 && tamanho == 3){
        caminho = "C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca13.png";
    }
    else if(tipo == 2 && tamanho == 1){
        caminho = "C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca21.png";
    }
    else if(tipo == 2 && tamanho == 2){
        caminho = "C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca22.png";
    }
    else if(tipo == 2 && tamanho == 3){
        caminho = "C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca23.png";
    }
    QPixmap peca_icon(caminho);
    bt->setIcon(peca_icon);}
}

void Peca::habilita_peca(){
    //peca_button->setDisabled(false);
    peca_button->blockSignals(false);
}
void Peca::desabilita_peca(){
    //peca_button->setDisabled(true);
    peca_button->blockSignals(true);
}
void Peca::limpa_peca(){
    //peca_button->setIcon(QIcon());
    peca_button->hide();
}

void Peca::atualiza_peca(int tipo, int tamanho){
    QString caminho;
    if(tipo == 0){
        peca_button->setIcon(QIcon());
    }
    else{ if(tipo == 1 && tamanho == 1){
        caminho = "C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca11.png";
    }
    else if(tipo == 1 && tamanho == 2){
        caminho = "C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca12.png";
    }
    else if(tipo == 1 && tamanho == 3){
        caminho = "C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca13.png";
    }
    else if(tipo == 2 && tamanho == 1){
        caminho = "C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca21.png";
    }
    else if(tipo == 2 && tamanho == 2){
        caminho = "C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca22.png";
    }
    else if(tipo == 2 && tamanho == 3){
        caminho = "C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca23.png";
    }
    QPixmap peca_icon(caminho);
    peca_button->setIcon(peca_icon);}
}

void Peca::set_jogador(int jogador){
    _jogador = jogador;
}

void Peca::set_tamanho(int tamanho){
    _tamanho = tamanho;
}

int Peca::get_jogador(){
    return _jogador;
}

int Peca::get_tamanho(){
    return _tamanho;
}
