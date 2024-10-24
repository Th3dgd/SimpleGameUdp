#include "game/window/sgu.h"

WindowSGU::WindowSGU() : window(sf::VideoMode(800, 600), "SGU") {}

int WindowSGU::open(std::function<void(sf::RenderWindow&)> callback, std::function<void(sf::Event&)> callback2){
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            
            callback2(event);
        }

        window.clear();

        callback(window);

        window.display();
    }
    return EXIT_SUCCESS;
}