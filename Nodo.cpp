#include "Nodo.h"
#include "Lista.h"
#include "Empleado.h"

Nodo::Nodo(int id, string nombre)
{

   this->emp =  new Empleado(id,nombre);
   this->siguiente=NULL;
    //ctor
}

Nodo::~Nodo()
{
    //dtor
}
