#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H
#include "MetodosCola.h"
#include "Object.h"
#include "Nodo.h"

class LinkedQueue : public MetodosCola,public Object
{
public:
	LinkedQueue();
	~LinkedQueue();
	 Object* frente();
	void imprime_cola()override;
	virtual void anula();
	//Dequeue
	 Object* saca_de_cola()override;
	  bool equals(Object* _obj)override;
	  std::string toString() override ;
	  void imprimir()override;
	//Queue
	 void pone_en_cola(Object*)override;
	 bool vacia()override;
protected:
	Nodo* Frente;
	Nodo* final;
};
#endif