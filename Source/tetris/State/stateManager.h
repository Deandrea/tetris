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
	void setState(istate *newState);
	
private :
	istate *currentState;
};

#endif //statemanager