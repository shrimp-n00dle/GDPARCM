#pragma once
#include <SFML/Graphics.hpp>
#include "unordered_map"
class Factory
{
public:
	static Factory* getInstance();
	//Shapes for now
	std::vector<sf::CircleShape*> assetList;

	~Factory() {};

	void initializeAssets();

private:
	//singletons
	Factory() {};
	Factory(Factory const&) {};
	Factory& operator=(Factory const&) {};

	static Factory* sharedInstance;


};

