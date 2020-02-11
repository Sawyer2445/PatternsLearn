#include "..\Public\Duck.h"
#include "..\Public\FlyWithWings.h"
#include "..\Public\Quack.h"

#include <iostream>

void Duck::setFlyBehavior(FlyBehavior * fb)
{
	fly_behavior = fb;
}

void Duck::perfomFly()
{
	fly_behavior->fly();
}

void Duck::performQuack()
{
	quack_behavior->quack();
}

void Duck::setQuckBehavior(QuackBehavior * qb)
{
	quack_behavior = qb;
}

void Duck::swim()
{
	std::cout << "All ducks float, even decoys !\n";
}
