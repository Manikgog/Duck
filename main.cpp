#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include "Duck.h"
#include "MallardDuck.h"
#include "RubberDuck.h"
#include "ModelDuck.h"


int main() {
	
	Duck* mallard = new MallardDuck();			//> создание указателя на объект класса MallardDuck (утка-кряква)
	mallard->SetFlyBehavior(new FlyWithWings);	//> определение полётного поведения с помощью создания указателя на реализацию интерфейсного класса IFlyBehavior - FlyWithWings 
	mallard->performFly();						//> запуск метода, вызывающего метод fly() у того класса на который направлен указатель flyBehavior
	mallard->performQuack();					//> запуск метода, вызывающего метод quack() у того класса на который направлен указатель quackBehavior
	mallard->SetQuackBehavior(new MuteQuack);	//> определение звукового поведения с помощью создания указателя на реализацию интерфейсного класса IQuackBehavior - MuteQuack
	mallard->performQuack();					//> запуск метода, вызывающего метод quack() у того класса на который направлен указатель quackBehavior

	delete mallard;								//> освобождение памяти выделенной под объект
	mallard = nullptr;							//> обнуление указателя

	Duck* rubberduck = new RubberDuck();		//> создание указателя на объект класса RubberDuck (резиновая уточка)
	rubberduck->performQuack();					//> запуск метода, вызывающего метод quack() у того класса на который направлен указатель quackBehavior
	rubberduck->performFly();					//> запуск метода, вызывающего метод fly() у того класса на который направлен указатель flyBehavior
	delete rubberduck;							//> освобождение памяти выделенной под объект

	Duck* modelduck = new ModelDuck();			
	modelduck->performFly();					//> запуск метода, вызывающего метод fly() у того класса на который направлен указатель flyBehavior
	modelduck->SetFlyBehavior(new FlyRocketPowered);//> определение полётного поведения с помощью создания указателя на реализацию интерфейсного класса IFlyBehavior - FlyRocketPowered
	modelduck->performFly();					//> запуск метода, вызывающего метод fly() у того класса на который направлен указатель flyBehavior


	delete modelduck;							//> освобождение памяти выделенной под объект

	return 0;
}
