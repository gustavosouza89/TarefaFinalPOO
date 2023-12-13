#ifndef PECA_H
#define PECA_H

#include <QPushButton>
#include <QPixmap>


class Peca
{
private:
    QPushButton * peca_button;
    int _jogador = 0;
    int _tamanho = 0;
public:
    Peca();
    void inicia_peca(QPushButton *, int, int);
    void habilita_peca();
    void desabilita_peca();
    void limpa_peca();
    void atualiza_peca(int, int);
    void set_jogador(int);
    void set_tamanho(int);
    int get_jogador();
    int get_tamanho();
};

#endif // PECA_H
