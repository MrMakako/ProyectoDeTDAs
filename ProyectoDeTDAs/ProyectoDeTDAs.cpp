// ProyectoDeTDAs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"ArrayList.h"
#include "ArrayStack.h"
#include "LinkStack.h"
#include "ListaEnlazada.h"
#include "Alumno.h"
#include<string>
#include"LinkedQueue.h";
#include "ArrayQueue.h"
#include "Simbolo.h"
int opcion;


int PedirNumero(const char* mensaje) {
    
    int num;
    std::cout << mensaje;
    if (std::cin >> num) {
        return num;
    
    }
    std::cout << "Error introduzca un numero!\n";

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    PedirNumero(mensaje);



}
bool MenuCola(int n, ArrayQueue * _ArrayQueue,LinkedQueue* _LinkedQueu) {
    bool menu = true;
    while (menu) {



        std::cout << "Menu de Cola\n"
            << "1.Enconlar"
            << "2.Desencolar\n"
            << "3.Ver Frente\n"
            << "4Verificar si esta vacia.\n"
            << "5.Imprimir Elementos\n"
            << "6.Regresar al menu principal\n";


        int opt=0;
        opt = PedirNumero("opcion>>");

        switch (opt)
        {
        case 1: {
        
            std::string nombre;
            int id;
            std::cout << "Nombre del alumno>>";
            std::cin >> nombre;


            id = PedirNumero("Cuenta del estudiante:");

            if (n == 1) {
            
                _ArrayQueue->pone_en_cola(new Alumno(id, nombre));
            
            }
            else {
            
                _LinkedQueu->pone_en_cola(new Alumno(id,nombre));
            
            }

            break;
        
        
        }
        case 2: {
            

            if (n == 1) {


                _ArrayQueue->saca_de_cola();
                break;

            }
            else {

                _LinkedQueu->saca_de_cola();
                break;
            }
            std::cout << "No hay frente esta vacio";
            break;
        }
        case 3: {
        
            if (n == 1) {
                if (_ArrayQueue->frente() != nullptr) {
                    _ArrayQueue->frente()->imprimir();
                
                }
            
            }
            else {
            
                if (_LinkedQueu->frente()!=nullptr) {
                
                    _LinkedQueu->frente()->imprimir();
                
                }
            
            }
            break;
        
        
        }
        case 4: {
        
            if (n == 1) {


                if (_ArrayQueue->vacia()) {
                    std::cout << "esta vacia\n";
                
                }
                else {
                
                    std::cout << "La cola no esta vacia\n";
                }

            }
            else {

                if (_LinkedQueu->saca_de_cola()) {
                    std::cout<<"La cola esta vacia\n";
                
                }
                else {
                    std::cout << "La cola no esta vacia\n";
                
                }

            }
            break;
        
        }
        case 5: {
        
            if (n == 1) {
                _ArrayQueue->imprime_cola();
            
            
            }
            else {
            
                _LinkedQueu->imprime_cola();
            }
            break;
        
        
        }
        case 6: {
            menu = false;
            break;

        
        }
        default:
            break;
        }



    }
      
    return true ;
}
bool MenuPilas(int n,ArrayStack* _ArrayStack,LinkStack * _LinkStack) {
    
    bool menu = true;
    while (menu) {
        std::cout << "Operaciones de Listas\n"
            << "1. �Empujar� (push)\n"
            << "2. 'Sacar'(pop) \n"
            << "3. Ver tope\n"
            << "4. Ver si esta vacia\n"
            << "5. Imprimir Elementos\n"
            << "6. regresar al menu principal\n ";



        int opt = 0;
        opt = PedirNumero("Opcion>>");

        while (opt < 0 || opt>6) {

            std::cout << "Inserte una opcion valida, un numero del 1 al 6 opcion>>";
            std::cin >> opt;
            std::cin.clear();
        }




        switch (opt)
        {

        case 1: {


            char sim;

            std::cout << "Intrduzca una letra";
            std::cin >> sim;
            _ArrayStack->Mete(new Simbolo(sim));


            break;

        }
        case 2: {
            if (n == 1) {

                std::cout << "Se intentara sacar un elemento";
                _ArrayStack->Saca();

            }
            else {
                std::cout << "Se intentara sacar un elemento";
                _LinkStack->Saca();

            }
            break;


        }
        case 3: {
            if (n == 1) {

                _ArrayStack->verTope();
            }
            else {

                _LinkStack->verTope();
            }

            break;
        }
        case 4: {

            if (n == 1) {
                if (_ArrayStack->Vacia()) {

                    std::cout << "la pila esta vacia!\n";
                }
            }
            else {

                if (_LinkStack->Vacia()) {

                    std::cout << "la pila esta vacia!\n";
                }

            }
            break;

        }
        case 5: {

            if (n == 1) {

                _ArrayStack->imprimir();
            }
            else {
                _LinkStack->imprimir();

            }

        }
        case 6: {
            menu = false;
            return false;
        }

        default:
           
            break;
        }
    }

    return true;
}
bool MenuListas(int n, ArrayList* _ArrayList, ListaEnlazada* _ListaEnlazda) {
    bool menu = true;

    while (menu) {
        std::cout << "Operaciones de Listas\n"
            << "1. Insertar Elemento\n"
            << "2. Imprimir Elementos\n"
            << "3. Buscar Elemento\n"
            << "4. Borrar Elemento\n"
            << "5. Ver si esta vacia\n"
            << "6. Obtener Elemento por Posici�n\n"
            << "7. Obtener Siguiente\n"
            << "8. Obtener Anterior\n"
            << "9. Borrar todos los Elementos(Anula)\n"
            << "10. Regresar al Men� Principal\n ";



        int opt = 0;
        opt = PedirNumero("opcion>>");
        while (opt < 0 || opt>10) {
            

            opt = PedirNumero("Inserte una opcion valida");
            
            std::cin.clear();

        }


        switch (opt)
        {

        case 1: {
            bool inserta = true;

            while (inserta) {

                std::cout << "Nombre del alumno:>>";
                std::string  nombre = "";
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

                    if (_ArrayList->Localiza(NuevoAlumno) > 0) {
                        //ya esta en la lista
                        std::cout << "No se pudo agregar\n";

                    }
                    else {

                        _ArrayList->Inserta(NuevoAlumno, pos);

                    }




                }
                else {





                    if (_ListaEnlazda->Localiza(NuevoAlumno) > 0) {
                        //ya esta en la lista
                        std::cout << "No se pudo agregar\n";

                    }
                    else {
                        _ListaEnlazda->Inserta(NuevoAlumno, pos);

                    }



                }

                std::cout << "1.Continuar insertando\n" << "2.Regresar";
                int _opt;

                std::cin >> _opt;
                if (opt == 2) {
                    inserta = false;
                }

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
            Object* obj = nullptr;
            if (n == 1) {

                obj = _ArrayList->ObtenerSiguiente(pos);


            }
            else {

                obj = _ListaEnlazda->ObtenerSiguiente(pos);



            }
            if (obj != nullptr) {
                obj->imprimir();
                break;

            }
            std::cout << "Se ha salido del rango de la lista !!!\n";

            break;
        }
        case 8: {
            int pos = 0;
            std::cout << "Posicion del elemento>>";
            std::cin >> pos;
            Object* obj = nullptr;
            if (n == 1) {

                obj = _ArrayList->ObtenerAnterior(pos);

            }
            else {

                obj = _ListaEnlazda->ObtenerAnterior(pos);



            }
            if (obj != nullptr) {
                obj->imprimir();

                break;
            }
            std::cout << "Se ha salido del rango de la lista !!!\n";

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
        case 10: {
        
            menu = false;
        }
        default:
            break;
        }

    }
    return false;

}



int main()
{



    opcion = 0;
    int opt = 0;
    //La opcion sera igual a 4 mientras termino el resot 
  
    ArrayList* ARRAY_LIST = new ArrayList();
    ListaEnlazada* LISTA_ENLAZADA = new ListaEnlazada();
    ArrayStack* ARRAY_STACK = new ArrayStack();
    LinkStack* LINK_STACK = new LinkStack();
    LinkedQueue* LINKED_QUEUE = new LinkedQueue();
    ArrayQueue* ARRAY_QUEUE = new ArrayQueue();
    while (opcion != 4) {
    
  


        std::cout <<"Men� Principal\n"<<
           "1.Trabajar con Listas\n" <<"2.Trabajar con Pilas\n"<<
           "3.Trabajar con Colas\n"<<
           "4.Salir \n";
            opcion= PedirNumero("Opcione>>");
         
        
        switch (opcion)
        {


        case 1: {
            opt = 0;
            while (opt != 3) {


                std::cout << "Menu Tipo Lista:\n"
                    << "1.trabjar con ArrayList\n"
                    << "2.Trabajar con LinkedList\n"
                    << "3.Regresar al menu\n";


                opt = PedirNumero("Opcione>>");
                if (opt >=1 && opt<=2) {
                
                    MenuListas(opt, ARRAY_LIST, LISTA_ENLAZADA);
                }
     
            
            }
       

            break;
        }

        case 2: {
        
            opt = 0;
            while (opt != 3) {
                std::cout << "Menu Pilas------\n"
                    << "1.ArrayStack\n"
                    << "2.LinkStack\n"
                    << "3.Regresar al menu\n";
                opt = PedirNumero("Opcion>>");
                if (opt >= 1 && opt <= 2) {
                    MenuPilas(opt, ARRAY_STACK, LINK_STACK);

                }
       

            
            
            }
          
        
            break;
        
        }
        case 3: {
            opt = 0;
            while (opt != 3) {
                std::cout << "Menu Colas------\n" << "\n1.ArrayQueue" << "\n2.LinkedQueue" << "\n3.Regresar al menu\n";

                opt = PedirNumero("opcion>>");
                if (opt >= 1 && opt <= 2) {

                    MenuCola(opt, ARRAY_QUEUE, LINKED_QUEUE);
                }
               

            
            
            
            }
            
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
