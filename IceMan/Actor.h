#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"
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

class Actor: public GraphObject{
	
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
	Protester(int imageID, int startX, int startY, Direction dir, double size, unsigned int depth);
	~Protester();

	virtual void doSomething();
};


#endif // ACTOR_H_
