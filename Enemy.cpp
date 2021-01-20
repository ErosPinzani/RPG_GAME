//
// Created by erosp on 22/10/2020.
//

#include "Enemy.h"

Enemy::Enemy() {
    //hp
    getHp();
    setHp(15);
    //maxhp
    getMaxhp();
    setMaxhp(15);
    //movementSpeed
    getMovementSpeed();
    setMovementSpeed(2);
    //attackDamage
    getAttackDamage();
    setAttackDamage(2);
    //direction
    getDirection();
    setDirection(0);
    //counterwalking
    getCounterWalking();
    setCounterWalking(0);

    rect.setSize(sf::Vector2f(31.7, 31.7));
    rect.setPosition(75, 42);
    rect.setFillColor(sf::Color::Blue);
    sprite.setTextureRect(sf::IntRect(0, 31.7*2, 31.7, 31.7));
}

void Enemy::UpdateMovement(bool testing, sf::Keyboard::Key key) {
    sprite.setPosition(rect.getPosition());
    text.setPosition(rect.getPosition().x - rect.getSize().x/2 - 5, rect.getPosition().y - rect.getSize().y/2 - 5);
    if (direction == 1 && Character::Walkable(1)){ //up
        rect.move(0, -movementSpeed);
        sprite.setTextureRect(sf::IntRect(counterWalking * 31.7, 31.7*3, 31.7, 31.7));
    }

    else if (direction == 2 && Character::Walkable(2)){ //down
        rect.move(0, movementSpeed);
        sprite.setTextureRect(sf::IntRect(counterWalking * 31.7, 0, 31.7, 31.7));
    }

    else if (direction == 3 && Character::Walkable(3)){ //left
        rect.move(-movementSpeed, 0);
        sprite.setTextureRect(sf::IntRect(counterWalking * 31.7, 31.7, 31.7, 31.7));
    }

    else if (direction == 4 && Character::Walkable(4)){ //right
        rect.move(movementSpeed, 0);
        sprite.setTextureRect(sf::IntRect(counterWalking * 31.7, 31.7*2, 31.7, 31.7));
    }

    counterWalking++;
    if (counterWalking == 2)
        counterWalking = 0;

    counter++;
    if (counter >= movementLength) {
        direction = generateRandom(20);
        counter = 0;
    }
}