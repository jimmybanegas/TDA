#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
using namespace std;

class Empleado
{
    public:
        int id;
        string nombre;
        Empleado(int id, string nombre);
        Empleado();
        virtual ~Empleado();
    protected:
    private:
};

#endif // EMPLEADO_H
