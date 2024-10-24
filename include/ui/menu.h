#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

class Menu {
public:
    Menu();
    void draw(sf::RenderWindow& window);
    void MoveUp();
    void MoveDown();
    int selectedItemIndex = 0;
    int GetPressedItem();

private:
    std::vector<sf::Text> menuText;
    std::vector<std::string> options;
    sf::Font font;
};

#endif
