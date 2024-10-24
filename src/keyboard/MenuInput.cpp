#include "game/keyboard/MenuInput.h"
#include "ui/menu.h"

MenuInput::MenuInput() {}

Menu MenuFunctions;

void MenuInput::init(sf::Event event) {
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::Up) {
            MenuFunctions.MoveUp();
        }
        else if (event.key.code == sf::Keyboard::Down) {
            MenuFunctions.MoveDown();
        }
        else if (event.key.code == sf::Keyboard::Return) {
            MenuFunctions.setActuallyDrawMenu(MenuFunctions.GetPressedItem());
        }else if (event.key.code == sf::Keyboard::Escape) {
            MenuFunctions.setActuallyDrawMenu(-1);
        }
    }
}