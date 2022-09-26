#pragma once



#include "MetodosPila.h"
#include<iostream>
class ArrayStack:public MetodosPila,public Object
{

public:

	ArrayStack();

	 int Tope() override;
	 bool Saca()override;
	 bool Mete(Object* _obj) override;
	 bool Vacia() override;
	 void imprimir() override;
	 Nodo* NodoTope()override;
private:
	int tope;




	int long_max;
	Object** Pila;
	



};

