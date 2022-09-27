#include "LinkedQueue.h"
#include "Object.h"
#include "Nodo.h"
#include "iostream"
//#define NULL 0

LinkedQueue::LinkedQueue()
{
	Frente = nullptr;
	final = nullptr;

}

LinkedQueue::~LinkedQueue()
{
	if (final) {
		delete final;
	}
}

Object* LinkedQueue::frente() {
	///retornara el frente de la cola y su item

	return Frente->getItem();
}
//imprimira la cola en ordne de llegada
void LinkedQueue::imprime_cola() {
	Nodo* Actual=Frente;
	int i = 1;
	while (Actual != nullptr) {
		std::cout << "posicion:" << i;
		Actual->getItem()->imprimir();
		Actual = Frente->getAnterior();
		i++;
	}

}
//Elimnara todos los nodos en la cola  empezando desde el frente
void LinkedQueue::anula() {



	Nodo* Actual = Frente;
	Nodo* temp;
	while (Actual != nullptr) {

		temp = Actual;
		Actual = Frente->getAnterior();
		
		delete temp;

	}


}

//Dequeue
Object* LinkedQueue::saca_de_cola() {
	Nodo* _nodo_salida = Frente;
	Frente = Frente->getAnterior();
	delete _nodo_salida;
	return nullptr;
}


//Queue
void LinkedQueue::pone_en_cola(Object* _obj) {
	Nodo* NuevoNodo = new Nodo(_obj);
	if (final == nullptr) {
		final = NuevoNodo;
		Frente = NuevoNodo;
	
	}
	else {
		final->setAnterior(NuevoNodo);
		NuevoNodo->setSiguiente(final);
	
	}

}

bool LinkedQueue::vacia() {

	return final==nullptr;
}