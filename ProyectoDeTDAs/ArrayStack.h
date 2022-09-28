#pragma once



#include "MetodosPila.h"
#include<iostream>
class ArrayStack:public MetodosPila,public Object
{

public:

	ArrayStack();

	 int Tope() override;
	 void  verTope()override;
	 bool Saca()override;
	 bool Mete(Object* _obj) override;
	 bool Vacia() override;
	 void imprimir() override;
	 Nodo* NodoTope()override;

	
	  bool equals(Object* _obj) ;

	  std::string toString() ;



private:
	int tope;




	int long_max;
	Object** Pila;
	



};

