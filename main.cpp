#include <QCoreApplication>
#include "empleado.h"
#include <iostream>

using namespace std;

int cont=0;
Empleado *empleados[50];

bool insertar(int pos, Empleado *emp)
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


void imprimir()
{
    cout<<"\nContador: "<<cont<<endl;
    if(cont>0)
    {
        for(int i=0;i<cont;i++)
            cout<<"-----"<<empleados[i]->id<<" "<<empleados[i]->nombre<<endl;

    }

}

Empleado* inicio()
{
    if(cont>0)
        return empleados[0];

    return NULL;
}

Empleado* fin()
{
    if(cont>0)
        return empleados[cont-1];

    return NULL;
}

Empleado* siguiente(int pos)
{
    if(pos>=cont-1 || pos<0)
      return NULL;

    return empleados[pos+1];
}

Empleado * recuperar(int pos)
{
    if(pos>=cont || pos<0)
        return NULL;

    return empleados[pos];
}

bool eliminar(int pos)
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

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int op;
   do{
      cout << "\nIngrese la opcion : "<<endl;
      cout << "1. Insertar nuevo empleado  "<<endl;
      cout << "2. Inicio  "<<endl;
      cout << "3. Final  "<<endl;
      cout << "4. Siguiente  "<<endl;
      cout << "5. Recuperar  "<<endl;
      cout << "6. Eliminar "<<endl;
      cout << "7. Imprimir empleados  "<<endl;

      cin>>op;

      switch(op)
      {
        case 1:
         {
          int id;
          string nombre;
          int pos;
          cout << "\nIngrese la posicion donde insertar  ";
          cin>>pos;
          cout << "\nIngrese el codigo de empleado  ";
          cin>>id;
          cout << "Ingrese el nombre  ";
          cin>>nombre;

          if(insertar(pos,new Empleado(id,nombre)))
              cout << "\nInsertado exitosamente  "<<endl;
          else
              cout << "\nNo se pudo insertar  "<<endl;
         }
          break;
        case 2:
         {
          Empleado* b = inicio();

          if(b!=NULL)
          {
              cout<<"\nEl inicio es: ";
              cout<<"-----"<<b->id<<" ";
              cout<<b->nombre<<endl;
          }
          else
              cout<<"\nArreglo vacio"<<endl;
         }
          break;
         case 3:
          {
          Empleado* c=fin();

          if(c!=NULL)
          {
              cout<<"\nEl fin es: ";
              cout<<"-----"<<c->id<<" ";
              cout<<c->nombre<<endl;
          }
          else
            cout<<"\nArreglo vacio"<<endl;
          }
          break;
      case 4:
       {
          int pos;
          cout << "\nIngrese la posicion para conocer su siguiente ";
          cin>>pos;
          Empleado* c=siguiente(pos);

       if(c!=NULL)
       {
           cout<<"\nEl siguiente de la posicion "<<pos<<" es: ";
           cout<<"-----"<<c->id<<" ";
           cout<<c->nombre<<endl;
       }
       else
         cout<<"\nEsta posicion no tiene siguiente"<<endl;
       }
       break;

         case 5:
         {
          int p1;
          cout<<"\nIngrese la posicion a buscar: ";
          cin>>p1;
          Empleado * d= recuperar(p1);
          if(d!=NULL)
          {
              cout<<"-----"<<d->id<<" ";
              cout<<d->nombre<<endl;
          }
          else
              cout<<"No se encuentra, revise parametros"<<endl;

         }
             break;
        case 6:
         {
          int p;
          cout<<"\nIngrese la posicion a eliminar: ";
          cin>>p;
          if(eliminar(p))
             cout<<"\nEliminado exitosamente"<<endl;
          else
             cout<<"\nNo se pudo eliminar, revise los parametros "<<endl;

         }
          break;
        case 7:
          {
              cout<<"\nListando empleados "<<endl;
              imprimir();
          }
          break;
      }

    }while ( op >= 1 && op<=7 );


    return a.exec();
}

