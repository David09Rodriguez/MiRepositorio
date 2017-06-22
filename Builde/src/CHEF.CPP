#include "Chef.h"

Chef::Chef()
{
    //ctor
}

void Chef::setComidaBuilder(ComidaBuilder *miComidaBuild)  ///listo
{
    if(miComidaBuilder)
    {
            delete miComidaBuilder;
    }
    miComidaBuilder = miComidaBuild;
}

const Comida& Chef::getcomida() ///listo
{
    return miComidaBuilder->getComida();
}

void Chef::crearComida() ///listo
{
    miComidaBuilder->construirAperitivo();
    miComidaBuilder->construirPlatoFuerte();
    miComidaBuilder->construirPostre();
}

Chef::~Chef()
{
    //dtor
}
