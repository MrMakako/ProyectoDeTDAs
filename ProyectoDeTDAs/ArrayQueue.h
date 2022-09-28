#pragma once
#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H
#include "MetodosCola.h"

class ArrayQueue : public MetodosCola,Object
{
public:
	ArrayQueue();
	~ArrayQueue();
	Object* frente()override;
	 void imprime_cola()override;
	 void anula();
	//Dequeue
	 Object* saca_de_cola()override;
	//Queue
	 void pone_en_cola(Object*)override;
	 bool equals(Object* _obj)override;
	 std::string toString() override;
	 void imprimir()override;
	 bool vacia()override;
protected:
	int inicio;
	int capacidad;
	int n;
	int frentes;
	int final;
	Object** array;
};
#endif // !ARRAYQUEUE_H