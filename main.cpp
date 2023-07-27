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
	
	/*Duck* mallard = new MallardDuck();
	mallard->SetFlyBehavior(new FlyWithWings);
	mallard->performFly();
	mallard->performQuack();
	mallard->SetQuackBehavior(new MuteQuack);
	mallard->performQuack();

	delete mallard;
	mallard = nullptr;

	Duck* rubberduck = new RubberDuck();
	rubberduck->performQuack();
	rubberduck->performFly();
	delete rubberduck;*/

	Duck* modelduck = new ModelDuck();
	modelduck->performFly();
	modelduck->SetFlyBehavior(new FlyRocketPowered);
	modelduck->performFly();


	delete modelduck;

	return 0;
}
