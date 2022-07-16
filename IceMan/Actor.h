#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"
#include "GameConstants.h"
//class StudentWorld;



/*
GraphObject(int imageID, int startX, int startY,DIRECTION startDirection, float size = 1.0,unsigned int depth = 0);
void setVisible(bool shouldIDisplay);
void getX() const;
void getY() const;
void moveTo(int x, int y);
DIRECTION getDirection() const; // Directions: up, down, left, right
void setDirection(DIRECTION d); // Directions: up, down, left, right
*/

class Actor: public GraphObject{ //Actor is an abstract class where all other classes defined after will inherit it.
	
public:
	Actor(int imageID, int startX, int startY, Direction dir = right, double size = 1.0, unsigned int depth = 0);
	~Actor();

	virtual void doSomething() = 0;
};



class Iceman : public Actor {

	int hit_points{ 10 };
	int water_num{ 5 };
	int sonar_num{ 1 };
	int gold_nug{ 0 };

public:
	Iceman(int imageID = IID_PLAYER, int startX = 30, int startY = 60, Direction dir = right, double size = 1.0, unsigned int depth = 0);
	~Iceman();

	void doSomething();

	void decrease_hit();
	void decrease_water();
	void decrease_sonar();
	void decrease_gold();

	void increase_water();
	void increase_sonar();
	void increase_gold();

	void set_hit(int val = 10);
	void set_water(int val = 5);
	void set_sonar(int val = 1);
	void set_gold(int val = 0);

	int get_hit();
	int get_water();
	int get_sonar();
	int get_gold();
};



class Protester : public Actor {

public:
	Protester(int imageID = IID_PROTESTER, int startX = 55, int startY = 60, Direction dir = left, double size = 1.0, unsigned int depth = 1);
	~Protester();

	virtual void doSomething();
};



class HardcoreProtester : public Protester {

public:
	HardcoreProtester(int imageID = IID_HARD_CORE_PROTESTER, int startX = 55, int startY = 60, Direction dir = left, double size = 1.0, unsigned int depth = 1);
	~HardcoreProtester();

	void doSomething();
};



class Ice : public Actor {

public:
	Ice(int startX, int startY, int imageID = IID_ICE, Direction dir = left, double size = .25, unsigned int depth = 1);
	~Ice();

	void doSomething();
};



class Boulder : public Actor {

public:
	Boulder(int startX, int startY, int imageID = IID_BOULDER, Direction dir = left, double size = 1.0, unsigned int depth = 1);
	~Boulder();

	void doSomething();
};



class Squirt : public Actor {

public:
	Squirt(int startX, int startY, Direction dir, int imageID = IID_WATER_SPURT, double size = 1.0, unsigned int depth = 1);
	~Squirt();

	void doSomething();
};



class Oil : public Actor {

public:
	Oil(int startX, int startY, int imageID = IID_BARREL, Direction dir = left, double size = 1.0, unsigned int depth = 2);
	~Oil();

	void doSomething();
};



class Gold : public Actor {

public:
	Gold(int startX, int startY, int imageID = IID_GOLD, Direction dir = none, double size = 1.0, unsigned int depth = 2);
	~Gold();

	void doSomething();
};



class Sonar : public Actor {

public:
	Sonar(int startX, int startY, int imageID = IID_SONAR, Direction dir = none, double size = 1.0, unsigned int depth = 2);
	~Sonar();

	void doSomething();
};



class Pool : public Actor {

public:
	Pool(int startX, int startY, int imageID = IID_WATER_POOL, Direction dir = none, double size = 1.0, unsigned int depth = 2);
	~Pool();

	void doSomething();
};
#endif // ACTOR_H_
