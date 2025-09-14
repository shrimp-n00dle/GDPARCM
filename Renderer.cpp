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

void Renderer::drawAssets(sf::RenderWindow* window, int index)
{
	window->clear();

	//desert png
	window->draw(*Factory::getInstance()->assetSpriteList[0]);



	for (int i = 1; i < Factory::getInstance()->assetSpriteList.size(); i++)
	{
		window->draw(*Factory::getInstance()->assetSpriteList[i]);
	}



	//}

	//For the sprites
	//if (index > 1)
	//{
		//x 1000, y 500
		//std::cout << "index is" << index << std::endl;
		//rows 1 to 3
		 //if (index < 4) Factory::getInstance()->assetSpriteList[index]->setPosition(2 * index, 0);
		 //else Factory::getInstance()->assetSpriteList[index]->setPosition(2 * index, 0 * index);
	//}
	window->display();
}
