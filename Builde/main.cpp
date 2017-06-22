#include "Comida.h"
#include <windows.h>
#include "Chef.h"
#include <iostream>
#include "ComidaBuilder.h"

using namespace std;

int main()
{
    Chef cocinando;

    ComidaChina *cc;
    ComidaIndu *ci;
    ComidaMexicana *cm;


    cout<<"Cocinando comida china"<<endl;
    cocinando.setComidaBuilder(new ComidaChina());
    cocinando.crearComida();
    cout<<cocinando.miComidaBuilder->miComida.servirComida();


    cout<<"Cocinando comida Indu"<<endl;
    cocinando.setComidaBuilder(new ComidaIndu());
    cocinando.crearComida();
    cout<<cocinando.miComidaBuilder->miComida.servirComida();


    cout<<"Cocinando comida mexicana"<<endl;
    cocinando.setComidaBuilder(new ComidaMexicana());
    cocinando.crearComida();
    cout<<cocinando.miComidaBuilder->miComida.servirComida();

    return 0;
}
