#include "..\Public\MallardDuck.h"
#include "..\Public\FlyWithWings.h"
#include "..\Public\Quack.h"
#include <iostream>

MallardDuck::MallardDuck()
{
	quack_behavior = new Quack();
	fly_behavior = new FlyWithWings();
}

void MallardDuck::display()
{
	std::cout << "I'm a real Mallard duck\n";
}
