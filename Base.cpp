#include "Base.hpp"

void Base::performUpdates(sf::Time deltaTime)
{
	/*BG Movement*/
	//make BG scroll slowly
	sf::Vector2f position = Factory::getInstance()->assetSpriteList[0]->getPosition();//this->getPosition();
	position.y += this->SPEED_MULTIPLIER * deltaTime.asSeconds();
	Factory::getInstance()->assetSpriteList[0]->setPosition(position.x, position.y);

	sf::Vector2f localPos = Factory::getInstance()->assetSpriteList[0]->getPosition();//this->sprite->getPosition();
	if (localPos.y * deltaTime.asSeconds() > 0) {
		//reset position
		//this->setPosition(0, -500 * 7);
		Factory::getInstance()->assetSpriteList[0]->setPosition(0, -500 * 7);
	}
	else {

	}

}

void Base::processEvents(sf::RenderWindow* window)
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		/*
		* PROCESS EVENTS HERE
		*/

		if (event.type == sf::Event::Closed)
			window->close();
	}
}
