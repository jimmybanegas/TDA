#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;
#include "Empleado.h"

class Nodo
{
    public:
        Empleado *emp;
        Nodo *siguiente;
        Nodo(int id, string nombre);
        virtual ~Nodo();
    protected:
    private:
};

#endif // NODO_H
