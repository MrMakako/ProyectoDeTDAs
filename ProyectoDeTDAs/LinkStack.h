#pragma once
#include"Nodo.h"
#include "MetodosPila.h"

class LinkStack:public Object,public MetodosPila
{
private:
	Nodo* TopeNodo;
public:
	bool equals(Object* _obj);
	std::string toString();
	int Tope() override;
	bool Saca()override;
	bool Mete(Object* _obj) override;
	bool Vacia() override;
	void imprimir() override;
	void verTope()override;
	Nodo* NodoTope()override;
	LinkStack();
};
