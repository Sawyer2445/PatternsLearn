#include "..\Public\Duck.h"
#include <iostream>
#include "..\Public\FlyWithWings.h"

void Duck::perfomFly()
{
	fly_behavior->fly();
}

void Duck::performQuack()
{
	quack_behavior->quack();
}

void Duck::swim()
{
	std::cout << "All ducks float, even decoys !\n";
}
