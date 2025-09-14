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
	sf::Texture* texture = new sf::Texture();
	texture->loadFromFile("Media/Textures/Desert.png");
	if (!texture->loadFromFile("Media/Textures/Desert.png"))
	{
		std::cout << "file not found" << std::endl;
	}

	sf::Sprite* sprite = new sf::Sprite();
	sprite->setTexture(*texture);
	assetSpriteList.push_back(sprite);

	/*Images*/
	//first 5 muna
	for (int i = 0; i < 5; i++)
	{
		sf::Texture* texture = new sf::Texture();
		std::string index = std::to_string(i);
		std::string path = "Media/Streaming/tile00" + index + ".png";
		texture->loadFromFile(path);
		if (!texture->loadFromFile(path))
		{
			std::cout << "file not found" << std::endl;
		}

		sf::Sprite* sprite = new sf::Sprite();
		sprite->setTexture(*texture);
		assetSpriteList.push_back(sprite);
	}
}