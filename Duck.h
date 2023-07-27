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
		if (this->quackBehavior)
		{
			delete this->quackBehavior;
			this->quackBehavior = nullptr;
		}
		if (this->flyBehavior)
		{
			delete this->flyBehavior;
			this->flyBehavior = nullptr;
		}
	}

	void SetFlyBehavior(IFlyBehavior* _flyBehavior)
	{
		if (this->flyBehavior)
		{
			delete this->flyBehavior;
			this->flyBehavior = nullptr;
		}
		
		this->flyBehavior = _flyBehavior;
	}

	void SetQuackBehavior(IQuackBehavior* _quackBehavior)
	{
		if (this->quackBehavior)
		{
			delete this->quackBehavior;
			this->quackBehavior = nullptr;
		}
		this->quackBehavior = _quackBehavior;
	}
	
	/*!
	\brief метод-геттер для получения указателя flyBehavior (поля класса Duck)
	*/
	IFlyBehavior* GetFlyBehavior()
	{
		return this->flyBehavior;
	}

	/*!
	\brief метод-геттер для получения указателя quackBehavior (поля класса Duck)
	*/
	IQuackBehavior* GetQuackBehavior()
	{
		return this->quackBehavior;
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
		this->flyBehavior->fly();
	}

	/*!
	\brief функция, вызывающая метод quack() у того класса на который направлен указатель quackBehavior
	*/
	void performQuack()
	{
		this->quackBehavior->quack();
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
