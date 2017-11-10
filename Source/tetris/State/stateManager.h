#ifndef STATEMANAGER_H
#define STATEMANAGER_H

#include "State\istate.h"
#include <SFML/Graphics.hpp>

class stateManager
{

public:
	stateManager();
	~stateManager();
	void draw(sf::RenderWindow &window);
	void update();
	void requestChangeState(istate *newState);
	//do not call this from a state, plz
	void changeState();
	
private :
	istate *currentState;
	istate *requestedState;
};

#endif //statemanager