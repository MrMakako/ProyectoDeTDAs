// ProyectoDeTDAs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"ArrayList.h"
#include "ListaEnlazada.h"
#include "Alumno.h"
int main()
{
    std::cout << "Hello World!\n";





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

   // Lista1.Imprimir();


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
