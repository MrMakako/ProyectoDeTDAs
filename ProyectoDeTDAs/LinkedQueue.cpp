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
	Nodo* aux = Frente;
	while (aux != nullptr) {
		aux->getItem()->imprimir();
		aux = aux->getSiguiente();
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
	Frente = Frente->getSiguiente();
	delete _nodo_salida;
	return nullptr;
}
bool LinkedQueue::equals(Object* _obj)
{
	return false;
}
std::string LinkedQueue::toString()
{
	return std::string();
}
void LinkedQueue::imprimir()
{
}
//Queue
void LinkedQueue::pone_en_cola(Object* _obj) {
	Nodo* _nodo = new Nodo(_obj);
	if (Frente == nullptr) {
		Frente = _nodo;
		final = _nodo;
	}
	else {
		_nodo->setAnterior(final);
		final->setSiguiente(_nodo);
		final = _nodo;
	}
}
bool LinkedQueue::vacia() {
	return final==nullptr;
}