#include "game/init/initializer.h"
#include "game/draw/shape.h"
#include "ui/menu.h"
#include "game/keyboard/MenuInput.h"

Initializer::Initializer() {}

Shape shapes;
Menu menu;
MenuInput menuInput;

void Initializer::init(sf::RenderWindow& window) {
    menu.draw(window, menu.GetPressedItem());
}

void Initializer::events(sf::Event& event) {
    menuInput.init(event);
}