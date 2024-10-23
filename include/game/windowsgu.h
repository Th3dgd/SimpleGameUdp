#ifndef WINDOWSGU_H
#define WINDOWSGU_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <functional>

class WindowSGU {
public:
    WindowSGU();
    int open(std::function<void(sf::RenderWindow&)> callback);
    sf::RenderWindow window;
};

#endif