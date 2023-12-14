#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"

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

private slots:
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

private:
    Ui::MainWindow *ui;
    Game _game;
    int _jogador = 0;
    int _pecas_jogo = 0;
    int _tab_posicao = 0;
};
#endif // MAINWINDOW_H
