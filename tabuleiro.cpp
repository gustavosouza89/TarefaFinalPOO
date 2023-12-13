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

bool Tabuleiro::valida_jogada(int jogador, int peca, int tab){
    int jog = 0, tam = 0, tamanho = 0;
    if(peca == 1 || peca == 2)
        tamanho = 1;
    else     if(peca == 3 || peca == 4)
        tamanho = 2;
    else     if(peca == 5 || peca == 6)
        tamanho = 3;
    switch (tab) {
    case 1:
        if(_peca1.get_jogador() == 0){
            _peca1.set_jogador(jogador);
            _peca1.set_tamanho(tamanho);
            return true;
        } else {
            jog = _peca1.get_jogador();
            tam = _peca1.get_tamanho();
        }
        if(jog == jogador)
            return false;
        if((tam + 1) == tamanho){
            _peca1.set_jogador(jogador);
            _peca1.set_tamanho(tamanho);
            return true;
        }else
            return false;
        break;
    case 2:
        if(_peca2.get_jogador() == 0){
            _peca2.set_jogador(jogador);
            _peca2.set_tamanho(tamanho);
            return true;
        } else {
            jog = _peca2.get_jogador();
            tam = _peca2.get_tamanho();
        }
        if(jog == jogador)
            return false;
        if((tam + 1) == tamanho){
            _peca2.set_jogador(jogador);
            _peca2.set_tamanho(tamanho);
            return true;
        }else
            return false;
        break;
    case 3:
        if(_peca3.get_jogador() == 0){
            _peca3.set_jogador(jogador);
            _peca3.set_tamanho(tamanho);
            return true;
        } else {
            jog = _peca3.get_jogador();
            tam = _peca3.get_tamanho();
        }
        if(jog == jogador)
            return false;
        if((tam + 1) == tamanho){
            _peca3.set_jogador(jogador);
            _peca3.set_tamanho(tamanho);
            return true;
        }else
            return false;
        break;
    case 4:
        if(_peca4.get_jogador() == 0){
            _peca4.set_jogador(jogador);
            _peca4.set_tamanho(tamanho);
            return true;
        } else {
            jog = _peca4.get_jogador();
            tam = _peca4.get_tamanho();
        }
        if(jog == jogador)
            return false;
        if((tam + 1) == tamanho){
            _peca4.set_jogador(jogador);
            _peca4.set_tamanho(tamanho);
            return true;
        }else
            return false;
        break;
    case 5:
        if(_peca5.get_jogador() == 0){
            _peca5.set_jogador(jogador);
            _peca5.set_tamanho(tamanho);
            return true;
        } else {
            jog = _peca5.get_jogador();
            tam = _peca5.get_tamanho();
        }
        if(jog == jogador)
            return false;
        if((tam + 1) == tamanho){
            _peca5.set_jogador(jogador);
            _peca5.set_tamanho(tamanho);
            return true;
        }else
            return false;
        break;
    case 6:
        if(_peca6.get_jogador() == 0){
            _peca6.set_jogador(jogador);
            _peca6.set_tamanho(tamanho);
            return true;
        } else {
            jog = _peca6.get_jogador();
            tam = _peca6.get_tamanho();
        }
        if(jog == jogador)
            return false;
        if((tam + 1) == tamanho){
            _peca6.set_jogador(jogador);
            _peca6.set_tamanho(tamanho);
            return true;
        }else
            return false;
        break;
    case 7:
        if(_peca7.get_jogador() == 0){
            _peca7.set_jogador(jogador);
            _peca7.set_tamanho(tamanho);
            return true;
        } else {
            jog = _peca7.get_jogador();
            tam = _peca7.get_tamanho();
        }
        if(jog == jogador)
            return false;
        if((tam + 1) == tamanho){
            _peca7.set_jogador(jogador);
            _peca7.set_tamanho(tamanho);
            return true;
        }else
            return false;
        break;
    case 8:
        if(_peca8.get_jogador() == 0){
            _peca8.set_jogador(jogador);
            _peca8.set_tamanho(tamanho);
            return true;
        } else {
            jog = _peca8.get_jogador();
            tam = _peca8.get_tamanho();
        }
        if(jog == jogador)
            return false;
        if((tam + 1) == tamanho){
            _peca8.set_jogador(jogador);
            _peca8.set_tamanho(tamanho);
            return true;
        }else
            return false;
        break;
    case 9:
        if(_peca9.get_jogador() == 0){
            _peca9.set_jogador(jogador);
            _peca9.set_tamanho(tamanho);
            return true;
        } else {
            jog = _peca9.get_jogador();
            tam = _peca9.get_tamanho();
        }
        if(jog == jogador)
            return false;
        if((tam + 1) == tamanho){
            _peca9.set_jogador(jogador);
            _peca9.set_tamanho(tamanho);
            return true;
        }else
            return false;
        break;
    default:
        break;
    }
}

bool Tabuleiro::valida_vencedor(){
    if((_peca1.get_jogador() == _peca2.get_jogador()) && (_peca2.get_jogador() == _peca3.get_jogador()) && (_peca3.get_jogador() != 0))
        return true;
    else if((_peca4.get_jogador() == _peca5.get_jogador()) && (_peca5.get_jogador() == _peca6.get_jogador()) && (_peca6.get_jogador() != 0))
        return true;
    else if((_peca7.get_jogador() == _peca8.get_jogador()) && (_peca8.get_jogador() == _peca9.get_jogador()) && (_peca9.get_jogador() != 0))
        return true;
    else if((_peca1.get_jogador() == _peca4.get_jogador()) && (_peca4.get_jogador() == _peca7.get_jogador()) && (_peca7.get_jogador() != 0))
        return true;
    else if((_peca2.get_jogador() == _peca5.get_jogador()) && (_peca5.get_jogador() == _peca8.get_jogador()) && (_peca8.get_jogador() != 0))
        return true;
    else if((_peca3.get_jogador() == _peca6.get_jogador()) && (_peca6.get_jogador() == _peca9.get_jogador()) && (_peca9.get_jogador() != 0))
        return true;
    else if((_peca1.get_jogador() == _peca5.get_jogador()) && (_peca5.get_jogador() == _peca9.get_jogador()) && (_peca9.get_jogador() != 0))
        return true;
    else if((_peca7.get_jogador() == _peca5.get_jogador()) && (_peca5.get_jogador() == _peca3.get_jogador()) && (_peca3.get_jogador() != 0))
        return true;
    else return false;
}
