#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "State\istate.h"

class gameState : public istate
{


public:
	gameState(stateManager &manager);
	~gameState();
	virtual void draw(sf::RenderWindow &window);
	virtual void update();

private:
	sf::CircleShape shape;

};


#endif 