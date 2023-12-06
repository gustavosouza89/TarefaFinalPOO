#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void libera_tabuleiro();
    void bloqueia_tabuleiro();
    void libera_jogador1();
    void libera_jogador2();
    void verifica_se_ganou();

private slots:
//    void on_pushButton_clicked();
    void on_btn_Peca11_clicked();
    void on_btn_Peca13_clicked();
    void on_btn_Peca14_clicked();
    void on_btn_Peca15_clicked();
    void on_btn_Peca16_clicked();
    void on_btn_Peca12_clicked();
    void on_btn_Peca21_clicked();
    void on_btn_Peca22_clicked();
    void on_btn_Peca23_clicked();
    void on_btn_Peca24_clicked();
    void on_btn_Peca25_clicked();
    void on_btn_Peca26_clicked();
    void on_btn_Jogo11_clicked();
    void on_btn_Jogo12_clicked();
    void on_btn_Jogo13_clicked();
    void on_btn_Jogo21_clicked();
    void on_btn_Jogo22_clicked();
    void on_btn_Jogo23_clicked();
    void on_btn_Jogo31_clicked();
    void on_btn_Jogo32_clicked();
    void on_btn_Jogo33_clicked();    
    void on_btn_NovoJogo_clicked();
    void novo_jogo();

private:
    Ui::MainWindow *ui;
    int _jogador = 0;
    int _pecas_jogo = 0;
    int _tabuleiro[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    int pecas_jogodor1[3] = {11,12,13};
    int pecas_jogodor2[3] = {21,22,23};
};
#endif // MAINWINDOW_H
