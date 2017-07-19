
#include <string>
#ifndef TARJETA_H
#define TARJETA_H
class Tarjeta
{
    public:
    std::string nombre;
    std::string nombre_asociado;

    Tarjeta();
    Tarjeta(std::string, std::string);

    bool operator==(const Tarjeta&);


};
#endif // TARJETA_H
