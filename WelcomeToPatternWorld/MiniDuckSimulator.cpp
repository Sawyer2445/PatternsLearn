#include <iostream>
#include "Public/MallardDuck.h"
#include "Public/ModelDuck.h"
#include "Public/FlyRocketPowered.h"

int main()
{
	Duck * mallard  = new MallardDuck();
	mallard->performQuack();
	mallard->perfomFly();

	Duck * model = new ModelDuck();
	model->perfomFly();
	model->setFlyBehavior(new FlyRocketPowered());
	model->perfomFly();

	return 0;
}