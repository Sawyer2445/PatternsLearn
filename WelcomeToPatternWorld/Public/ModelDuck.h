#ifndef MODEL_DUCK_H
#define MODEL_DUCK_H

#include "Duck.h"

class ModelDuck : public Duck
{
public:
	ModelDuck();

	void display() override;
};

#endif // !MODEL_DUCK_H