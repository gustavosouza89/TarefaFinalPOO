#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Peca peca11(ui->btn_Peca11, 1, 1);
    Peca peca12(ui->btn_Peca12, 1, 1);
    Peca peca13(ui->btn_Peca13, 1, 2);
    Peca peca14(ui->btn_Peca14, 1, 2);
    Peca peca15(ui->btn_Peca15, 1, 3);
    Peca peca16(ui->btn_Peca16, 1, 3);
    Peca peca21(ui->btn_Peca21, 2, 1);
    Peca peca22(ui->btn_Peca22, 2, 1);
    Peca peca23(ui->btn_Peca23, 2, 2);
    Peca peca24(ui->btn_Peca24, 2, 2);
    Peca peca25(ui->btn_Peca25, 2, 3);
    Peca peca26(ui->btn_Peca26, 2, 3);
    /*QPixmap peca11("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca11.png");
    QPixmap peca12("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca12.png");
    QPixmap peca13("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca13.png");
    QPixmap peca21("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca21.png");
    QPixmap peca22("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca22.png");
    QPixmap peca23("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca23.png");
    QPixmap tabuleiro("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Jogo.png");
    ui->label_Peca11->setPixmap(peca11);
    ui->label_Peca12->setPixmap(peca11);
    ui->label_Peca13->setPixmap(peca12);
    ui->label_Peca14->setPixmap(peca12);
    ui->label_Peca15->setPixmap(peca13);
    ui->label_Peca16->setPixmap(peca13);
    ui->label_Peca21->setPixmap(peca21);
    ui->label_Peca22->setPixmap(peca21);
    ui->label_Peca23->setPixmap(peca22);
    ui->label_Peca24->setPixmap(peca22);
    ui->label_Peca25->setPixmap(peca23);
    ui->label_Peca26->setPixmap(peca23);
    ui->label_Tabuleiro->setPixmap(tabuleiro);
    bloqueia_tabuleiro();
    libera_jogador1();*/
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::novo_jogo()
{
    ui->btn_Peca11->show();
    ui->btn_Peca12->show();
    ui->btn_Peca13->show();
    ui->btn_Peca14->show();
    ui->btn_Peca15->show();
    ui->btn_Peca16->show();
    ui->label_Peca11->show();
    ui->label_Peca12->show();
    ui->label_Peca13->show();
    ui->label_Peca14->show();
    ui->label_Peca15->show();
    ui->label_Peca16->show();
    ui->btn_Peca21->show();
    ui->btn_Peca22->show();
    ui->btn_Peca23->show();
    ui->btn_Peca24->show();
    ui->btn_Peca25->show();
    ui->btn_Peca26->show();
    ui->label_Peca21->show();
    ui->label_Peca22->show();
    ui->label_Peca23->show();
    ui->label_Peca24->show();
    ui->label_Peca25->show();
    ui->label_Peca26->show();
    bloqueia_tabuleiro();
    libera_jogador1();
    ui->label_Jogo11->clear();
    ui->label_Jogo12->clear();
    ui->label_Jogo13->clear();
    ui->label_Jogo21->clear();
    ui->label_Jogo22->clear();
    ui->label_Jogo23->clear();
    ui->label_Jogo31->clear();
    ui->label_Jogo32->clear();
    ui->label_Jogo33->clear();
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            _tabuleiro[i][j] = 0;
        }
    }
}

void MainWindow::on_btn_Peca11_clicked()
{
    ui->btn_Peca11->hide();
    ui->label_Peca11->hide();
    _jogador = 1;
    _pecas_jogo = 11;
    libera_tabuleiro();
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
}

void MainWindow::on_btn_Peca12_clicked()
{
    ui->btn_Peca12->hide();
    ui->label_Peca12->hide();
    _jogador = 1;
    _pecas_jogo = 11;
    libera_tabuleiro();
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
}

void MainWindow::on_btn_Peca13_clicked()
{
    ui->btn_Peca13->hide();
    ui->label_Peca13->hide();
    _jogador = 1;
    _pecas_jogo = 21;
    libera_tabuleiro();
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
}


void MainWindow::on_btn_Peca14_clicked()
{
    ui->btn_Peca14->hide();
    ui->label_Peca14->hide();
    _jogador = 1;
    _pecas_jogo = 21;
    libera_tabuleiro();
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
}


void MainWindow::on_btn_Peca15_clicked()
{
    ui->btn_Peca15->hide();
    ui->label_Peca15->hide();
    _jogador = 1;
    _pecas_jogo = 31;
    libera_tabuleiro();
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
}


void MainWindow::on_btn_Peca16_clicked()
{
    ui->btn_Peca16->hide();
    ui->label_Peca16->hide();
    _jogador = 1;
    _pecas_jogo = 31;
    libera_tabuleiro();
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
}


void MainWindow::on_btn_Peca21_clicked()
{
    ui->btn_Peca21->hide();
    ui->label_Peca21->hide();
    _jogador = 2;
    _pecas_jogo = 21;
    libera_tabuleiro();
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
}


void MainWindow::on_btn_Peca22_clicked()
{
    ui->btn_Peca22->hide();
    ui->label_Peca22->hide();
    _jogador = 2;
    _pecas_jogo = 21;
    libera_tabuleiro();
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
}


void MainWindow::on_btn_Peca23_clicked()
{
    ui->btn_Peca23->hide();
    ui->label_Peca23->hide();
    _jogador = 2;
    _pecas_jogo = 22;
    libera_tabuleiro();
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
}


void MainWindow::on_btn_Peca24_clicked()
{
    ui->btn_Peca24->hide();
    ui->label_Peca24->hide();
    _jogador = 2;
    _pecas_jogo = 22;
    libera_tabuleiro();
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
}


void MainWindow::on_btn_Peca25_clicked()
{
    ui->btn_Peca25->hide();
    ui->label_Peca25->hide();
    _jogador = 2;
    _pecas_jogo = 32;
    libera_tabuleiro();
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
}


void MainWindow::on_btn_Peca26_clicked()
{
    ui->btn_Peca26->hide();
    ui->label_Peca26->hide();
    _jogador = 2;
    _pecas_jogo = 32;
    libera_tabuleiro();
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
}

void MainWindow::libera_tabuleiro()
{
    ui->btn_Jogo11->setDisabled(false);
    ui->btn_Jogo12->setDisabled(false);
    ui->btn_Jogo13->setDisabled(false);
    ui->btn_Jogo21->setDisabled(false);
    ui->btn_Jogo22->setDisabled(false);
    ui->btn_Jogo23->setDisabled(false);
    ui->btn_Jogo31->setDisabled(false);
    ui->btn_Jogo32->setDisabled(false);
    ui->btn_Jogo33->setDisabled(false);
}

void MainWindow::bloqueia_tabuleiro()
{
    ui->btn_Jogo11->setDisabled(true);
    ui->btn_Jogo12->setDisabled(true);
    ui->btn_Jogo13->setDisabled(true);
    ui->btn_Jogo21->setDisabled(true);
    ui->btn_Jogo22->setDisabled(true);
    ui->btn_Jogo23->setDisabled(true);
    ui->btn_Jogo31->setDisabled(true);
    ui->btn_Jogo32->setDisabled(true);
    ui->btn_Jogo33->setDisabled(true);
}

void MainWindow::libera_jogador1()
{
    ui->label_Jogador2->hide();
    ui->btn_Peca21->setDisabled(true);
    ui->btn_Peca22->setDisabled(true);
    ui->btn_Peca23->setDisabled(true);
    ui->btn_Peca24->setDisabled(true);
    ui->btn_Peca25->setDisabled(true);
    ui->btn_Peca26->setDisabled(true);

    ui->label_Jogador1->show();
    ui->btn_Peca11->setDisabled(false);
    ui->btn_Peca12->setDisabled(false);
    ui->btn_Peca13->setDisabled(false);
    ui->btn_Peca14->setDisabled(false);
    ui->btn_Peca15->setDisabled(false);
    ui->btn_Peca16->setDisabled(false);
}
void MainWindow::libera_jogador2()
{
    ui->label_Jogador1->hide();
    ui->btn_Peca11->setDisabled(true);
    ui->btn_Peca12->setDisabled(true);
    ui->btn_Peca13->setDisabled(true);
    ui->btn_Peca14->setDisabled(true);
    ui->btn_Peca15->setDisabled(true);
    ui->btn_Peca16->setDisabled(true);

    ui->label_Jogador2->show();
    ui->btn_Peca21->setDisabled(false);
    ui->btn_Peca22->setDisabled(false);
    ui->btn_Peca23->setDisabled(false);
    ui->btn_Peca24->setDisabled(false);
    ui->btn_Peca25->setDisabled(false);
    ui->btn_Peca26->setDisabled(false);
}

void MainWindow::on_btn_Jogo11_clicked()
{
    int x = 0, y = 0;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tabuleiro[x][y]));
    QPixmap peca11("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca11.png");
    QPixmap peca12("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca12.png");
    QPixmap peca13("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca13.png");
    QPixmap peca21("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca21.png");
    QPixmap peca22("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca22.png");
    QPixmap peca23("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca23.png");
    if(_jogador == 1){
        switch (_pecas_jogo) {
        case 11:
            if(_tabuleiro[x][y] == 0){
                ui->label_Jogo11->setPixmap(peca11);
                _tabuleiro[x][y] = 11;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 21:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo11->setPixmap(peca12);
                _tabuleiro[x][y] = 21;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 31:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo11->setPixmap(peca13);
                _tabuleiro[x][y] = 31;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }else{
        switch (_pecas_jogo) {
        case 12:
            if(_tabuleiro[x][y] == 0){
                ui->label_Jogo11->setPixmap(peca21);
                _tabuleiro[x][y] = 12;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 22:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo11->setPixmap(peca22);
                _tabuleiro[x][y] = 22;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 32:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo11->setPixmap(peca23);
                _tabuleiro[x][y] = 32;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }
}


void MainWindow::on_btn_Jogo12_clicked()
{
    int x = 0, y = 1;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tabuleiro[x][y]));
    QPixmap peca11("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca11.png");
    QPixmap peca12("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca12.png");
    QPixmap peca13("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca13.png");
    QPixmap peca21("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca21.png");
    QPixmap peca22("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca22.png");
    QPixmap peca23("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca23.png");
    if(_jogador == 1){
        switch (_pecas_jogo) {
        case 11:
            if(_tabuleiro[x][y] == 0){
                ui->label_Jogo12->setPixmap(peca11);
                _tabuleiro[x][y] = 11;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 21:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo12->setPixmap(peca12);
                _tabuleiro[x][y] = 21;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 31:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo12->setPixmap(peca13);
                _tabuleiro[x][y] = 31;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }else{
        switch (_pecas_jogo) {
        case 12:
            if(_tabuleiro[x][y] == 0){
                ui->label_Jogo12->setPixmap(peca21);
                _tabuleiro[x][y] = 12;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 22:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo12->setPixmap(peca22);
                _tabuleiro[x][y] = 22;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 32:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo12->setPixmap(peca23);
                _tabuleiro[x][y] = 32;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }
}


void MainWindow::on_btn_Jogo13_clicked()
{
    int x = 0, y = 2;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tabuleiro[x][y]));
    QPixmap peca11("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca11.png");
    QPixmap peca12("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca12.png");
    QPixmap peca13("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca13.png");
    QPixmap peca21("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca21.png");
    QPixmap peca22("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca22.png");
    QPixmap peca23("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca23.png");
    if(_jogador == 1){
        switch (_pecas_jogo) {
        case 11:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo13->setPixmap(peca11);
                _tabuleiro[x][y] = 11;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 21:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo13->setPixmap(peca12);
                _tabuleiro[x][y] = 21;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 31:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo13->setPixmap(peca13);
                _tabuleiro[x][y] = 31;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }else{
        switch (_pecas_jogo) {
        case 12:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo13->setPixmap(peca21);
                _tabuleiro[x][y] = 12;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 22:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo13->setPixmap(peca22);
                _tabuleiro[x][y] = 22;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 32:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo13->setPixmap(peca23);
                _tabuleiro[x][y] = 32;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }
}


void MainWindow::on_btn_Jogo21_clicked()
{
    int x = 1, y = 0;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tabuleiro[x][y]));
    QPixmap peca11("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca11.png");
    QPixmap peca12("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca12.png");
    QPixmap peca13("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca13.png");
    QPixmap peca21("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca21.png");
    QPixmap peca22("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca22.png");
    QPixmap peca23("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca23.png");
    if(_jogador == 1){
        switch (_pecas_jogo) {
        case 11:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo21->setPixmap(peca11);
                _tabuleiro[x][y] = 11;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 21:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo21->setPixmap(peca12);
                _tabuleiro[x][y] = 21;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 31:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo21->setPixmap(peca13);
                _tabuleiro[x][y] = 31;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }else{
        switch (_pecas_jogo) {
        case 12:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo21->setPixmap(peca21);
                _tabuleiro[x][y] = 12;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 22:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo21->setPixmap(peca22);
                _tabuleiro[x][y] = 22;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 32:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo21->setPixmap(peca23);
                _tabuleiro[x][y] = 32;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }
}


void MainWindow::on_btn_Jogo22_clicked()
{
    int x = 1, y = 1;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tabuleiro[x][y]));
    QPixmap peca11("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca11.png");
    QPixmap peca12("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca12.png");
    QPixmap peca13("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca13.png");
    QPixmap peca21("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca21.png");
    QPixmap peca22("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca22.png");
    QPixmap peca23("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca23.png");
    if(_jogador == 1){
        switch (_pecas_jogo) {
        case 11:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo22->setPixmap(peca11);
                _tabuleiro[x][y] = 11;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 21:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo22->setPixmap(peca12);
                _tabuleiro[x][y] = 21;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 31:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo22->setPixmap(peca13);
                _tabuleiro[x][y] = 31;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }else{
        switch (_pecas_jogo) {
        case 12:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo22->setPixmap(peca21);
                _tabuleiro[x][y] = 12;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 22:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo22->setPixmap(peca22);
                _tabuleiro[x][y] = 22;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 32:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo22->setPixmap(peca23);
                _tabuleiro[x][y] = 32;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }
}


void MainWindow::on_btn_Jogo23_clicked()
{
    int x = 1, y = 2;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tabuleiro[x][y]));
    QPixmap peca11("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca11.png");
    QPixmap peca12("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca12.png");
    QPixmap peca13("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca13.png");
    QPixmap peca21("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca21.png");
    QPixmap peca22("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca22.png");
    QPixmap peca23("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca23.png");
    if(_jogador == 1){
        switch (_pecas_jogo) {
        case 11:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo23->setPixmap(peca11);
                _tabuleiro[x][y] = 11;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 21:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo23->setPixmap(peca12);
                _tabuleiro[x][y] = 21;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 31:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo23->setPixmap(peca13);
                _tabuleiro[x][y] = 31;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }else{
        switch (_pecas_jogo) {
        case 12:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo23->setPixmap(peca21);
                _tabuleiro[x][y] = 12;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 22:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo23->setPixmap(peca22);
                _tabuleiro[x][y] = 22;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 32:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo23->setPixmap(peca23);
                _tabuleiro[x][y] = 32;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }
}


void MainWindow::on_btn_Jogo31_clicked()
{
    int x = 2, y = 0;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tabuleiro[x][y]));
    QPixmap peca11("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca11.png");
    QPixmap peca12("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca12.png");
    QPixmap peca13("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca13.png");
    QPixmap peca21("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca21.png");
    QPixmap peca22("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca22.png");
    QPixmap peca23("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca23.png");
    if(_jogador == 1){
        switch (_pecas_jogo) {
        case 11:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo31->setPixmap(peca11);
                _tabuleiro[x][y] = 11;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 21:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo31->setPixmap(peca12);
                _tabuleiro[x][y] = 21;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 31:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo31->setPixmap(peca13);
                _tabuleiro[x][y] = 31;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }else{
        switch (_pecas_jogo) {
        case 12:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo31->setPixmap(peca21);
                _tabuleiro[x][y] = 12;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 22:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo31->setPixmap(peca22);
                _tabuleiro[x][y] = 22;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 32:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo31->setPixmap(peca23);
                _tabuleiro[x][y] = 32;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }
}


void MainWindow::on_btn_Jogo32_clicked()
{
    int x = 2, y = 1;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tabuleiro[x][y]));
    QPixmap peca11("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca11.png");
    QPixmap peca12("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca12.png");
    QPixmap peca13("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca13.png");
    QPixmap peca21("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca21.png");
    QPixmap peca22("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca22.png");
    QPixmap peca23("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca23.png");
    if(_jogador == 1){
        switch (_pecas_jogo) {
        case 11:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo32->setPixmap(peca11);
                _tabuleiro[x][y] = 11;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 21:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo32->setPixmap(peca12);
                _tabuleiro[x][y] = 21;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 31:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo32->setPixmap(peca13);
                _tabuleiro[x][y] = 31;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }else{
        switch (_pecas_jogo) {
        case 12:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo32->setPixmap(peca21);
                _tabuleiro[x][y] = 12;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 22:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo32->setPixmap(peca22);
                _tabuleiro[x][y] = 22;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 32:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo32->setPixmap(peca23);
                _tabuleiro[x][y] = 32;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }
}


void MainWindow::on_btn_Jogo33_clicked()
{
    int x = 2, y = 2;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tabuleiro[x][y]));
    QPixmap peca11("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca11.png");
    QPixmap peca12("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca12.png");
    QPixmap peca13("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca13.png");
    QPixmap peca21("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca21.png");
    QPixmap peca22("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca22.png");
    QPixmap peca23("C:/Users/gu049152/Documents/CODE/IFSC/ProjetoFinal/Imagens/Peca23.png");
    if(_jogador == 1){
        switch (_pecas_jogo) {
        case 11:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo33->setPixmap(peca11);
                _tabuleiro[x][y] = 11;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 21:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo33->setPixmap(peca12);
                _tabuleiro[x][y] = 21;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        case 31:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo33->setPixmap(peca13);
                _tabuleiro[x][y] = 31;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 2;
                libera_jogador2();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }else{
        switch (_pecas_jogo) {
        case 12:
            if(_tabuleiro[x][y] < 10){
                ui->label_Jogo33->setPixmap(peca21);
                _tabuleiro[x][y] = 12;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 22:
            if(_tabuleiro[x][y] < 20){
                ui->label_Jogo33->setPixmap(peca22);
                _tabuleiro[x][y] = 22;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        case 32:
            if(_tabuleiro[x][y] < 30){
                ui->label_Jogo33->setPixmap(peca23);
                _tabuleiro[x][y] = 32;
                ui->statusbar->showMessage("Tabuleiro: " + QString::number(_tabuleiro[x][y]));
                _jogador = 1;
                libera_jogador1();
                bloqueia_tabuleiro();
            }
            break;
        default:
            break;
        }
    }
}

void MainWindow::verifica_se_ganou()
{

}


void MainWindow::on_btn_NovoJogo_clicked()
{
    novo_jogo();
}

