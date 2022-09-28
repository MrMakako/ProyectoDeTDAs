#pragma once
#include "string"

class Object
{
public:
	Object();
	public:
	virtual bool equals(Object* _obj)=0;
	virtual std::string toString()=0;
	virtual void imprimir()=0;
	//150//
};
