#ifndef _QUACKBEHAVIOR_H_
#define _QUACKBEHAVIOR_H_

#include <iostream>

class IQuackBehavior
{
public:
	virtual void quack() = 0;
};

class Quack : public IQuackBehavior
{
public:
	void quack()
	{
		std::cout << "Quack!\n";
	}
};

class MuteQuack : public IQuackBehavior
{
public:
	void quack()
	{
		std::cout << "Silence\n";
	}
};

class Squeak : public IQuackBehavior
{
public:
	void quack()
	{
		std::cout << "Squeak!\n";
	}
};


#endif // !_QUACKBEHAVIOR_H_
