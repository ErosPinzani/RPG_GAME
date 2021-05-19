//
// Created by erosp on 05/01/2021.
//

#ifndef MAIN_CPP_MOVEMENT_H
#define MAIN_CPP_MOVEMENT_H

#include "gtest/gtest.h"
#include "../Hero.h"
#include "../Enemy.h"
#include "../Map.h"
#include <windows.h>

TEST(Character, Movement) {
    Map::getInstance()->vectorM1 = std::vector<int>{
            1,1,1,
            1,0,1,
            1,0,1,
            1,1,1
    };
    Hero Hero(10,10,3,50,50);

    //test posizione iniziale
    ASSERT_EQ((int)Hero.rect.getPosition().x, 50);
    ASSERT_EQ((int)Hero.rect.getPosition().y, 50);

    //test movimento e collisione muro
    ASSERT_EQ(Hero.Walkable(Hero.left), false);
    Hero.UpdateMovement(true, sf::Keyboard::A);
    ASSERT_EQ((int)Hero.rect.getPosition().x, 50);
    ASSERT_EQ((int)Hero.rect.getPosition().y, 50);

    ASSERT_EQ(Hero.Walkable(Hero.right), true);
    Hero.UpdateMovement(true, sf::Keyboard::D);
    ASSERT_EQ((int)Hero.rect.getPosition().x, 53);
    ASSERT_EQ((int)Hero.rect.getPosition().y, 50);

    ASSERT_EQ(Hero.Walkable(Hero.up), false);
    Hero.UpdateMovement(true, sf::Keyboard::W);
    ASSERT_EQ((int)Hero.rect.getPosition().x, 53);
    ASSERT_EQ((int)Hero.rect.getPosition().y, 50);

    ASSERT_EQ(Hero.Walkable(Hero.down), true);
    Hero.UpdateMovement(true, sf::Keyboard::S);
    ASSERT_EQ((int)Hero.rect.getPosition().x, 53);
    ASSERT_EQ((int)Hero.rect.getPosition().y, 53);
}


TEST(Enemy, Movement) {
    Map::getInstance()->vectorM1 = std::vector<int>{
            1,1,1,
            1,0,1,
            1,0,1,
            1,1,1
    };
    Enemy Enemy(10, 10, 3, 5, 50, 50);

    //test posizione iniziale
    ASSERT_EQ((int)Enemy.rect.getPosition().x, 50);
    ASSERT_EQ((int)Enemy.rect.getPosition().y, 50);

    //test movimento e collisione muro
    ASSERT_EQ(Enemy.Walkable(Enemy.left), false);
    Enemy.UpdateMovement(true, Character::left);
    ASSERT_EQ((int)Enemy.rect.getPosition().x, 50);
    ASSERT_EQ((int)Enemy.rect.getPosition().y, 50);

    ASSERT_EQ(Enemy.Walkable(Enemy.right), true);
    Enemy.UpdateMovement(true, Character::right);
    ASSERT_EQ((int)Enemy.rect.getPosition().x, 53);
    ASSERT_EQ((int)Enemy.rect.getPosition().y, 50);

    ASSERT_EQ(Enemy.Walkable(Enemy.up), false);
    Enemy.UpdateMovement(true, Character::up);
    ASSERT_EQ((int)Enemy.rect.getPosition().x, 53);
    ASSERT_EQ((int)Enemy.rect.getPosition().y, 50);

    ASSERT_EQ(Enemy.Walkable(Enemy.down), true);
    Enemy.UpdateMovement(true, Character::down);
    ASSERT_EQ((int)Enemy.rect.getPosition().x, 53);
    ASSERT_EQ((int)Enemy.rect.getPosition().y, 53);
}

#endif //MAIN_CPP_MOVEMENT_H