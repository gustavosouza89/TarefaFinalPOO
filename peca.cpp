#include "peca.h"

Peca::Peca() {}

/*
 * int tipo =   0 (tabuleiro)
 *              1 (jogador 1)
 *              2 (jogador 2)
 * int tamanho =    1 (peça menor)
 *                  2 (peça média)
 *                  3 (peça maior)
 * */

Peca::Peca(QPushButton * bt, int tipo, int tamanho){
    peca_button = bt;
    QString caminho;
    if(tipo == 0);
    else if(tipo == 1 && tamanho == 1){
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
    bt->setIcon(peca_icon);
}