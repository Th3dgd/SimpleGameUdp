#include "game/draw/shape.h"

Shape::Shape() {}

void Shape::draw(sf::RenderWindow& window) {
    sf::CircleShape shape(50);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(200, 150);

    window.draw(shape);
}