#ifndef _MODELDUCK_H_
#define _MODELDUCK_H_

#include "Duck.h"

class ModelDuck : public Duck
{
public:
	ModelDuck()
	{
		SetFlyBehavior(new FlyNoWay);
		SetQuackBehavior(new Quack);
	}

	~ModelDuck()
	{}

	void display()
	{
		std::cout << "I'm a model duck.\n";
	}
};


#endif