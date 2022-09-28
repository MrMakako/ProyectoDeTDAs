#include "Simbolo.h"

Simbolo::Simbolo()
{
	_Simbolo = ' ';
}
Simbolo::Simbolo(char _Simbolo)
{
	this->_Simbolo = _Simbolo;
}
bool Simbolo::equals(Object* _obj)
{
	Simbolo* sim = (Simbolo*)_obj;
	return _Simbolo == sim->getSimbolo();
}
std::string Simbolo::toString()
{
	return std::to_string(_Simbolo);
}
void Simbolo::imprimir()
{
	std::cout << "Simbolo: " << _Simbolo;
}
char Simbolo::getSimbolo()
{
	return _Simbolo;
}
