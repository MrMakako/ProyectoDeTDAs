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
	if (Pila[tope - 1] != nullptr && tope != 0) {
		std::cout << "El tope es: ";
		Pila[tope - 1]->imprimir();
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
	tope--;
	return false;
}
bool ArrayStack::Mete(Object* _obj)
{
	int top = Tope();
	if (tope < long_max) {
		
		Pila[top]=_obj;
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
	if (tope != 0) {
		for (int i = 0; i < tope; i++) {
			Pila[i]->imprimir();
		}
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
