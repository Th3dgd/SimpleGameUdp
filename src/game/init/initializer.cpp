#include "game/init/initializer.h"
#include "game/draw/shape.h"
#include "ui/menu.h"

Initializer::Initializer() {}

Shape shapes;
Menu menu;

void Initializer::init(sf::RenderWindow& window) {
    menu.draw(window, menu.GetPressedItem());
}