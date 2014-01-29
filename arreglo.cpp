#include "arreglo.h"
#include "empleado.h"

Arreglo::Arreglo()
{
    this->cont=cant;
}

bool Arreglo::insertar(int pos, Empleado *emp)
{
    if(pos<0 || pos>50 || pos>cont )
        return false;

    if(cont>50-1)
       return false;

    int i=cont;

    do
    {
      empleados[i]=empleados[i-1];
      i--;
    }while(i>pos);

    empleados[pos]=emp;
    cont++;
    return true;
}

Empleado *Arreglo::inicio()
{
    if(cont>0)
        return empleados[0];

    return NULL;
}

Empleado *Arreglo::fin()
{
    if(cont>0)
        return empleados[cont-1];

    return NULL;
}

Empleado *Arreglo::siguiente(int pos)
{
    if(pos>=cont-1 || pos<0)
      return NULL;

    return empleados[pos+1];
}

Empleado *Arreglo::recuperar(int pos)
{
    if(pos>=cont || pos<0)
        return NULL;

    return empleados[pos];
}

bool Arreglo::eliminar(int pos)
{
    if(pos<0 || pos>=cont)
        return false;

    for(int i=pos;i<cont-1;i++)
    {
        empleados[i]=empleados[i+1];
    }
    cont--;
    return true;
}

bool Arreglo::mover(int from, int to)
{
    Empleado *temp=recuperar(from);

    if(temp!=NULL)
    {
        if(eliminar(from))
          if(insertar(to,temp))
             return true;
    }

    return false;
}

void Arreglo::imprimir()
{
    cout<<"\nContador: "<<cont<<endl;
    if(cont>0)
    {
        for(int i=0;i<cont;i++)
            cout<<"-----"<<empleados[i]->id<<" "<<empleados[i]->nombre<<endl;
    }
}
