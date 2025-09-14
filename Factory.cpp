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
	sf::CircleShape* shape = new sf::CircleShape();
	shape->setScale(100, 100);
	shape->setFillColor(sf::Color::Green);
	assetList.push_back(shape);

	sf::CircleShape* shape2 = new sf::CircleShape();
	shape2->setScale(200, 200);
	shape2->setPosition(500,200);
	shape2->setFillColor(sf::Color::Yellow);
	assetList.push_back(shape2);
}