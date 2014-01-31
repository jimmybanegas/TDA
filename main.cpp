#include <iostream>
#include "Arreglo.h"
#include "Nodo.h"
#include "Lista.h"
#include "Empleado.h"
#include <iostream>

using namespace std;

int main()
{
    Arreglo arr;
    Lista lista;
    int op;

   do{
      cout << "\nIngrese la opcion : "<<endl;
      cout << "1. Insertar nuevo empleado  "<<endl;
      cout << "2. Inicio  "<<endl;
      cout << "3. Final  "<<endl;
      cout << "4. Siguiente  "<<endl;
      cout << "5. Recuperar  "<<endl;
      cout << "6. Eliminar "<<endl;
      cout << "7. Mover  "<<endl;
      cout << "8. Imprimir empleados  "<<endl;

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

          Nodo *a = new Nodo(id,nombre) ;

          if(lista.insertar(pos,a))
              cout << "\nInsertado exitosamente  "<<endl;
          else
              cout << "\nNo se pudo insertar  "<<endl;
         }
          break;
        case 2:
         {
          Nodo* b = lista.ini();

          if(b!=NULL)
          {
              cout<<"\nEl inicio es: ";
              cout<<"-----"<<b->emp->id<<" ";
              cout<<b->emp->nombre<<endl;
          }
          else
              cout<<"\nArreglo vacio"<<endl;
         }
          break;
         case 3:
          {
          Nodo* c=lista.fin();

          if(c!=NULL)
          {
              cout<<"\nEl fin es: ";
              cout<<"-----"<<c->emp->id<<" ";
              cout<<c->emp->nombre<<endl;
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
          Nodo* c=lista.siguiente(pos);

       if(c!=NULL)
       {
           cout<<"\nEl siguiente de la posicion "<<pos<<" es: ";
           cout<<"-----"<<c->emp->id<<" ";
           cout<<c->emp->nombre<<endl;
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
          Nodo * d= lista.recuperar(p1);
          if(d!=NULL)
          {
              cout<<"-----"<<d->emp->id<<" ";
              cout<<d->emp->nombre<<endl;
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
          if(lista.eliminar(p))
             cout<<"\nEliminado exitosamente"<<endl;
          else
             cout<<"\nNo se pudo eliminar, revise los parametros "<<endl;

         }
          break;
        case 7:
          {
              int from,to;
              cout<<"\nIngrese la posicion de procedencia: ";
              cin>>from;
              cout<<"\nIngrese la posicion de destino: ";
              cin>>to;
              lista.mover(from,to);
          }
          break;
        case 8:
          {
              cout<<"\nListando empleados "<<endl;
              lista.imprimir();
          }
          break;
      }

    }while ( op >= 1 && op<=8 );

    return 0;
}
