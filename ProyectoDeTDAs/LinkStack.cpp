#include "LinkStack.h"
#include <iostream>

bool LinkStack::equals(Object* _obj)
{
	return false;
}

std::string LinkStack::toString()
{
	return std::string();
}

int LinkStack::Tope()
{
	return 0;
}

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

void LinkStack::imprimir(){
	Nodo* Temp = TopeNodo;
	while (Temp != nullptr) {
		Temp->getItem()->imprimir();
		Temp = Temp->getAnterior();
	}
}

void LinkStack::verTope()
{
	if (TopeNodo != nullptr) {
		TopeNodo->getItem()->imprimir();
	}
	else {
		std::cout << "Lista vacia!\n";
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
