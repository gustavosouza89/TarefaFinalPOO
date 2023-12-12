#ifndef PECA_H
#define PECA_H

#include <QPushButton>
#include <QPixmap>


class Peca
{
private:
    QPushButton * peca_button;
public:
    Peca();
    void inicia_peca(QPushButton *, int, int);
    void habilita_peca();
    void desabilita_peca();
    void limpa_peca();
    ~Peca();
};

#endif // PECA_H
