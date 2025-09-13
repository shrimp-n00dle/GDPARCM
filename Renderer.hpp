#pragma once
#include "iostream"
#include "Factory.hpp"
class Renderer
{
public:
	static Renderer* getInstance();
	Factory* factory;

	//~Renderer() {};

	void drawAssets(sf::RenderWindow* window, sf::CircleShape* shape);
	void test();


private:
	//singletons
	Renderer() {};
	Renderer(Renderer const&) {};
	Renderer& operator=(Renderer const&) {};

	static Renderer* sharedInstance;
};

