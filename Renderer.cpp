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

	window->draw(*Factory::getInstance()->assetSpriteList[0]);
	/*for (int i = 0; i < factory->assetList.size(); i++)
	{
		
		window->draw(*factory->assetList[i]);

	}*/
	//window->draw(*shape);
	window->display();
}
