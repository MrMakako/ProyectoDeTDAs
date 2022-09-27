// ProyectoDeTDAs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"ArrayList.h"
#include "ListaEnlazada.h"
#include "Alumno.h"
#include<string>
int opcion;

bool MenuListas(int n, ArrayList* _ArrayList, ListaEnlazada* _ListaEnlazda) {

    std::cout << "Operaciones de Listas\n"
        << "1. Insertar Elemento\n"
        << "2. Imprimir Elementos\n"
        << "3. Buscar Elemento\n"
        << "4. Borrar Elemento\n"
        << "5.Ver si esta vacia\n"
     <<"6. Obtener Elemento por Posición\n"
     <<"7. Obtener Siguiente"
     << "8. Obtener Anterior"
     << "9. Borrar todos los Elementos(Anula)\n"
     << "10. Regresar al Menú Principal\n ";



    int opt=0;
    std::cout<< "Inserte su opcion>>";
    std::cin >> opt;
    while (opt < 0 || opt>10) {
    
        std::cout << "Inserte una opcion valida, un numero del 1 al 10 opcion>>";
        std::cin >> opt;
        std::cin.clear();
    }
    switch (opt)
    {

    case 1: {
   
        std::cout << "Nombre del alumno:>>";
        std::string  nombre="";
        std::cin >> nombre;
        std::cin.clear();
        int id = 0;
        std::cout << "Identidad del alumno:>>";
        std::cin >> id;
        int pos = 0;
        std::cin.clear();

        std::cout << "posicion para insertar el alumno>>";
        std::cin >> pos;


        Alumno* NuevoAlumno = new Alumno(id, nombre);
        if (n == 1) {

            if (_ArrayList->Localiza(NuevoAlumno)>0) {
                //ya esta en la lista
                std::cout << "No se pudo agregar\n";
                break;
            }

            _ArrayList->Inserta(NuevoAlumno, pos);


        }
        else {





            if (_ListaEnlazda->Localiza(NuevoAlumno) > 0) {
                //ya esta en la lista
                std::cout << "No se pudo agregar\n";
                break;
            }
            _ListaEnlazda->Inserta(NuevoAlumno, pos);


        }
        break;


    }
    case 2: {

        if (n == 1) {
            _ArrayList->Imprimir();
        }
        else {

            _ListaEnlazda->Imprimir();
        }
        break;
    }
    case 3: {


          int id = 0;
          std::cout << "Id del alumno a buscar:";
          std::cin >> id;
          Alumno* Alumno_Buscar = new Alumno(id, "");

          if (n == 1) {
              Alumno_Buscar = (Alumno*)_ArrayList->Obtener(_ArrayList->Localiza(Alumno_Buscar));
          }
          else {

              Alumno_Buscar = (Alumno*)_ListaEnlazda->Obtener(_ListaEnlazda->Localiza(Alumno_Buscar));

          }

          if (Alumno_Buscar != nullptr) {

              std::cout << Alumno_Buscar->toString() << "\n";
          }
          break;
    }


    case 4: {
        int pos = 0;
        std::cout << "Posicion del elemento> a eliminar>>";
        std::cin >> pos;
        //obtener elemento por posicion.
        if (n == 1) {

            _ArrayList->suprime(pos);

        }
        else {

            _ListaEnlazda->suprime(pos);



        }
        break;

    }
    case 5: {

        if (n == 2) {
            if (_ArrayList->EstaVacia()) {
                std::cout << "Lista vacia\n";
            }

        }
        else {
            if (_ListaEnlazda->EstaVacia()) {
                std::cout << "Lista vacia\n";
            }


        }

        break;


    }
    case 6: {
        int pos = 0;
        std::cout << "Posicion del elemento>>";
        std::cin >> pos;
        //obtener elemento por posicion.
        if (n == 1) {

            _ArrayList->Obtener(pos)->imprimir();

        }
        else {

            _ListaEnlazda->Obtener(pos)->imprimir();



        }
        break;



    }
    case 7: {
        int pos = 0;
        std::cout << "Posicion del elemento>>";
        std::cin >> pos;
        if (n == 1) {

            _ArrayList->ObtenerSiguiente(pos)->imprimir();

        }
        else {

            _ListaEnlazda->ObtenerSiguiente(pos)->imprimir();



        }

    
        break;
    }
    case 8: {
        int pos = 0;
        std::cout << "Posicion del elemento>>";
        std::cin >> pos;
        if (n == 1) {

            _ArrayList->ObtenerAnterior(pos)->imprimir();

        }
        else {

            _ListaEnlazda->ObtenerAnterior(pos)->imprimir();



        }
        break;
    
    
    }
    case 9: {
        if (n == 2) {
            _ArrayList->anula();

        
        }
        else {
            _ListaEnlazda->anula();
        
        }

        break;
    
    }
    default:
        break;
    }
 

    return false;

}



int main()
{
    std::cout << "Hello World!\n";


    opcion = 0;

    //La opcion sera igual a 4 mientras termino el resot 
  
    ArrayList* ARRAY_LIST = new ArrayList();
    ListaEnlazada* LISTA_ENLAZADA = new ListaEnlazada();

    while (opcion != 4) {
    
  


        std::cout << "Menú Principal\n"<<
           " 1.Trabajar con Listas\n" <<"2.Trabajar con Pilas\n"<<
           " 3.Trabajar con Colas\n"<<
           "4.Salir \n";
        std::cout << "opcion>>";
        std::cin >> opcion;
         
        
        switch (opcion)
        {


        case 1: {


            std::cout << "Menu Tipo Lista:\n"
                << "1.trabjar con ArrayList\n"
                << "2.Trabajar con LinkedList\n";
            int opt = 0;
            std::cout << "opcion>>";
            std::cin >> opt;
            MenuListas(opt, ARRAY_LIST, LISTA_ENLAZADA);

            break;
        }


        default:
            break;
        }



    
    
    
    
    
    
    }




    ArrayList Lista1 = ArrayList();


    Alumno* Alumno1 = new Alumno(123,"Erick solivan");
    Alumno* Alumno2 = new Alumno(124, "Erick Salander");
    Alumno* Alumno3 = new Alumno(125, "Erick Mawaki");




    ListaEnlazada List2=ListaEnlazada();

 
    List2.Inserta(Alumno1,1);


    List2.Inserta(Alumno2, 2);

    List2.Inserta(Alumno3, 3);
   

    List2.Imprimir();

    Lista1.Inserta(Alumno1, 1);
    Lista1.Inserta(Alumno2, 2);
    Lista1.Inserta(Alumno3, 3);

    std::cout << "ARRAYLISTEXAMPLE-------\n";
    Lista1.Imprimir();
  Lista1.suprime(Lista1.Localiza(Lista1.Obtener(1)));


    Lista1.Imprimir();

    Lista1.suprime(2);

    Lista1.Imprimir();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
