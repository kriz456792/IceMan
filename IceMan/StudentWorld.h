#ifndef STUDENTWORLD_H_
#define STUDENTWORLD_H_

/*
* Methods available from GameWorld
unsigned int getLives() const;
void decLives();
void incLives();
unsigned int getScore() const;
unsigned int getLevel() const;
void increaseScore(unsigned int howMuch);
void setGameStatText(string text);
bool getKey(int& value);
void playSound(int soundID)
*/

#include "GameWorld.h"
#include "GameConstants.h"
#include "Actor.h"
#include <string>


class StudentWorld : public GameWorld
{
public:
	StudentWorld(std::string assetDir)
		: GameWorld(assetDir)
	{
	}

	virtual int init()
	{
		PALETERO = new Iceman(this);
		PALETERO->setVisible(true);
		
		//p1 = new Protester(this);
		//p1->setVisible(true);

		//p2 = new HardcoreProtester(this);
		//p2->setVisible(true);
		
		
		return GWSTATUS_CONTINUE_GAME;
	}

	virtual int move()
	{

		PALETERO->doSomething();
		//p1->doSomething();
		//p2->doSomething();
		
		//decLives();
		return GWSTATUS_CONTINUE_GAME;
	}

	virtual void cleanUp()
	{
		delete PALETERO;
		//delete p1;
		//delete p2;
	}

	

private:

	Iceman* PALETERO{}; //PALETERO = ICEMAN(SPANISH)
	Actor* p1{};
	Actor* p2{};
};

#endif // STUDENTWORLD_H_
