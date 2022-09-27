#pragma once
#include "Object.h"
#include "Nodo.h"
class MetodosPila
{

	virtual int Tope()=0;
	virtual bool Saca()=0;
	virtual bool Mete(Object* _obj)=0;
	virtual bool Vacia()=0;
	virtual Nodo* NodoTope()=0;
	virtual void verTope()=0;







};

