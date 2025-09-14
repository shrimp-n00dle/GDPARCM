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

}