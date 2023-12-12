#include "jogador.h"

Jogador::Jogador(){}


/*
 * int player = 1 (player 01)
 *              2 (player 02)
 * */

void Jogador::inicia_Jogador(Ui::MainWindow *ui, int player){
    if(player == 1){
        _label = ui->label_Jogador1;
        _peca1.inicia_peca(ui->btn_Peca11, 1, 1);
        _peca2.inicia_peca(ui->btn_Peca12, 1, 1);
        _peca3.inicia_peca(ui->btn_Peca13, 1, 2);
        _peca4.inicia_peca(ui->btn_Peca14, 1, 2);
        _peca5.inicia_peca(ui->btn_Peca15, 1, 3);
        _peca6.inicia_peca(ui->btn_Peca16, 1, 3);
    }else if (player == 2){
        _label = ui->label_Jogador2;
        _peca1.inicia_peca(ui->btn_Peca21, 2, 1);
        _peca2.inicia_peca(ui->btn_Peca22, 2, 1);
        _peca3.inicia_peca(ui->btn_Peca23, 2, 2);
        _peca4.inicia_peca(ui->btn_Peca24, 2, 2);
        _peca5.inicia_peca(ui->btn_Peca25, 2, 3);
        _peca6.inicia_peca(ui->btn_Peca26, 2, 3);
    }
}

void Jogador::libera_peca(){
    _peca1.habilita_peca();
    _peca2.habilita_peca();
    _peca3.habilita_peca();
    _peca4.habilita_peca();
    _peca5.habilita_peca();
    _peca6.habilita_peca();
}

void Jogador::bloqueia_peca(){
    _peca1.desabilita_peca();
    _peca2.desabilita_peca();
    _peca3.desabilita_peca();
    _peca4.desabilita_peca();
    _peca5.desabilita_peca();
    _peca6.desabilita_peca();
}

void Jogador::ativa_label(){
    _label->show();
}
void Jogador::desativa_label(){
    _label->clear();
}

void Jogador::limpa_peca(int peca){
    switch (peca) {
    case 1:
        _peca1.limpa_peca();
        break;
    case 2:
        _peca2.limpa_peca();
        break;
    case 3:
        _peca3.limpa_peca();
        break;
    case 4:
        _peca4.limpa_peca();
        break;
    case 5:
        _peca5.limpa_peca();
        break;
    case 6:
        _peca6.limpa_peca();
        break;
    default:
        break;
    }
}
