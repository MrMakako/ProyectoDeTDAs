#include "ArrayStack.h"

ArrayStack::ArrayStack()
{
	long_max = 10;
	tope = 0;
	Pila = new Object*[long_max];
}

int ArrayStack::Tope()
{
	return tope;
}

void  ArrayStack::verTope()
{
	if (Pila[tope] != nullptr) {
		Pila[tope]->imprimir();
		// se muestra le tope  de la pila;

	}
	else {
		std::cout << "Lista vacia!\n";
	
	}
}
//Este metodo saca un elemnto de la pila
bool ArrayStack::Saca()
{

		
	if (Vacia()) {
	
		std::cout << "Error Lsita esta vacia";
		return false;
	}
	tope++;





	return false;
}

bool ArrayStack::Mete(Object* _obj)
{
	
	if (tope <long_max) {
		
		Pila[Tope()]=_obj;
		tope++;
	}
	else {
		std::cout << "Error Lista llena\n";
	
	}







	return false;
}

bool ArrayStack::Vacia()
{
	return tope == 0;
}

void ArrayStack::imprimir()
{
	
	for (int i = long_max - 1; i >=0; i++) {
		

		std::cout << i << "." << Pila[i];

	
	}

	


}

Nodo* ArrayStack::NodoTope()
{
	return nullptr;
}

bool ArrayStack::equals(Object* _obj)
{
	return false;
}

std::string ArrayStack::toString()
{
	return std::string();
}
