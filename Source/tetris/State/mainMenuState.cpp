#include "mainMenuState.h"

mainMenuState::mainMenuState()
	: shape (100.0f)
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

}