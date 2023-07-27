#ifndef _FLYBEHAVIOR_H_
#define _FLYBEHAVIOR_H_

#include <iostream>

/*!
\brief интерфейсный класс представляющий полётное поведение 
*/
class IFlyBehavior
{
public:
	virtual void fly() = 0;
};

/*!
\brief класс реализующий конкретное полётное поведение
*/
class FlyWithWings : public IFlyBehavior
{
public:
	void fly()
	{
		std::cout << "I'm flying!!\n";
	}
};

/*!
\brief класс реализующий конкретное полётное поведение
*/
class FlyNoWay : public IFlyBehavior
{
public:
	void fly()
	{
		std::cout << "I can't fly.\n";
	}
};

/*!
\brief класс реализующий конкретное полётное поведение
*/
class FlyRocketPowered : public IFlyBehavior
{
public:
	void fly()
	{
		std::cout << "I'm flying with a rocket!\n";
	}
};


#endif