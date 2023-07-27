#ifndef _DUCK_H_
#define _DUCK_H_

#include <iostream>
#include "IFlyBehavior.h"
#include "IQuackBehavior.h"

/*! 
\breaf суперкласс Duck утка
От этого класса наследуются все виды уток.
В классе имеются два поля flyBehavior  и quackBehavior это указатели на интерфейсы аспектов поведения конкретной
утки, и это поведение может даже поменяться в ходе выполнения программы если перенаправить указатель на другой 
класс описывающий другое поведение.
*/
class Duck
{
private:
	IFlyBehavior* flyBehavior = nullptr;		//> указатель на интерфейс полётного поведения утки
	IQuackBehavior* quackBehavior = nullptr;	//> указатель на интерфейс звукового поведения утки

public:
	
	Duck() 
	{
		quackBehavior = static_cast<Quack*>(new Quack());
		flyBehavior = static_cast<FlyNoWay*>(new FlyNoWay());
	}

	~Duck() 
	{
		if (quackBehavior)
		{
			delete quackBehavior;
			quackBehavior = nullptr;
		}
		if (flyBehavior)
		{
			delete flyBehavior;
			flyBehavior = nullptr;
		}
	}

	void SetFlyBehavior(IFlyBehavior* _flyBehavior)
	{
		if (flyBehavior)
		{
			delete flyBehavior;
			flyBehavior = nullptr;
		}
		
		flyBehavior = _flyBehavior;
	}

	void SetQuackBehavior(IQuackBehavior* _quackBehavior)
	{
		if (quackBehavior)
		{
			delete quackBehavior;
			quackBehavior = nullptr;
		}
		quackBehavior = _quackBehavior;
	}
	
	IFlyBehavior* GetFlyBehavior()
	{
		return flyBehavior;
	}

	IQuackBehavior* GetQuackBehavior()
	{
		return quackBehavior;
	}



	/*!
	\brief метод, который разный у каждого наследника, но его нет необходимости часто менять
	*/
	virtual void display() {}

	/*!
	\brief функция, вызывающая метод fly() у того класса на который направлен указатель flyBehavior
	*/
	void performFly()
	{
		flyBehavior->fly();
	}

	/*!
	\brief функция, вызывающая метод quack() у того класса на который направлен указатель quackBehavior
	*/
	void performQuack()
	{
		quackBehavior->quack();
	}

	/*!
	\brief метод, который является неизменным для всех наследников класса Duck
	*/
	void swim()
	{
		std::cout << "All ducks float, even decoys!\n";
	}

};

#endif // !_DUCK_H_
