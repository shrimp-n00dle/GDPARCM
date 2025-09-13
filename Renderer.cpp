#include "Renderer.hpp"


//Renderer::Renderer()
//{
//	std::cout << "Renderer()" << std::endl;
//	factory->initializeAssets();
//}

void Renderer::test()
{
	std::cout << "test()" << std::endl;
	factory->initializeAssets();
}

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

	/*for (int i = 0; i < factory->assetList.size(); i++)
	{
		window->draw(*factory->assetList[i]);
	}*/

	window->draw(*shape);
	
	window->display();

}
