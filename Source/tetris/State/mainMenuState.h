#ifndef MAINMENUSTATE_H
#define MAINMENUSTATE_H

#include "State\istate.h"

class mainMenuState : public istate
{


public:
	mainMenuState(stateManager &manager);
	~mainMenuState();
	virtual void draw(sf::RenderWindow &window);
	virtual void update();

private:
	sf::CircleShape shape;

};


#endif 