#ifndef DUCK_H
#define DUCK_H


class Duck
{
public:
	Duck() {};

	class FlyBehavior * fly_behavior;
	class QuackBehavior * quack_behavior;

public:

	virtual void display();
	void perfomFly();
	void performQuack();
	void swim();

};


#endif // DUCK_H
