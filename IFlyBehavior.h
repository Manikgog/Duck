#ifndef _FLYBEHAVIOR_H_
#define _FLYBEHAVIOR_H_

#include <iostream>

class IFlyBehavior
{
public:
	virtual void fly() = 0;
};

class FlyWithWings : public IFlyBehavior
{
public:
	void fly()
	{
		std::cout << "I'm flying!!\n";
	}
};

class FlyNoWay : public IFlyBehavior
{
public:
	void fly()
	{
		std::cout << "I can't fly.\n";
	}
};

class FlyRocketPowered : public IFlyBehavior
{
public:
	void fly()
	{
		std::cout << "I'm flying with a rocket!\n";
	}
};


#endif