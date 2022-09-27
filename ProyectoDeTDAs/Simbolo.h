#pragma once
#include "Object.h"
class Simbolo:public Object
{



public:


	Simbolo();
	Simbolo(char _Simbolo);
	 bool equals(Object* _obj) override;

	 std::string toString() override;



	void imprimir()override;
	char getSimbolo();

private:

	char _Simbolo;
};

