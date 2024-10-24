/* Game includes */
#include "game/init/initializer.h"
#include "game/draw/shape.h"
#include "game/keyboard/MenuInput.h"

/* UI includes Views */
#include "ui/menu.h"
#include "ui/views/create.h"
#include "ui/views/join.h"

Initializer::Initializer() {}

Shape shapes;
Menu menu;
MenuInput menuInput;
Join join;
Create create;

void Initializer::init(sf::RenderWindow& window) {
    if (menu.GetActuallyDrawMenu() == 1){
        join.draw(window);
    }else if (menu.GetActuallyDrawMenu() == 2){
        create.draw(window);
    }else if (menu.GetActuallyDrawMenu() == 3){
        window.close();
    }else{
        menu.draw(window, menu.GetPressedItem());
    }
}

void Initializer::events(sf::Event& event) {
    menuInput.init(event);
}