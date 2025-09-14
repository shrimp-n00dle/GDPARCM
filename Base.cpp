#include "Base.hpp"

void Base::performUpdates(sf::Time deltaTime)
{
	/*BG Movement*/
	//make BG scroll slowly
	//HARD CODE!!
	//std::cout << Factory::getInstance()->assetSpriteList[0]->getPosition().y << std::endl;
	sf::Vector2f position = Factory::getInstance()->assetSpriteList[0]->getPosition();
	position.y += 100.0f * deltaTime.asSeconds();
	Factory::getInstance()->assetSpriteList[0]->setPosition(position.x, position.y);

	sf::Vector2f localPos = Factory::getInstance()->assetSpriteList[0]->getPosition();
	if (localPos.y * deltaTime.asSeconds() > 0) {	
		Factory::getInstance()->assetSpriteList[0]->setPosition(0, -500 * 2);
	}


	//for the other sprites
	for (int i = 1; i < Factory::getInstance()->assetSpriteList.size(); i++)
	{
		if (i < 4) Factory::getInstance()->assetSpriteList[i]->setPosition(100 * i, 0);
		for (int j = 0 + i; j < i; j++)
		{
			
			if (i > 3) Factory::getInstance()->assetSpriteList[i]->setPosition(100 * j, 100 * i);
		}

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
