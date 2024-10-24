#include "ui/views/create.h"

Create::Create() {}

void Create::draw(sf::RenderWindow& window) {
    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {}

    sf::Text textCreate;
    textCreate.setFont(font);
    textCreate.setString("Create");
    textCreate.setCharacterSize(40);
    textCreate.setFillColor(sf::Color::White);

    window.draw(textCreate);
}