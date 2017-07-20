#ifndef MEMORIAARITMETICA_H
#define MEMORIAARITMETICA_H

#include <QMainWindow>
#include <QPushButton>
#include <vector>
#include <utility>
#include "memoria.h"
#include "tarjeta.h"
#include "pareja.h"
#include <ctime>

namespace Ui {
class MemoriaAritmetica;
}

class MemoriaAritmetica : public QMainWindow, public Memoria
{
    Q_OBJECT

public:
    int contador_jugadas = 0;
    Tarjeta tarjeta_previa;
    Tarjeta tarjeta_previa_previa;
    QPushButton *tablero[4][5];

    explicit MemoriaAritmetica(QWidget *parent = 0);
    ~MemoriaAritmetica();
    virtual void llenar_vector() override;
    void modificar_botones();
    void llenar_matriz_botones();
    void iniciar_UI();
    void verificar(int, int,QPushButton &);


private slots:
    void on_pushButton00_clicked();

    void on_pushButton01_clicked();

    void on_pushButton02_clicked();

    void on_pushButton03_clicked();

    void on_pushButton04_clicked();

    void on_pushButton10_clicked();

    void on_pushButton11_clicked();

    void on_pushButton12_clicked();

    void on_pushButton13_clicked();

    void on_pushButton14_clicked();

    void on_pushButton20_clicked();

    void on_pushButton21_clicked();

    void on_pushButton22_clicked();

    void on_pushButton23_clicked();

    void on_pushButton24_clicked();

    void on_pushButton30_clicked();

    void on_pushButton31_clicked();

    void on_pushButton32_clicked();

    void on_pushButton33_clicked();

    void on_pushButton34_clicked();


private:
    Ui::MemoriaAritmetica *ui;
};

#endif // MEMORIAARITMETICA_H
