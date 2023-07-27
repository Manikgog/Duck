#ifndef _RUBBERDUCK_H_
#define _RUBBERDUCK_H_

#include "Duck.h"
#include "IQuackBehavior.h"
#include "IFlyBehavior.h"

class RubberDuck : public Duck
{
public:
	RubberDuck()
	{
		SetFlyBehavior(new FlyNoWay);
		SetQuackBehavior(new Quack);
	}
	~RubberDuck()
	{}

	void display()
	{
		std::cout << "I'm a yellow rubber duck.\n";
	}
};


#endif // !_RUBBERDUCK_H_
