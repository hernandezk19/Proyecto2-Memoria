#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <stdbool.h>
#include <QPushButton>
#include "tarjeta.h"
#include "pareja.h"

#ifndef MEMORIA_H
#define MEMORIA_H

class Memoria
{
    public:
        clock_t begin;
        clock_t end;
        std::vector<Pareja*> vector_asociativo;
        Tarjeta *matriz_tarjetas[4][5];
        std::vector<Tarjeta*> vector_tarjetas;
        int parejas_correctas = 0;

        Memoria();
        virtual void llenar_vector()= 0;
        void llenar_matriz();
        bool comparar_tarjetas(Tarjeta, Tarjeta);
        void mezclar_vector();
        bool verificar_ganador();
        void iniciar_tablero();
        virtual void mostrarImagen(QPushButton &, std::string);
        Tarjeta &encontrar_tarjeta(int, int);
        std::pair<int,int> encontrar_boton(Tarjeta &);
        void llenar_pares();
};
#endif // MEMORIA_H
