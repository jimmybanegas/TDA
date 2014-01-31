#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <iostream>
using namespace std;

class Lista
{
    public:
        Nodo *inicio;
        Nodo *fina;
        int cont;
        bool insertar(int pos, Nodo *nodo);
        Nodo* ini();
        Nodo* fin();
        Nodo* siguiente(int pos);
        Nodo * recuperar(int pos);
        bool eliminar(int pos);
        bool mover(int from, int to);
        void imprimir();
        Lista();
        virtual ~Lista();
    protected:
    private:
};

#endif // LISTA_H
