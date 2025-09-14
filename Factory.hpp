#pragma once
#include <SFML/Graphics.hpp>
#include "unordered_map"
class Factory
{
public:
	static Factory* getInstance();

	~Factory() {};

	void initializeAssets();

	//Shapes for now
	std::vector<sf::CircleShape*> assetList;

private:


	//singletons
	Factory() {};
	Factory(Factory const&) {};
	Factory& operator=(Factory const&) {};

	static Factory* sharedInstance;


};

