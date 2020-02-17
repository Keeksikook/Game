#include "GameState.h"

GameState::GameState(sf::RenderWindow* window, sf::Event& event)
	:
	State(window, event),
	rect({ 30,30 })
{
	rect.setFillColor(sf::Color::Red);
}

GameState::~GameState()
{
	endState();
}

void GameState::endState()
{
}

void GameState::updateInput(const float& dt)
{
	checkQuit();
}

void GameState::update(const float& dt)
{
	if (setting == Running)
	{

		updateInput(dt);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			rect.move({-1, 0});
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			rect.move({ 1, 0 });
		if (event.type == sf::Event::Resized)
		{
		}
	}
}

void GameState::draw(sf::RenderTarget* target)
{
	if (!target)
		target = window;
	window->draw(rect);
}

