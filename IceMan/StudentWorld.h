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
		PALETERO = new Iceman();
		PALETERO->setVisible(true);
		
		p1 = new Sonar(30, 30);
		p1->setVisible(true);
		
		
		return GWSTATUS_CONTINUE_GAME;
	}

	virtual int move()
	{

		
		
		//decLives();
		return GWSTATUS_CONTINUE_GAME;
	}

	virtual void cleanUp()
	{
		delete PALETERO;
	}

private:

	Iceman* PALETERO{}; //PALETERO = ICEMAN(SPANISH)
	Actor* p1{};
};

#endif // STUDENTWORLD_H_
