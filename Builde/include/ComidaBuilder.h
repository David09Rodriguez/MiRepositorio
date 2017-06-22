#ifndef COMIDABUILDER_H
#define COMIDABUILDER_H
#include "Comida.h"

class ComidaBuilder
{
    public:
        ComidaBuilder();
        Comida getComida();
        virtual void construirAperitivo()=0;
        virtual void construirPlatoFuerte()=0;
        virtual void construirPostre()=0;
        ~ComidaBuilder();

    public:
        Comida miComida;
};


//-------Herencia---------//

class ComidaChina:
    public ComidaBuilder
{
public:
    ComidaChina()
    {
    }
    void construirAperitivo()
    {
        miComida.insertarComida("_______Arroz cantones_______");
    }

    void construirPlatoFuerte()
    {
       miComida.insertarComida("_______Pulpo a la mantequilla_______");
    }

    void construirPostre()
    {
        miComida.insertarComida("_______Gelatina en salsa de tutifruti_______");
    }
};

class ComidaMexicana:
    public ComidaBuilder
{
    public:
    ComidaMexicana()
    {
    }
    void construirAperitivo()
    {
        miComida.insertarComida("_______Elotes en queso fundido_______");
    }

    void construirPlatoFuerte()
    {
       miComida.insertarComida("_______Tamal de rajas_______");
    }

    void construirPostre()
    {
        miComida.insertarComida("_______Elotes picantes_______");
    }
};

class ComidaIndu:
    public ComidaBuilder
{
    public:
    ComidaIndu(){}
    void construirAperitivo()
    {
        miComida.insertarComida("_______Papas condimentadas_______");
    }

    void construirPlatoFuerte()
    {
       miComida.insertarComida("_______Carne en salsa curry_______");
    }

    void construirPostre()
    {
        miComida.insertarComida("_______Brownie dinamita_______");
    }
};

#endif // COMIDABUILDER_H
