#include "Renderer.hpp"
#include "Factory.hpp"
#include "Base.hpp"

int main()
{
    /*Default resolution is 1920 x 1080
    Change before submitting
    Maximum Screen is 1366 x 768*/

    /*PHASES TO DO
     1. Render - DONE
     2. Update
     3. Process Events -- for inputs and such [Will do after set up is done]

     to do:

     1. do set up complete [Today]
     2. ray tracing [Wednesday]
     3. polish the base engine [Friday]
     */

    /*Initialization*/
    sf::RenderWindow window(sf::VideoMode(1000, 500), "SFML works!");
    const sf::Time TimePerFrame = sf::seconds(1.f / 60.0f);
    Factory::getInstance()->initializeAssets();
    sf::Clock clock;
    /*to avoid lagging and help with collision detection*/
    sf::Time timeSinceLastUpdate = sf::Time::Zero;
    Base base;

    /*Main Game Loop*/
    while (window.isOpen())
    {
        base.processEvents(&window);
        timeSinceLastUpdate += clock.restart();
        while (timeSinceLastUpdate > TimePerFrame)
        {
            timeSinceLastUpdate -= TimePerFrame;
            base.processEvents(&window);
            base.performUpdates(TimePerFrame);
        }

        /*Draw and Render*/
        Renderer::getInstance()->drawAssets(&window);    
    }


    return 0;
}