#include "State.h"



State::State(sf::RenderWindow* window, sf::Event& event)
	:
	event(event)
{
	this->window = window;
}


State::~State()
{
}

void State::checkQuit()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
		this->setting = Exiting;

}

const bool State::getQuit() const
{
	return (setting == Exiting);
}