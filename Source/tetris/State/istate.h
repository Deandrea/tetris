#ifndef ISTATE_H
#define ISTATE_H

#include <SFML/Graphics.hpp>

class istate 
{

public:
	virtual ~istate() { };
	virtual void draw(sf::RenderWindow &window)=0;
	virtual void update()=0;


};

#endif // !ISTATE_H
