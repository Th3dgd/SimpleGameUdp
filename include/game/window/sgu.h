#ifndef SGU_H
#define SGU_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <functional>

class WindowSGU {
public:
    WindowSGU();
    int open(std::function<void(sf::RenderWindow&)> callback, std::function<void(sf::Event&)> callback2);
    sf::RenderWindow window;
};

#endif