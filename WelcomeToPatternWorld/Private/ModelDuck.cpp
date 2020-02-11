#include "..\Public\ModelDuck.h"
#include "..\Public\FlyNoWay.h"
#include "..\Public\Quack.h"
#include <iostream>

ModelDuck::ModelDuck()
{
	fly_behavior = new FlyNoWay();
	quack_behavior = new Quack();
}

void ModelDuck::display()
{
	std::cout << "I'm model duck !\n";
}
