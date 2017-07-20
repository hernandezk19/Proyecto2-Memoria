#include "memoriaaritmetica.h"
#include "ui_memoriaaritmetica.h"

MemoriaAritmetica::MemoriaAritmetica(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MemoriaAritmetica)
{
    ui->setupUi(this);
    iniciar_UI();

}
void MemoriaAritmetica::iniciar_UI()
{
    Memoria::iniciar_tablero();
    llenar_matriz_botones();
    Memoria::llenar_pares();
    modificar_botones();
    parejas_correctas = 0;
}


MemoriaAritmetica::~MemoriaAritmetica()
{
    delete ui;
}

void MemoriaAritmetica::llenar_vector()
{
    std::string aux = ":/tarjetas/pareja_aritmetica";
    std::string aux1 = ".1.PNG";
    std::string aux2 = ".2.PNG";
    for(int i = 0; i<10; i++)
    {
        std::string aux3 =  std::to_string(i);
        Tarjeta *tarjeta = new Tarjeta(aux + aux3 + aux1, aux + aux3 + aux2);
        vector_tarjetas.push_back(tarjeta);
        tarjeta = new Tarjeta(aux + aux3 + aux2, aux + aux3 + aux1);
        vector_tarjetas.push_back(tarjeta);
    }
}

void MemoriaAritmetica::llenar_matriz_botones()
{
    tablero[0][0] = ui->pushButton00;
    tablero[0][1] = ui->pushButton01;
    tablero[0][2] = ui->pushButton02;
    tablero[0][3] = ui->pushButton03;
    tablero[0][4] = ui->pushButton04;
    tablero[1][0] = ui->pushButton10;
    tablero[1][1] = ui->pushButton11;
    tablero[1][2] = ui->pushButton12;
    tablero[1][3] = ui->pushButton13;
    tablero[1][4] = ui->pushButton14;
    tablero[2][0] = ui->pushButton20;
    tablero[2][1] = ui->pushButton21;
    tablero[2][2] = ui->pushButton22;
    tablero[2][3] = ui->pushButton23;
    tablero[2][4] = ui->pushButton24;
    tablero[3][0] = ui->pushButton30;
    tablero[3][1] = ui->pushButton31;
    tablero[3][2] = ui->pushButton32;
    tablero[3][3] = ui->pushButton33;
    tablero[3][4] = ui->pushButton34;
}

void MemoriaAritmetica::modificar_botones()
{
    QPixmap pix(":/tarjetas/atras.PNG");
    QIcon icon(pix);
    QSize size(115,128);
    for(int i = 0; i < 4;++i)
    {
        for(int j = 0; j < 5;++j)
        {
            tablero[i][j]->setIcon(icon);
            tablero[i][j]->setIconSize(size);
        }
    }

}

void MemoriaAritmetica::verificar(int x, int y,QPushButton& boton)
{
    if(contador_jugadas == 2)
    {
        if(tarjeta_previa == tarjeta_previa_previa)
        {
            parejas_correctas++;
            tablero[Memoria::encontrar_boton(tarjeta_previa).first][Memoria::encontrar_boton(tarjeta_previa).second]->setEnabled(false);
            tablero[Memoria::encontrar_boton(tarjeta_previa_previa).first][Memoria::encontrar_boton(tarjeta_previa_previa).second]->setEnabled(false);
        }
        else
        {
            Memoria::mostrarImagen(*tablero[Memoria::encontrar_boton(tarjeta_previa).first][Memoria::encontrar_boton(tarjeta_previa).second],":/tarjetas/atras.PNG");
            Memoria::mostrarImagen(*tablero[Memoria::encontrar_boton(tarjeta_previa_previa).first][Memoria::encontrar_boton(tarjeta_previa_previa).second],":/tarjetas/atras.PNG");
        }
        contador_jugadas = 0;
    }
    Tarjeta tarjeta = Memoria::encontrar_tarjeta(x,y);
    Memoria::mostrarImagen(boton,tarjeta.nombre);
    contador_jugadas++;
    if(contador_jugadas == 1)
    {
        tarjeta_previa_previa =  tarjeta;
    }
    if(contador_jugadas == 2)
    {
        tarjeta_previa  =  tarjeta;
        if(parejas_correctas==9)
        {
            tablero[Memoria::encontrar_boton(tarjeta_previa).first][Memoria::encontrar_boton(tarjeta_previa).second]->setEnabled(false);
            tablero[Memoria::encontrar_boton(tarjeta_previa_previa).first][Memoria::encontrar_boton(tarjeta_previa_previa).second]->setEnabled(false);
            end = clock();
            double tiempo = double(end - begin) / CLOCKS_PER_SEC;
            QString etiqueta = "Felicidades has ganado!!! Tiempo: ";
            etiqueta+=QString::number(tiempo);
            etiqueta+=" seg";
            ui->label->setText(etiqueta);
        }
    }
}

void MemoriaAritmetica::on_pushButton00_clicked()
{
    verificar(0,0, *ui->pushButton00);
}


void MemoriaAritmetica::on_pushButton01_clicked()
{
    verificar(0,1, *ui->pushButton01);
}

void MemoriaAritmetica::on_pushButton02_clicked()
{
   verificar(0,2, *ui->pushButton02);
}

void MemoriaAritmetica::on_pushButton03_clicked()
{
    verificar(0,3, *ui->pushButton03);
}

void MemoriaAritmetica::on_pushButton04_clicked()
{
     verificar(0,4, *ui->pushButton04);
}

void MemoriaAritmetica::on_pushButton10_clicked()
{
     verificar(1,0, *ui->pushButton10);
}

void MemoriaAritmetica::on_pushButton11_clicked()
{
    verificar(1,1, *ui->pushButton11);
}

void MemoriaAritmetica::on_pushButton12_clicked()
{
    verificar(1,2, *ui->pushButton12);
}

void MemoriaAritmetica::on_pushButton13_clicked()
{
    verificar(1,3, *ui->pushButton13);
}

void MemoriaAritmetica::on_pushButton14_clicked()
{
    verificar(1,4, *ui->pushButton14);
}

void MemoriaAritmetica::on_pushButton20_clicked()
{
    verificar(2,0, *ui->pushButton20);
}

void MemoriaAritmetica::on_pushButton21_clicked()
{
    verificar(2,1, *ui->pushButton21);
}

void MemoriaAritmetica::on_pushButton22_clicked()
{
    verificar(2,2, *ui->pushButton22);
}

void MemoriaAritmetica::on_pushButton23_clicked()
{
    verificar(2,3, *ui->pushButton23);
}

void MemoriaAritmetica::on_pushButton24_clicked()
{
    verificar(2,4, *ui->pushButton24);
}

void MemoriaAritmetica::on_pushButton30_clicked()
{
    verificar(3,0, *ui->pushButton30);
}

void MemoriaAritmetica::on_pushButton31_clicked()
{
   verificar(3,1, *ui->pushButton31);
}

void MemoriaAritmetica::on_pushButton32_clicked()
{
    verificar(3,2, *ui->pushButton32);
}

void MemoriaAritmetica::on_pushButton33_clicked()
{
    verificar(3,3, *ui->pushButton33);
}

void MemoriaAritmetica::on_pushButton34_clicked()
{
    verificar(3,4, *ui->pushButton34);
}


