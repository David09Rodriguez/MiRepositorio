#ifndef CHEF_H
#define CHEF_H
#include "ComidaBuilder.h"

class Chef
{
    public:
        Chef();

        void setComidaBuilder(ComidaBuilder *miComidaBuilder);
        const Comida& getcomida();
        void crearComida();

        ~Chef();

    public:
        ComidaBuilder *miComidaBuilder;
};

#endif // CHEF_H
