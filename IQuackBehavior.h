#ifndef _QUACKBEHAVIOR_H_
#define _QUACKBEHAVIOR_H_

#include <iostream>

/*!
\brief интерфейсный класс представляющий звуковое поведение
*/
class IQuackBehavior
{
public:
	virtual void quack() = 0;
};

/*!
\brief класс реализующий конкретное звуковое поведение
*/
class Quack : public IQuackBehavior
{
public:
	void quack()
	{
		std::cout << "Quack!\n";
	}
};

/*!
\brief класс реализующий конкретное звуковое поведение
*/
class MuteQuack : public IQuackBehavior
{
public:
	void quack()
	{
		std::cout << "Silence\n";
	}
};

/*!
\brief класс реализующий конкретное звуковое поведение
*/
class Squeak : public IQuackBehavior
{
public:
	void quack()
	{
		std::cout << "Squeak!\n";
	}
};


#endif // !_QUACKBEHAVIOR_H_
