#include "mainMenuState.h"
#include <SFML\Window\Keyboard.hpp>
#include  "State\gameState.h"
#include "State\stateManager.h"

mainMenuState::mainMenuState(stateManager &manager)
	: istate(manager)
	, shape (100.0f)
{
	shape.setFillColor(sf::Color::Green);
}

mainMenuState::~mainMenuState()
{

}

void mainMenuState::draw(sf::RenderWindow &window)
{
	window.draw(shape);
}

void mainMenuState::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
	{
		sManager.requestChangeState(new gameState(sManager));
	}
}