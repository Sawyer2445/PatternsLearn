#ifndef SQUEAK_H
#define SQUEAK_H

#include "QuackBehavior.h"

class Squeak : public QuackBehavior
{
public:
	void quack() override;
};

#endif // !SQUEAK_H