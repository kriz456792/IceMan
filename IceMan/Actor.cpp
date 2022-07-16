#include "Actor.h"
#include "StudentWorld.h"


/*
GraphObject(int imageID, int startX, int startY,DIRECTION startDirection, float size = 1.0,unsigned int depth = 0);
void setVisible(bool shouldIDisplay);
void getX() const;
void getY() const;
void moveTo(int x, int y);
DIRECTION getDirection() const; // Directions: up, down, left, right
void setDirection(DIRECTION d); // Directions: up, down, left, right
*/



Actor::Actor(int imageID, int startX, int startY, Direction dir, double size, unsigned int depth):
	GraphObject(imageID, startX, startY, dir, size, depth) {}

Actor::~Actor() { }



Iceman::Iceman(int imageID, int startX, int startY, Direction dir, double size, unsigned int depth): 
	Actor (imageID, startX, startY, dir, size, depth) { setVisible(true);}

Iceman::~Iceman() {}

void Iceman::doSomething() { std::cout << "doSomething() Iceman" << std::endl; }

void Iceman::decrease_hit() { hit_points--; }
void Iceman::decrease_water() { water_num--; }
void Iceman::decrease_sonar() { sonar_num--; }
void Iceman::decrease_gold() { gold_nug--; }

void Iceman::increase_water() { water_num++; }
void Iceman::increase_sonar() { sonar_num++; }
void Iceman::increase_gold() { gold_nug++; }

void Iceman::set_hit(int val) { hit_points = val; }
void Iceman::set_water(int val) { water_num = val; }
void Iceman::set_sonar(int val) { sonar_num = val; }
void Iceman::set_gold(int val) { gold_nug = val; }

int Iceman::get_hit() { return hit_points; }
int Iceman::get_water() { return water_num; }
int Iceman::get_sonar() { return sonar_num; }
int Iceman::get_gold() { return gold_nug; }



Protester::Protester(int imageID, int startX, int startY, Direction dir, double size, unsigned int depth): 
	Actor ( imageID, startX, startY, dir, size, depth){}

Protester::~Protester(){}

void Protester::doSomething() { std::cout << "doSomething() Protester" << std::endl; }



HardcoreProtester::HardcoreProtester(int imageID, int startX, int startY, Direction dir, double size, unsigned int depth) :
	Protester(imageID, startX, startY, dir, size, depth) {}

HardcoreProtester::~HardcoreProtester() {}

void HardcoreProtester::doSomething() { std::cout << "doSomething() HProtester" << std::endl; }



Ice::Ice(int startX, int startY, int imageID, Direction dir, double size, unsigned int depth) :
	Actor(imageID, startX, startY, dir, size, depth) {}

Ice::~Ice() {}

void Ice::doSomething() { std::cout << "doSomething() Ice" << std::endl; }



Boulder::Boulder(int startX, int startY, int imageID, Direction dir, double size, unsigned int depth) : 
	Actor(imageID, startX, startY, dir, size, depth) {}

Boulder::~Boulder() {}

void Boulder::doSomething() { std::cout << "doSomething() Boulder" << std::endl; }



Squirt::Squirt(int startX, int startY, Direction dir, int imageID, double size, unsigned int depth) : 
	Actor(imageID, startX, startY, dir, size, depth) {}

Squirt::~Squirt() {}

void Squirt::doSomething() { std::cout << "doSomething() Squirt" << std::endl; };



Oil::Oil(int startX, int startY, int imageID, Direction dir, double size, unsigned int depth) :
	Actor(imageID, startX, startY, dir, size, depth) {}

Oil::~Oil() {}

void Oil::doSomething() { std::cout << "doSomething() Oil" << std::endl; }



Gold::Gold(int startX, int startY, int imageID, Direction dir, double size, unsigned int depth) :
	Actor(imageID, startX, startY, dir, size, depth) {}

Gold::~Gold() {}

void Gold::doSomething() { std::cout << "doSomething() Gold" << std::endl; }



Sonar::Sonar(int startX, int startY, int imageID, Direction dir, double size, unsigned int depth) :
	Actor(imageID, startX, startY, dir, size, depth) {}

Sonar::~Sonar() {}

void Sonar::doSomething() { std::cout << "doSomething() Sonar" << std::endl; };



Pool::Pool(int startX, int startY, int imageID, Direction dir, double size, unsigned int depth) : 
	Actor(imageID, startX, startY, dir, size, depth) {}

Pool::~Pool() {}

void Pool::doSomething() { std::cout << "doSomething() Pool" << std::endl; };