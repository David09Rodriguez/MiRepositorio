#ifndef COMIDA_H
#define COMIDA_H
#include <queue>
#include <iostream>
#include <sstream>

using namespace std;

class Comida
{
    public:
        Comida();
        bool vacio();
        void insertarComida(string);
        void eliminarComida();
        void consultar();
        string servirComida();
        ~Comida();

    private:
        queue<string>miComida;
};

#endif // COMIDA_H
