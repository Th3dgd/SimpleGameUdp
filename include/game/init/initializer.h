#ifndef INITIALIZER_H
#define INITIALIZER_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

class Initializer {
public:
    Initializer();
    void init(sf::RenderWindow& window);
};

#endif