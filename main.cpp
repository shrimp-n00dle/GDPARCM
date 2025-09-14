#include "Renderer.hpp"
#include "Factory.hpp"
#include "Base.hpp"

const float FRAME_RATE = 60;
const sf::Time TIME_PER_FRAME = sf::seconds(1.f / FRAME_RATE);

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
    sf::Clock frameClock;
    /*to avoid lagging and help with collision detection*/
    sf::Time timeSinceLastUpdate = sf::Time::Zero;
    Base base;

    window.setFramerateLimit(60);

    /*Main Game Loop*/
    while (window.isOpen())
    {

        base.processEvents(&window);

        //Add cmd prompt print for now
   /*     sf::Time frameRate = frameClock.getElapsedTime();
        std::cout << 1.0f / frameRate.asSeconds() << std::endl;
        frameClock.restart().asSeconds();*/


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