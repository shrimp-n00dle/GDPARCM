#pragma once
#include <SFML/Graphics.hpp>
#include "Factory.hpp"

class Base
{
public:
	const sf::Time TimePerFrame = sf::seconds(1.f / 60.0f);

	Base() {};
	void performUpdates(sf::Time deltaTime);
	void processEvents(sf::RenderWindow* window);

private:
	const float SPEED_MULTIPLIER = 3000.0f;
};

