#include "Tarjeta.h"

Tarjeta::Tarjeta(std::string nombre, std::string nombre_asociado):
    nombre(nombre),
    nombre_asociado(nombre_asociado)
{
}

Tarjeta::Tarjeta()
{
}

bool Tarjeta::operator==(const Tarjeta& other)
{
    return this->nombre == other.nombre_asociado;
}

