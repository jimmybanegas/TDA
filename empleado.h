#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <iostream>
using namespace std;

class Empleado
{
public:
    int id;
    string nombre;
    Empleado(int id, string nombre);
    Empleado();
};

#endif // EMPLEADO_H
