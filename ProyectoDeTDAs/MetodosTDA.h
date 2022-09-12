#pragma once
#include "Object.h"
class MetodosTDA
{



public:

	virtual int Localiza(Object*_obj)=0;
	virtual void Imprimir() = 0;
	virtual bool EstaVacia() = 0;
	virtual Object* Obtener(int pos)=0;
	virtual Object* ObtenerSiguiente(int pos) = 0;
	virtual Object* ObtenerAnterior(int pos) = 0;
	virtual bool anula()=0;
	

};

