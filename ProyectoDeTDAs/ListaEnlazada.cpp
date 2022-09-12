
#include "ListaEnlazada.h"

ListaEnlazada::ListaEnlazada()
{


	cantidad = 1;
	NodoInicial = nullptr;

}

bool ListaEnlazada::Inserta(Object* _obj, int pos)
{

	Nodo* NodoActual=NodoInicial;

	if (pos >= 1 && pos <= cantidad) {
		
	
		Nodo* NuevoNodo = new Nodo(_obj);
		if (NodoActual == nullptr) {
			NodoInicial = NuevoNodo;
			//Se Agrega el rimer nodo 
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
		}
		NodoActual = NodoActual->getSiguiente();
	
	
	}

	



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



	return nullptr;
}

Object* ListaEnlazada::ObtenerSiguiente(int pos)
{
	return nullptr;
}

Object* ListaEnlazada::ObtenerAnterior(int pos)
{
	return nullptr;
}

bool ListaEnlazada::EstaVacia()
{
	return false;
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
