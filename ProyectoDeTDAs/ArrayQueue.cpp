#include "ArrayQueue.h"
#include "iostream"

ArrayQueue::ArrayQueue()
{
	inicio = 0;
	final = 0;
	n = 0;
	capacidad = 10;
	array = new Object * [capacidad];
	for (int i = 0; i < capacidad; i++)
		array[i] = nullptr;
}

ArrayQueue::~ArrayQueue()
{
	for (int i = 0; i < capacidad; i++) {
		if (array[i]) {
			delete array[i];
		}
	}
	//libera el arreglo
	delete[] array;
}

Object* ArrayQueue::frente() {
	return array[0];
}

void ArrayQueue::imprime_cola() {
	if (array[0] != nullptr) {
		for (int i = 0; i < final; i++) {
			if (array[i] != nullptr) {
				array[i]->imprimir();
			}
		}
	}
}
void ArrayQueue::anula() {
	for (int i = 0; i < capacidad; i++) {
		if (array[i]) {
			delete array[i];
		}
	}
}
//Dequeue
Object* ArrayQueue::saca_de_cola() {
	Object* aux = array[inicio];
	for (int i = inicio; i < capacidad; i++) {
		array[i] = array[i + 1];
	}
	final--;
	n--;
	return aux;
}
//Queue
void ArrayQueue::pone_en_cola(Object* _obj) {
	if (vacia()) {
		std::cout << "Se inserto exitosamente!\n";
		array[inicio] = _obj;
		final++;
		n++;
	}
	else {
		if (final < capacidad - 1) {
			std::cout << "Se inserto exitosamente!\n";
			array[final] = _obj;
			final++;
			n++;
		}
		else {
			std::cout << " no se puede insertar mas cola llena!!\n";
		}
	}
}

bool ArrayQueue::equals(Object* _obj)
{
	return false;
}

std::string ArrayQueue::toString()
{
	return std::string();
}

void ArrayQueue::imprimir()
{
}

bool ArrayQueue::vacia() {
	return array[inicio]==nullptr;
}