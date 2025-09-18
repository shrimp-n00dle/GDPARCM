//#include "Renderer.hpp"
//#include "Factory.hpp"
//#include "Base.hpp"

#include <iostream>
#include <thread>
int x = 0;


void printX()
{
    std::cout << "X: " << x << std::endl;
}
void testThread()
{
    x = 1;

    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    std::cout << "hi" << std::endl;
    printX();
}

int main()
{
    //working behind the scenes
    std::thread myThread(testThread);

    x = 100;
    std::cout << "From main" << std::endl;
    printX();

    //will show what they have once you called the method to join in!
    myThread.join();

    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    //di na hinintay ni main so exit nalang but still works behind the scenes
    //myThread.detach();

    std::cout << "End Main" << std::endl;

    return 0;
}




//const float FRAME_RATE = 60;
//const sf::Time TIME_PER_FRAME = sf::seconds(1.f / FRAME_RATE);

//int main()
//{
//    /*Default resolution is 1920 x 1080
//    Change before submitting
//    Maximum Screen is 1366 x 768*/
//
//    /*PHASES TO DO
//     1. Render - DONE
//     2. Update - 90%
//     3. Process Events -- for inputs and such [Will do after set up is done
//     */
//
//    /*Initialization*/
//    sf::RenderWindow window(sf::VideoMode(1000, 500), "SFML works!");
//    const sf::Time TimePerFrame = sf::seconds(1.f / 60.0f);
//    Factory::getInstance()->initializeAssets();
//    sf::Clock clock;
//    sf::Clock frameClock;
//    /*to avoid lagging and help with collision detection*/
//    sf::Time timeSinceLastUpdate = sf::Time::Zero;
//    Base base;
//
//    int index = 0;
//
//    sf::Time imgTimer = sf::Time::Zero;
//
//    window.setFramerateLimit(60);
//
//    /*Main Game Loop*/
//    while (window.isOpen())
//    {
//
//        base.processEvents(&window);
//
//        //Add cmd prompt print for now
//        sf::Time frameRate = frameClock.getElapsedTime();
//        //std::cout << 1.0f / frameRate.asSeconds() << std::endl;
//        frameClock.restart().asSeconds();
//
//
//        timeSinceLastUpdate += clock.restart();
//        while (timeSinceLastUpdate > TimePerFrame)
//        {
//            timeSinceLastUpdate -= TimePerFrame;
//            base.processEvents(&window);
//            base.performUpdates(TimePerFrame);
//           
//        }
//
//        /*Draw and Render*/
//        Renderer::getInstance()->drawAssets(&window, index);    
//    }
//    return 0;
//}