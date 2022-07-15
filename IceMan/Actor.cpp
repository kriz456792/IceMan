#include "Actor.h"
#include "StudentWorld.h"

// Students:  Add code to this file (if you wish), Actor.h, StudentWorld.h, and StudentWorld.cpp

Actor::Actor(int imageID, int startX, int startY, StudentWorld* world, Direction dir, double size, unsigned int depth):
	GraphObject(imageID, startX, startY, dir, size, depth) {}

Actor::~Actor() { }