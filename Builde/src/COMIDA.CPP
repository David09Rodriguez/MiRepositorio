#include "Comida.h"

Comida::Comida()
{
    //ctor
}
bool Comida::vacio()
{
    if(miComida.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Comida::insertarComida(string comida)
{
    miComida.push(comida);
}
void Comida::eliminarComida()
{
    miComida.pop();
}

void Comida::consultar()
{
    bool resultar;
    resultar=vacio();

    if(resultar==false)
    {
        cout<<miComida.front();
    }
    else
    {
        cout<<"Vacio"<<endl;
    }
}

string Comida::servirComida()
{
    stringstream s;
     while(miComida.size()!=0)
     {

     s<<miComida.front();
     miComida.pop();
     }
     return s.str();
}

Comida::~Comida()
{
    //dtor
}
