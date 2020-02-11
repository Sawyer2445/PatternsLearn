#ifndef FLY_ROCKET_POWERED_H
#define FLY_ROCKET_POWERED_H

#include "FlyBehavior.h"

class FlyRocketPowered : public FlyBehavior
{
public:
	void fly() override;
};

#endif // !FLY_ROCKET_POWERED_H
