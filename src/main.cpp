// simple game udp created by Th3dgd
// https://github.com/Th3dgd

#include "game/window/sgu.h"
#include "game/init/initializer.h"

int main () {
    WindowSGU windowsgu;
    Initializer initializer;

    windowsgu.open([&initializer](sf::RenderWindow& window) {
        initializer.init(window);
    }, [&initializer](sf::Event& event) {
        initializer.events(event);
    });

    return 0;
}