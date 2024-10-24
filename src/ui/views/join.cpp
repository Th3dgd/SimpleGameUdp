#include "ui/views/join.h"

Join::Join() {}

void Join::draw(sf::RenderWindow& window) {
    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {}

    sf::Text textJoin;
    textJoin.setFont(font);
    textJoin.setString("Join");
    textJoin.setCharacterSize(40);
    textJoin.setFillColor(sf::Color::White);

    window.draw(textJoin);
}