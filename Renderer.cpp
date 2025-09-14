#include "Renderer.hpp"

Renderer* Renderer::sharedInstance = nullptr;

Renderer* Renderer::getInstance()
{
	if (sharedInstance == nullptr)
	{
		sharedInstance = new Renderer();
	}

	return sharedInstance;
}

void Renderer::drawAssets(sf::RenderWindow* window, sf::CircleShape* shape)
{
	window->clear();


	for (int i = 0; i < Factory::getInstance()->assetSpriteList.size(); i++)
	{
		window->draw(*Factory::getInstance()->assetSpriteList[i]);
	}
	window->display();
}
