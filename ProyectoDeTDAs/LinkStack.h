#pragma once


#include"Nodo.h"
#include "MetodosPila.h"
class LinkStack:public Object,public MetodosPila
{

private:
	Nodo* TopeNodo;



	int Tope() override;
	bool Saca()override;
	bool Mete(Object* _obj) override;
	bool Vacia() override;
	void imprimir() override;
	Nodo* NodoTope()override;

public:


	LinkStack();






};

