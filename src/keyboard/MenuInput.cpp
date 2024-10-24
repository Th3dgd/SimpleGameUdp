#include "game/keyboard/MenuInput.h"
#include "ui/menu.h"

MenuInput::MenuInput() {}

Menu MenuFunctions;

void MenuInput::init(sf::Event event) {
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::Up) {
            std::cout << "Up" << std::endl;
            MenuFunctions.MoveUp();
        }
        else if (event.key.code == sf::Keyboard::Down) {
            std::cout << "Down" << std::endl;
            MenuFunctions.MoveDown();
        }
        else if (event.key.code == sf::Keyboard::Return) {
            std::cout << "Return " << MenuFunctions.GetPressedItem() << std::endl;
        }
    }
}