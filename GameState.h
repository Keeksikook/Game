#pragma once
#include "State.h"
class GameState :
	public State
{
private:
	/*All necessary variables here*/
	sf::RectangleShape rect, rect2;
public:
	GameState(sf::RenderWindow* window, sf::Event& event);
	virtual ~GameState();

	//Functions
	void endState() override;
	void updateInput(const float& dt) override;
	void update(const float& dt) override;
	void draw(sf::RenderTarget* target = nullptr) override;
};

