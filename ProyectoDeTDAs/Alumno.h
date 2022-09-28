#pragma once
#include<string>
#include"Object.h"

class Alumno :public Object
{
public:
	Alumno();
	Alumno(int _ID,std::string _NombreAlumno);
	std::string toString()override;
	bool equals(Object* _obj)override;
	void imprimir() override;
	int getID();
private:
	int ID;
	std::string NombreAumno;
	///Clase Alumno
};
