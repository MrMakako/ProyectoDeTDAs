#include "ListaEnlazada.h"

ListaEnlazada::ListaEnlazada()
{
	cantidad = 0;
	NodoInicial = nullptr;
}
bool ListaEnlazada::Inserta(Object* _obj, int pos)
{
	Nodo* NodoActual=NodoInicial;
	if (pos >= 1 && pos <= cantidad+1) {
		Nodo* NuevoNodo = new Nodo(_obj);
		if (NodoActual == nullptr) {
			NodoInicial = NuevoNodo;
			//Se Agrega el rimer nodo 
			std::cout << "Se inserto un nodo al  inicio\n";
		}
		else {
			for (int i = 1; i < pos; i++) {
				if (NodoActual->getSiguiente() != nullptr) {
					NodoActual = NodoActual->getSiguiente();
				}
				//Itereamos hasta llegar al numero de nodo que queremos
			}
			//Creamos el nodo que vamos a insetar
			NuevoNodo->setAnterior(NodoActual->getAnterior());
			//ponemos el nodo actual enfrente de nuevo nodo
			NuevoNodo->setSiguiente(NodoActual);
			//NuevoNdodo apunta al Actual
			if (NodoActual->getAnterior() != nullptr) {
				//Si el Nodo tiene otros nodos atras
				NodoActual->getAnterior()->setSiguiente(NuevoNodo);
				NodoActual->setAnterior(NuevoNodo);
				std::cout << "Se inserto un Nodo nuevo en medio\n";
			}
			else {
				//El nodo es el primero por ende hacemos
				NodoActual->setAnterior(NuevoNodo);
				//Ponemos nodo inicial detras del primer nodo
				NodoInicial = NuevoNodo;
				std::cout << "Se inserto un nodo al  inicio\n";
			}
		}
		cantidad++;
		return true;
	}
	//Fuera de rangon
	std::cout << "No se ha podido insertar un nodo posiicon no valida\n";
	return false;
}
bool ListaEnlazada::suprime(int pos)
{
	Nodo* NodoActual = NodoInicial;
	Nodo* Siguiente;
	Nodo* Anterior;
	Nodo* temp;
	int i = 0;
	while (NodoActual != nullptr) {
		i++;
		if (i == pos) {
			Anterior = NodoActual->getAnterior();
			Siguiente = NodoActual->getSiguiente();
			//caos que elimnemos el primer nodo
			if (NodoActual->getAnterior() == nullptr && NodoActual->getSiguiente() == nullptr) {
				temp = NodoActual;
				NodoActual =nullptr;
			}
			//caso que elimnemos el ultimo nodo
			if (NodoActual->getSiguiente() ==nullptr) {
				Anterior->setSiguiente(nullptr);
				NodoActual->setAnterior(nullptr);
				temp = NodoActual;
			}
			//cuando queremos eliminar el ultimo nodo pero hay mas nodos enfrente///////---//////
			else if (NodoActual->getAnterior() == nullptr) {
				NodoInicial = Siguiente;
				Siguiente->setAnterior(nullptr);
				temp = NodoActual;
			}
			else {
				//Eliminar elemento enmeido de la lista//
				Siguiente->setAnterior(Anterior);
				Anterior->setSiguiente(Siguiente);
				temp = NodoActual;
			}
			delete temp;
			std::cout << "Se elimino con exito el elemento \n";
			return true;
		}
		NodoActual = NodoActual->getSiguiente();
	}
	std::cout << "fallo al elimnar el elemento!!! \n";
	return false;
}
int ListaEnlazada::Localiza(Object* _obj)
{
	Nodo* NodoActual = NodoInicial;
	int i = 0;
	while (NodoActual != nullptr) {
		i++;
		if (NodoActual->getItem()->equals(_obj)) {
			return i;
			//Flta definir el metodo equals recueda definirlo////////
			std::cout << "Elemento  ha sido Encontrado\n";
		}
		NodoActual = NodoActual->getSiguiente();
	}
	std::cout << "El elemento no h asiod localizado\n";
	return 0;
}
void ListaEnlazada::Imprimir()
{
	Nodo* Actual = NodoInicial;
	while (Actual != nullptr) {
		std::cout<<Actual->getItem()->toString();
		Actual = Actual->getSiguiente();
	}
}
Object* ListaEnlazada::Obtener(int pos)
{
	Nodo* Actual = NodoInicial;
	int contador = 0;
	while (Actual != nullptr) {
		contador++;
		if (pos == contador) {
			return Actual->getItem();
		}
		Actual = Actual->getSiguiente();
	}
	std::cout << "No se ha podido localizar el objeto";
	return nullptr;
}
Object* ListaEnlazada::ObtenerSiguiente(int pos)
{
	Nodo* Actual = NodoInicial;
	int contador = 0;
	while (Actual != nullptr) {
		contador++;
		if (pos == contador) {
			if (Actual->getSiguiente() != nullptr) {
				std::cout << "Se ecnontro el siguiente!!!\n";
				return Actual->getSiguiente()->getItem();
			}
			std::cout << "Siguiente no existente!!!\n";
			return nullptr;
		}
		Actual = Actual->getSiguiente();
	}
	return nullptr;
}
Object* ListaEnlazada::ObtenerAnterior(int pos)
{
	Nodo* Actual = NodoInicial;
	int contador = 0;
	while (Actual != nullptr) {
		contador++;
		if (pos == contador) {
			if (Actual->getAnterior() != nullptr) {
				std::cout << "Se encontro el anterior!!!\n";
				return Actual->getAnterior()->getItem();
			}
			std::cout << "Anterior no existente!!!\n";
			return nullptr;
		}
		Actual = Actual->getSiguiente();
	}
	std::cout << "posicion no encontrada!!!\n";
	return nullptr;
}
bool ListaEnlazada::EstaVacia()
{
	return NodoInicial == nullptr;
}
bool ListaEnlazada::anula()
{
	Nodo* NodoActual = NodoInicial;
	//Nodo inicial
	Nodo* Temp;
	//Nodo Tempoaral para borrar
	while (NodoActual != nullptr) {
		//Mientras el nodo actual sea de difenrete de nulo
		NodoActual = NodoActual->getSiguiente();
		///obtenemos el siguiente nodo
		if (NodoActual != nullptr) {
			std::cout << "Elimnando elemntos (Lista Enlazada)\n";
			Temp = NodoActual;
			//Borramos el actual;
			delete Temp;
		}
	}
	return false;
}
bool ListaEnlazada::equals(Object* _obj)
{
	return false;
}
std::string ListaEnlazada::toString()
{
	return std::string();
}
void ListaEnlazada::imprimir()
{
}
