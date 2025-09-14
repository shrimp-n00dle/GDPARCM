#pragma once
#include <SFML/Graphics.hpp>
#include "unordered_map"
#include "iostream"
class Factory
{
public:
	static Factory* getInstance();

	~Factory() {};

	void initializeAssets();

	//Holds all sprite assets
	std::vector<sf::Sprite*> assetSpriteList;

private:


	//singletons
	Factory() {};
	Factory(Factory const&) {};
	Factory& operator=(Factory const&) {};

	static Factory* sharedInstance;


};

