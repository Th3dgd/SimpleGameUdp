#ifndef MENUINPUT_H
#define MENUINPUT_H

#include <SFML/Graphics.hpp>
#include <iostream>

class MenuInput {
public:
    MenuInput();
    void init(sf::Event event);
};

#endif