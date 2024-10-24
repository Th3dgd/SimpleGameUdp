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
    int GetActuallyDrawMenu();
    void setActuallyDrawMenu(int index);
private:
    static int selectedItemIndex;
    static int actuallyDrawMenu;
    std::vector<sf::Text> menuText;
    std::vector<std::string> options;
    sf::Font font;
};

#endif
