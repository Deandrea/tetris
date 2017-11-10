#include "stateManager.h"

stateManager::stateManager()
	: currentState(NULL)
	, requestedState (NULL)
{

}

stateManager::~stateManager()
{
	if (currentState != NULL)
	{
		delete currentState;
	}
}

void stateManager::draw(sf::RenderWindow &window) 
{
	if (currentState != NULL)
	{
		currentState->draw(window);
	}
}

void stateManager::update()
{
	if (currentState != NULL)
	{
		currentState->update();
	}
}

void stateManager::requestChangeState(istate *newState)
{
	requestedState = newState;
}

void stateManager::changeState()
{
	if (requestedState == NULL) 
		return;
	
	if (currentState != NULL)
	{
		delete currentState;
	}

	currentState = requestedState;

	requestedState = NULL;
}