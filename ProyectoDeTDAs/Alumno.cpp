#include "Alumno.h"
#include <iostream>

Alumno::Alumno()
{
	ID = 0000000;
	NombreAumno ="Nombre Vacio";
}
Alumno::Alumno(int _ID, std::string _NombreAlumno)
{
	ID = _ID;
	NombreAumno = _NombreAlumno;
}
bool Alumno::equals(Object* _obj)
{
	Alumno* AlumnoC= (Alumno*)_obj;
	return (ID == AlumnoC->getID());
}
void Alumno::imprimir()
{
	std::cout<< toString();
}
int Alumno::getID()
{
	return ID;
}
std::string Alumno::toString()
{
	return "Nombre:" + NombreAumno + "----" + std::to_string(ID)+"\n";
}
