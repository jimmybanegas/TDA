#include <QCoreApplication>
#include "empleado.h"
#include "arreglo.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

     Arreglo arr;
   // Empleado *dos=new Empleado();

    int op;

    arr.imprimir();
  // do{
      cout << "\nIngrese la opcion : "<<endl;
      cout << "1. Insertar nuevo empleado  "<<endl;
      cout << "2. Inicio  "<<endl;
      cout << "3. Final  "<<endl;
      cout << "4. Siguiente  "<<endl;
      cout << "5. Recuperar  "<<endl;
      cout << "6. Eliminar "<<endl;
      cout << "7. Imprimir empleados  "<<endl;

      cin>>op;

      /*switch(op)
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

          if(arr->insertar(pos,new Empleado(id,nombre)))
              cout << "\nInsertado exitosamente  "<<endl;
          else
              cout << "\nNo se pudo insertar  "<<endl;
         }
          break;
        case 2:
         {
          Empleado* b = arr->inicio();

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
          Empleado* c=arr->fin();

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
          Empleado* c=arr->siguiente(pos);

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
          Empleado * d= arr->recuperar(p1);
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
          if(arr->eliminar(p))
             cout<<"\nEliminado exitosamente"<<endl;
          else
             cout<<"\nNo se pudo eliminar, revise los parametros "<<endl;

         }
          break;
        case 7:
          {
              cout<<"\nListando empleados "<<endl;
              arr->imprimir();
          }
          break;
      }

    }while ( op >= 1 && op<=7 );*/


    return a.exec();
}

