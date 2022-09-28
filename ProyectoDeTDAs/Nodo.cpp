#include "Nodo.h"

Nodo::Nodo(Object* _Main_Object)
{
	Main_Object = _Main_Object;
	Siguiente = nullptr;
	Anterior = nullptr;
	//constructor;
}
Object* Nodo::getItem()
{
	return Main_Object;
}
Nodo* Nodo::getSiguiente()
{
	return Siguiente;
}
Nodo* Nodo::getAnterior()
{
	return Anterior;
}
void Nodo::setAnterior(Nodo* _Nodo)
{
	Anterior = _Nodo;
}
void Nodo::setSiguiente(Nodo* _Nodo)
{
	Siguiente = _Nodo;
}
