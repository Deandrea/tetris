#include <SFML/Graphics.hpp>
#include "State\stateManager.h"
#include "State\mainMenuState.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
	stateManager sManager;
	sManager.requestChangeState(new mainMenuState(sManager));
	sManager.changeState();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		sManager.update();
		window.clear();
		sManager.draw(window);
		window.display();
		sManager.changeState();
	}

	return 0;
}