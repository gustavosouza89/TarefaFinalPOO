#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _game.inicia_Game(ui);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_NovoJogo_clicked(){
    _game.novo_jogo();
}

void MainWindow::on_btn_Peca11_clicked()
{
    _jogador = 1;
    _pecas_jogo = 1;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
    _game.peca_clicada(_jogador, _pecas_jogo);
}

void MainWindow::on_btn_Peca12_clicked()
{
    _jogador = 1;
    _pecas_jogo = 2;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
    _game.peca_clicada(_jogador, _pecas_jogo);
}

void MainWindow::on_btn_Peca13_clicked()
{
    _jogador = 1;
    _pecas_jogo = 3;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
    _game.peca_clicada(_jogador, _pecas_jogo);
}

void MainWindow::on_btn_Peca14_clicked()
{
    _jogador = 1;
    _pecas_jogo = 4;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
    _game.peca_clicada(_jogador, _pecas_jogo);
}

void MainWindow::on_btn_Peca15_clicked()
{
    _jogador = 1;
    _pecas_jogo = 5;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
    _game.peca_clicada(_jogador, _pecas_jogo);
}

void MainWindow::on_btn_Peca16_clicked()
{
    _jogador = 1;
    _pecas_jogo = 6;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
    _game.peca_clicada(_jogador, _pecas_jogo);
}

void MainWindow::on_btn_Peca21_clicked()
{
    _jogador = 2;
    _pecas_jogo = 1;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
    _game.peca_clicada(_jogador, _pecas_jogo);
}

void MainWindow::on_btn_Peca22_clicked()
{
    _jogador = 2;
    _pecas_jogo = 2;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
    _game.peca_clicada(_jogador, _pecas_jogo);
}

void MainWindow::on_btn_Peca23_clicked()
{
    _jogador = 2;
    _pecas_jogo = 3;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
    _game.peca_clicada(_jogador, _pecas_jogo);
}

void MainWindow::on_btn_Peca24_clicked()
{
    _jogador = 2;
    _pecas_jogo = 4;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
    _game.peca_clicada(_jogador, _pecas_jogo);
}

void MainWindow::on_btn_Peca25_clicked()
{
    _jogador = 2;
    _pecas_jogo = 5;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
    _game.peca_clicada(_jogador, _pecas_jogo);
}

void MainWindow::on_btn_Peca26_clicked()
{
    _jogador = 2;
    _pecas_jogo = 6;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo));
    _game.peca_clicada(_jogador, _pecas_jogo);
}


void MainWindow::on_btn_Jogo11_clicked()
{
    _tab_posicao = 1;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tab_posicao));
    _game.tab_clicado(_jogador, _pecas_jogo, _tab_posicao);
}


void MainWindow::on_btn_Jogo12_clicked()
{
    _tab_posicao = 2;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tab_posicao));
        _game.tab_clicado(_jogador, _pecas_jogo, _tab_posicao);
}


void MainWindow::on_btn_Jogo13_clicked()
{
    _tab_posicao = 3;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tab_posicao));
        _game.tab_clicado(_jogador, _pecas_jogo, _tab_posicao);
}

void MainWindow::on_btn_Jogo21_clicked()
{
    _tab_posicao = 4;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tab_posicao));
        _game.tab_clicado(_jogador, _pecas_jogo, _tab_posicao);
}


void MainWindow::on_btn_Jogo22_clicked()
{
    _tab_posicao = 5;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tab_posicao));
        _game.tab_clicado(_jogador, _pecas_jogo, _tab_posicao);
}


void MainWindow::on_btn_Jogo23_clicked()
{
    _tab_posicao = 6;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tab_posicao));
        _game.tab_clicado(_jogador, _pecas_jogo, _tab_posicao);
}


void MainWindow::on_btn_Jogo31_clicked()
{
    _tab_posicao = 7;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tab_posicao));
        _game.tab_clicado(_jogador, _pecas_jogo, _tab_posicao);
}


void MainWindow::on_btn_Jogo32_clicked()
{
    _tab_posicao = 8;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tab_posicao));
        _game.tab_clicado(_jogador, _pecas_jogo, _tab_posicao);
}


void MainWindow::on_btn_Jogo33_clicked()
{
    _tab_posicao = 9;
    ui->statusbar->showMessage("Jogador: " + QString::number(_jogador) + " Peça: " + QString::number(_pecas_jogo) + " Tabuleiro: " + QString::number(_tab_posicao));
        _game.tab_clicado(_jogador, _pecas_jogo, _tab_posicao);
}


