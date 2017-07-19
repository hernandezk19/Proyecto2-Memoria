#include "memoria.h"

Memoria::Memoria()
{

}

void Memoria::iniciar_tablero()
{
    llenar_vector();
    mezclar_vector();
    llenar_matriz();
    begin = clock();
}

void Memoria::llenar_matriz()
{

    int cont = 0;
    for(int i=0; i<4; ++i)
    {
        for(int j=0; j<5; ++j)
        {
            matriz_tarjetas[i][j] = vector_tarjetas.at(cont);
            cont++;
        }
    }
}

bool Memoria::comparar_tarjetas(Tarjeta tarjeta1, Tarjeta tarjeta2)
{
    return tarjeta1 == tarjeta2;
}

void Memoria::mezclar_vector()
{
    std::srand ( unsigned ( std::time(0) ) );
    std::random_shuffle(vector_tarjetas.begin(),vector_tarjetas.end());
}

bool Memoria::verificar_ganador()
{
    return parejas_correctas == 10;
}

Tarjeta& Memoria::encontrar_tarjeta(int fila, int columna)
{
    for(int i=0; i<20; ++i)
    {
        Pareja* pareja = vector_asociativo.at(i);
        if(pareja->fila == fila && pareja->columna == columna)
        {
            return pareja->tarjeta;
        }
    }
}

void Memoria::llenar_pares()
{
    for(int i=0; i<4; ++i)
    {
        for(int j=0; j<5; ++j)
        {
            Pareja* pareja_nueva = new Pareja(*matriz_tarjetas[i][j],i,j);
            vector_asociativo.push_back(pareja_nueva);
        }
    }
}

std::pair<int,int> Memoria::encontrar_boton(Tarjeta& tarjeta)
{
    std::pair <int,int> coordenadas;
    for(int i=0; i<20; ++i)
    {
        Pareja* pareja = vector_asociativo.at(i);
        if(pareja->tarjeta.nombre == tarjeta.nombre)
        {
            coordenadas.first = pareja->fila;
            coordenadas.second = pareja->columna;
            return coordenadas;
        }
    }
    return coordenadas;
}

void Memoria::mostrarImagen(QPushButton& boton, std::string icono)
{
    QPixmap pix(QString::fromStdString(icono));
    QIcon icon(pix);
    QSize size(115,128);
    boton.setIcon(icon);
    boton.setIconSize(size);
}

