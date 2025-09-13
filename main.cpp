#include <SFML/Graphics.hpp>

int main()
{
    /*Default resolution is 1920 x 1080
    Change before submitting
    Maximum Screen is 1366 x 768*/

    sf::RenderWindow window(sf::VideoMode(1000, 500), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}