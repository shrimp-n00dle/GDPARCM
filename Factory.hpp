#pragma once
#include <SFML/Graphics.hpp>
#include "unordered_map"
class Factory
{
public:
	//Shapes for now
	std::vector<sf::CircleShape*> assetList;

	Factory() {};
	~Factory() {};

	void initializeAssets();


};

