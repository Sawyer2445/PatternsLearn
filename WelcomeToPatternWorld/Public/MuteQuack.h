#ifndef MUTE_QUACK_H
#define MUTE_QUACK_H

#include "QuackBehavior.h"

class MuteQuack : public QuackBehavior 
{
public:
	void quack() override;
};

#endif // !MUTE_QUACK_H


