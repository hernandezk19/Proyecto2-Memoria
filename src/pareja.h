#include <QPushButton>
#include "tarjeta.h"

#ifndef PAREJA
#define PAREJA

class Pareja
{
    public:
        Tarjeta tarjeta;
        int fila;
        int columna;
        Pareja(Tarjeta, int, int);

};


#endif // PAREJA

