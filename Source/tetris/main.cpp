#include <SFML/Graphics.hpp>
#include "State\stateManager.h"
#include "State\mainMenuState.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
	stateManager sManager;
	sManager.setState(new mainMenuState);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		sManager.draw(window);
		window.display();
	}

	return 0;
}