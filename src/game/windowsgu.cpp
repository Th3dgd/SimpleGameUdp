#include "game/windowsgu.h"

WindowSGU::WindowSGU() : window(sf::VideoMode(800, 600), "SGU") {}

int WindowSGU::open(std::function<void(sf::RenderWindow&)> callback){
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        callback(window);

        window.display();
    }
    return EXIT_SUCCESS;
}