#ifndef _MODELDUCK_H_
#define _MODELDUCK_H_

#include "Duck.h"

class ModelDuck : public Duck
{
public:
	ModelDuck()
	{
		SetFlyBehavior(new FlyNoWay);	//> задание исходного указателя на классы реализации поведения
		SetQuackBehavior(new Quack);	//> задание исходного указателя на классы реализации поведения
	}

	~ModelDuck()
	{}

	void display()
	{
		std::cout << "I'm a model duck.\n";
	}
};


#endif