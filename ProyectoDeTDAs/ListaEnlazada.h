#pragma once
#include"MetodosTDA.h"
#include "iostream"
#include "Nodo.h"
#ifndef LISTAENLAZADA_H
class ListaEnlazada:public MetodosTDA,public Object
{
	int cantidad;
	Nodo* NodoInicial;

public:

	ListaEnlazada();

	bool Inserta(Object* _obj, int pos);
	bool suprime(int pos);
	int Localiza(Object* _obj)override;
	void Imprimir()override;
	Object* Obtener(int pos);
	Object* ObtenerSiguiente(int pos);
	Object* ObtenerAnterior(int pos);
	bool EstaVacia()override;
	bool anula()override;

private:




};


#endif // !LISTAENLAZADA_H

