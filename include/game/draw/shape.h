
#ifndef SHAPE_H
#define SHAPE_H

#include <SFML/Graphics.hpp>
#include <iostream>

class Shape {
public:
    Shape();
    void draw(sf::RenderWindow& window);
};

#endif