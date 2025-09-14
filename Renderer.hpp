#pragma once
#include "iostream"
#include <SFML/Graphics.hpp>
#include "unordered_map"
#include "Factory.hpp"
class Renderer
{
public:
	static Renderer* getInstance();
	//~Renderer() {};

	void drawAssets(sf::RenderWindow* window, int index);




private:
	//singletons
	Renderer() {};
	Renderer(Renderer const&) {};
	Renderer& operator=(Renderer const&) {};

	static Renderer* sharedInstance;
};

