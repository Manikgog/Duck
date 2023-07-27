#ifndef _MALLARDDUCK_H_
#define _MALLARDDUCK_H_

#include "Duck.h"

class MallardDuck : public Duck
{
public:
	MallardDuck()
	{
		SetFlyBehavior(new FlyWithWings);	//> задание исходного указателя на классы реализации поведения
		SetQuackBehavior(new Quack);		//> задание исходного указателя на классы реализации поведения
	}

	~MallardDuck()
	{}

	void display()
	{
		std::cout << "I'm a real Mallard duck.\n";
	}

};


#endif // !_MALLARDDUCK_H_
