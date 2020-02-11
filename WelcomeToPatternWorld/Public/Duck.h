#ifndef DUCK_H
#define DUCK_H

class Duck
{
public:

	class FlyBehavior * fly_behavior;
	class QuackBehavior * quack_behavior;

public:

	virtual void display() =0;

	void setFlyBehavior(class FlyBehavior *);
	void perfomFly();
	
	void performQuack();
	void setQuckBehavior(class QuackBehavior *);

	void swim();

};

#endif // !DUCK_H
