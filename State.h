#pragma once
#include "SFML/Graphics.hpp"
class State
{
private:

protected:

	enum Situation {
		Running, Paused, Exiting
	};
	sf::RenderWindow* window;
	sf::Event& event;
	Situation setting = Running;
public:
	State(sf::RenderWindow* window, sf::Event& event);
	virtual ~State();

	//Virtuals
	virtual void checkQuit();
	virtual void endState() = 0;
	virtual void update(const float& dt) = 0;
	virtual void updateInput(const float& dt) = 0;
	virtual void draw(sf::RenderTarget* target = nullptr) = 0;


	const bool getQuit() const;
	void pause() { setting = State::Paused; }
	void unpause() { setting = State::Running; }
};
