#include "jogador.h"

Jogador::Jogador(){}


/*
 * int player = 1 (player 01)
 *              2 (player 02)
 * */

void Jogador::inicia_Jogador(Ui::MainWindow *ui, int player){
    Peca peca1;
    Peca peca2;
    Peca peca3;
    Peca peca4;
    Peca peca5;
    Peca peca6;
    if(player == 1){
        _label = ui->label_Jogador1;
        peca1.inicia_peca(ui->btn_Peca11, 1, 1);
        peca2.inicia_peca(ui->btn_Peca12, 1, 1);
        peca3.inicia_peca(ui->btn_Peca13, 1, 2);
        peca4.inicia_peca(ui->btn_Peca14, 1, 2);
        peca5.inicia_peca(ui->btn_Peca15, 1, 3);
        peca6.inicia_peca(ui->btn_Peca16, 1, 3);
    }else if (player == 2){
        _label = ui->label_Jogador2;
        peca1.inicia_peca(ui->btn_Peca21, 2, 1);
        peca2.inicia_peca(ui->btn_Peca22, 2, 1);
        peca3.inicia_peca(ui->btn_Peca23, 2, 2);
        peca4.inicia_peca(ui->btn_Peca24, 2, 2);
        peca5.inicia_peca(ui->btn_Peca25, 2, 3);
        peca6.inicia_peca(ui->btn_Peca26, 2, 3);
    }
    _peca1 = &peca1;
    _peca2 = &peca2;
    _peca3 = &peca3;
    _peca4 = &peca4;
    _peca5 = &peca5;
    _peca6 = &peca6;
}

void Jogador::ativa_label(){
    _label->show();
}
void Jogador::desativa_label(){
    _label->clear();
}
