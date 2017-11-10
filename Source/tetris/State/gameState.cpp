#include "gameState.h"

gameState::gameState()
	: shape(100.0f)
{
	shape.setFillColor(sf::Color::Blue);
}

gameState::~gameState()
{

}

void gameState::draw(sf::RenderWindow &window)
{
	window.draw(shape);
}

void gameState::update()
{

}