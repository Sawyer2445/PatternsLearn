#ifndef MALLARDUCK_H
#define MALLARDUCK_H

#include "Duck.h"

class MallardDuck : public Duck
{
public:
	MallardDuck();
	void display() override;
};

#endif // !MALLARDUCK_H
