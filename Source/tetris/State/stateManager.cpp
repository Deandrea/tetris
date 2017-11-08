#include "stateManager.h"

void stateManager::draw(sf::RenderWindow &window) 
{
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	window.draw(shape);
}