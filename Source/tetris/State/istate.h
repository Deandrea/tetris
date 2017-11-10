#ifndef ISTATE_H
#define ISTATE_H

#include <SFML/Graphics.hpp>

class stateManager;

class istate 
{

public:
	istate() = delete;
	istate(stateManager &manager) : sManager (manager) {  }
	virtual ~istate() { };
	virtual void draw(sf::RenderWindow &window)=0;
	virtual void update()=0;

protected:
	stateManager &sManager;
};

#endif // !ISTATE_H
