#include "stateManager.h"

stateManager::stateManager()
	: currentState(NULL)
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

void stateManager::setState(istate *newState)
{
	if (currentState != NULL)
	{
		delete currentState;
	}
	currentState = newState;
}