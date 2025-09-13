#include "Renderer.hpp"
int main()
{
    /*Default resolution is 1920 x 1080
    Change before submitting
    Maximum Screen is 1366 x 768*/

    /*Initialization*/
    sf::RenderWindow window(sf::VideoMode(1000, 500), "SFML works!");

    /*PHASES TO DO
    1. Render
    2. Update
    3. Process Events*/

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    Factory::getInstance()->initializeAssets();

    /*Main Game Loop*/
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            /*
            * PROCESS EVENTS HERE
            */

            if (event.type == sf::Event::Closed)
                window.close();
        }

        /*Draw and Render*/
        Renderer::getInstance()->drawAssets(&window, &shape);    
    }
    return 0;
}