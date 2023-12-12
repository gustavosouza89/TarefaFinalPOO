#include "tabuleiro.h"

Tabuleiro::Tabuleiro(Ui::MainWindow *ui){
    Peca peca1;
    Peca peca2;
    Peca peca3;
    Peca peca4;
    Peca peca5;
    Peca peca6;
    Peca peca7;
    Peca peca8;
    Peca peca9;
    _label = ui->label_Jogador1;
    QPixmap img_tabuleiro("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Jogo.png");
    _label->setPixmap(img_tabuleiro);
    peca1.inicia_peca(ui->btn_Jogo11, 0, 1);
    peca2.inicia_peca(ui->btn_Jogo12, 0, 1);
    peca3.inicia_peca(ui->btn_Jogo13, 0, 1);
    peca4.inicia_peca(ui->btn_Jogo21, 0, 1);
    peca5.inicia_peca(ui->btn_Jogo22, 0, 1);
    peca6.inicia_peca(ui->btn_Jogo23, 0, 1);
    peca7.inicia_peca(ui->btn_Jogo31, 0, 1);
    peca8.inicia_peca(ui->btn_Jogo32, 0, 1);
    peca9.inicia_peca(ui->btn_Jogo33, 0, 1);
    _peca1 = &peca1;
    _peca2 = &peca2;
    _peca3 = &peca3;
    _peca4 = &peca4;
    _peca5 = &peca5;
    _peca6 = &peca6;
    _peca7 = &peca7;
    _peca8 = &peca8;
    _peca9 = &peca9;
}

void Tabuleiro::ativa_label(){
    _label->show();
}
void Tabuleiro::desativa_label(){
    _label->clear();
}
