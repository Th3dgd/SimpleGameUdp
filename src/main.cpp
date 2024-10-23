// simple game udp created by th3dgd
// https://github.com/Th3dgd

#include "../include/game/windowsgu.h"

void drawTest(sf::RenderWindow& window) {
    sf::CircleShape shape(50);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(200, 150);

    window.draw(shape);
}

int main () {
    WindowSGU windowsgu;

    windowsgu.open(drawTest);

    return 0;
}