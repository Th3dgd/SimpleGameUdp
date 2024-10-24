#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

class Menu {
public:
    Menu();
    void draw(sf::RenderWindow& window, int index);
    void MoveUp();
    void MoveDown();
    int GetPressedItem();

private:
    static int selectedItemIndex; 
    std::vector<sf::Text> menuText;
    std::vector<std::string> options;
    sf::Font font;
};

#endif
