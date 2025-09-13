#include "Factory.hpp"

Factory* Factory::sharedInstance = nullptr;

Factory* Factory::getInstance()
{
	if (sharedInstance == nullptr)
	{
		sharedInstance = new Factory();
	}

	return sharedInstance;
}
void Factory::initializeAssets()
{
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	assetList.push_back(&shape);

	sf::CircleShape shape2(500.f);
	shape2.setFillColor(sf::Color::Yellow);
	assetList.push_back(&shape2);
}