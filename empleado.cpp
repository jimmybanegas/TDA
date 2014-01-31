#include "Empleado.h"
#include "Nodo.h"
#include "Lista.h"

Empleado::Empleado(int id, string nombre)
{
    this->id=id;
    this->nombre=nombre;
}


Empleado::~Empleado()
{
    //dtor
}
