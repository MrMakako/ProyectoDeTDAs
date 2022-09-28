#include "ArrayList.h"

ArrayList::ArrayList()
{
	capacidad = 10;
	n = 0;
	Array = new Object * [capacidad];
	ultimo = 0;
	for (int i = 0; i < capacidad; i++) {
		Array[i] = nullptr;
	}
}
bool ArrayList::Inserta(Object* _obj, int pos)
{
	if ((pos ) >= 1 && (pos) <= capacidad) {
	//Evaluamos si pos es mayor o igual  1 y menor o igual a 10;	
		if (pos > ultimo+1) {
			//Lista llena
			std::cout << "Lista llena o numero fuera de rango \n";
			return false;
		}
		//Evaluar si la lista esta lleno 
		for (int i = ultimo; i > pos - 1; i--) {
			//movemos los numeros 
			Array[i] = Array[i -1];
		}
		std::cout << "Se Agrego el elemento exitosamente!\n";
		Array[pos - 1] = _obj;
		ultimo++;
		n++;
		return true;
	}
	std::cout << "No se pudo Agregar\n";
	return false;
}
bool ArrayList::suprime(int pos)
{
	if (pos >= 1 && pos <= ultimo) {
		//posicion existente
		ultimo--;
		delete Obtener(pos);
		for (int i = pos-1; i < ultimo ; i++) {
			//movemos los numeros 
			Array[i] = Array[i+ 1];
			std::cout << "SE REALIZAN CORRIMEINTOS CON EL METODO SUPRIME\n";
			//partimos desde la casilla y realizamos corrimientos mientras la casilla sea menor al ultimo elemento , cuadno llegemos al ultimo terminan los cocrrimnetos.
		}
	}
	else {
		//posicion no existente
	}
	return false;
}
int ArrayList::Localiza(Object* _obj){
	if (EstaVacia()) {
		//no se encontro el elemento en la lista
		return 0;
	}
	else {
		for (int i = 0; i < ultimo; i++) {
			if (Array[i]->equals(_obj)) {
				return i + 1;
			}
			//revisamosa hasta el ultimo elemento y retornamos su posicion si pertenence a la lista!!!!/
		}
	}
}

void ArrayList::Imprimir(){
	if (EstaVacia()){
		std::cout << "Lista Vacia!!!\n";
	}
	else {
		for (int i = 0; i < ultimo; i++) {
			std::cout << Array[i]->toString() << i << std::endl;
		}
	}
}

Object* ArrayList::Obtener(int pos)
{
	if (pos >= 1 && pos <= ultimo) {
		std::cout << "La posicion " << pos << "ha sido localizada correctamente\n";
		return Array[pos - 1];
	}
	//Fuera de rango
	std::cout << "Fuera de Rango imposible obtener ese valor \n";
	return nullptr;
}
Object* ArrayList::ObtenerSiguiente(int pos)
{
	if (pos > ultimo ||pos<1) {
		std::cout << "Fuera del rango\n";
		return nullptr;
	}
	if ((pos+1) <= ultimo) {
		return Array[pos];
	}
	return nullptr;
}
Object* ArrayList::ObtenerAnterior(int pos)
{
	if (pos > ultimo || pos < 1) {
		std::cout << "Fuera del rango\n";
		return nullptr;
	}
	if ((pos -1) >0) {
		return Obtener(pos - 1);
	};
	return nullptr;
}
bool ArrayList::EstaVacia(){
	return (ultimo == 0);
}
bool ArrayList::anula()
{
	if (EstaVacia()) {
		std::cout << "La lista ya esta vacia\n";
		return false;
	}
	for(int i = 0; i < ultimo; i++){
		delete Array[i];
		Array[i] = nullptr;
	}
	std::cout << "La lista ha sido vaciada\n";
	ultimo = 0;
	return true;
}
bool ArrayList::equals(Object* _obj)
{
	return false;
}
std::string ArrayList::toString()
{
	return std::string();
}
void ArrayList::imprimir()
{
}
