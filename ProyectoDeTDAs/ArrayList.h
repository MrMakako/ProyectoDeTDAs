#pragma once
#include "MetodosTDA.h"
#include "iostream"

class ArrayList :public MetodosTDA, public Object
{
public:
	ArrayList();
	bool Inserta(Object* _obj, int pos);
	bool suprime(int pos);
	int Localiza(Object* _obj)override;
	void Imprimir()override;
	 Object* Obtener(int pos) ;
	 Object* ObtenerSiguiente(int pos) ;
	 Object* ObtenerAnterior(int pos);
	 bool EstaVacia()override ;
	 bool anula();
	bool equals(Object* _obj)override;
	std::string toString() override;
	 void imprimir()override;
private:
	Object** Array;
	int capacidad;
	int n;
	int ultimo;
};
