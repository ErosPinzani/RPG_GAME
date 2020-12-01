//
// Created by erosp on 01/12/2020.
//

#include "TextDisplay.h"

TextDisplay::TextDisplay() {
    movementSpeed = 1;
    text.setFillColor(sf::Color::Red);
    text.setCharacterSize(15);
    text.setString(myString);
}

void TextDisplay::Update() {
    text.move(0, -movementSpeed);
    counter++;
    if (counter >= lifeTime)
        destroy = true;
}