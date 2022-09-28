#pragma once
#include "Object.h";
class Nodo
{
private:
	Object*Main_Object;
	Nodo* Siguiente;
	Nodo* Anterior;
public:
	Nodo(Object* _Main_Object);
	Object* getItem();
	Nodo* getSiguiente();
	Nodo* getAnterior();
	void  setAnterior(Nodo* _Nodo);
	void  setSiguiente(Nodo * _Nodo);
};
