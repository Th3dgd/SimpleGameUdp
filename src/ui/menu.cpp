#include "ui/menu.h"
#include <iostream>

int Menu::selectedItemIndex = 0;

Menu::Menu() {
    float width = 800, height = 600;
    
    if (!font.loadFromFile("arial.ttf")) {
    }

    options.push_back("Unirse a Sala");
    options.push_back("Crear Sala");
    options.push_back("Salir");

    for (size_t i = 0; i < options.size(); i++) {
        sf::Text menuOption;
        menuOption.setFont(font);
        menuOption.setString(options[i]);
        menuOption.setCharacterSize(40);
        menuOption.setFillColor(sf::Color::White);
        menuOption.setPosition(width / 2 - 100, height / (options.size() + 1) * (i + 1));
        menuText.push_back(menuOption);
    }

    menuText[selectedItemIndex].setFillColor(sf::Color::Red);
}

void Menu::MoveUp() {
    if (selectedItemIndex - 1 >= 0) {
        selectedItemIndex--;
    }
}

void Menu::MoveDown() {
    if (selectedItemIndex + 1 < options.size()) {
        selectedItemIndex++;
    }
}

int Menu::GetPressedItem() {
    return selectedItemIndex;
}

void Menu::draw(sf::RenderWindow& window, int index) {
    for (size_t i = 0; i < options.size(); i++) {
        menuText[i].setFillColor(sf::Color::White);
        menuText[selectedItemIndex].setFillColor(sf::Color::Red);
        window.draw(menuText[i]);
    }
}
