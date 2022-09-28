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
	return array[inicio];
}
void ArrayQueue::imprime_cola() {
	for (int i = 0; i < final; i++) {
		array[i]->imprimir();
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
	if (!vacia()) {
		std::cout << "Se esta sacando un elemento >>";
		array[inicio]->imprimir();
		array[inicio] = nullptr;
			final--;
			n--;
			for (int i =inicio; i <final ; i++) {
				//movemos los numeros 
				array[i] = array[i + 1];
				std::cout << "SE REALIZAN CORRIMEINTOS COLA\n";
				//partimos desde la casilla y realizamos corrimientos mientras la casilla sea menor al ultimo elemento , cuadno llegemos al ultimo terminan los cocrrimnetos.
			}
	}
	else {
		std::cout<<"Cola vacia!!!\n";
	}
	return nullptr;
}
//Queue
void ArrayQueue::pone_en_cola(Object* _obj) {
	if (vacia()) {
		std::cout << "Se inserto exitosamente!\n";
		array[inicio] = _obj;
		n++;
	}
	else {
		if (final < capacidad - 1) {
			std::cout << "Se inserto exitosamente!\n";
			final++;
			array[final] = _obj;
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