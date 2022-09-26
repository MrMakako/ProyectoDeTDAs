#include "LinkStack.h"
#include <iostream>



bool LinkStack::Saca()
{

	if (Vacia()) {
		std::cout << "Error Pila vacia\n";
		return false;
	}
	Nodo* Temp;
	
	Temp = TopeNodo;
	TopeNodo = TopeNodo->getAnterior();

	delete Temp;

}

bool LinkStack::Mete(Object* _obj)
{
	return false;
}

bool LinkStack::Vacia()
{
	return TopeNodo==nullptr;
}

bool LinkStack::Mete(Object* _obj) {
	
	Nodo* NuevoNodo = new Nodo(_obj);


	if (Vacia()) {
		TopeNodo = NuevoNodo;
		return true;
	}
	NuevoNodo->setAnterior(TopeNodo);
	TopeNodo = NuevoNodo;

}

void LinkStack::imprimir()
{
	Nodo* Actual=TopeNodo;
	while (Actual != nullptr) {
	
		Actual->getItem()->imprimir();
		Actual = TopeNodo->getAnterior();
		
	}

	

}

Nodo* LinkStack::NodoTope()
{
	return TopeNodo;
}

LinkStack::LinkStack()
{
	NodoTope();





}
