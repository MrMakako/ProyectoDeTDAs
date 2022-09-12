#include "Alumno.h"

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
	return false;
}

void Alumno::imprimir()
{
}

std::string Alumno::toString()
{
	return "Nombre:" + NombreAumno + "----" + std::to_string(ID)+"\n";
}
