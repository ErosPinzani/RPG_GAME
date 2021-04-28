//
// Created by erosp on 05/01/2021.
//

#ifndef MAIN_CPP_MOVEMENT_H
#define MAIN_CPP_MOVEMENT_H

#include "gtest/gtest.h"
#include "../Hero.h"
#include "../Map.h"
#include <windows.h>



TEST(Character, Movement) {
    //Sleep(1000);
    Map::getInstance()->vectorM1 = std::vector<int> {
            1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
            1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,1,1,1,1,1,1,0,0,1,0,1,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,1,1,1,1,0,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,1,1,1,
            1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
            1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,
            1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,
            1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
            1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
};

    Hero Hero1;

    ASSERT_EQ((int)Hero1.rect.getPosition().x, 176);
    ASSERT_EQ((int)Hero1.rect.getPosition().y, 168);

    ASSERT_EQ(Hero1.Walkable(Hero1.right), true);
    Hero1.UpdateMovement(true, sf::Keyboard::D);
    ASSERT_EQ((int)Hero1.rect.getPosition().x, 181);
    ASSERT_EQ((int)Hero1.rect.getPosition().y, 168);

    ASSERT_EQ(Hero1.Walkable(Hero1.left), true);
    Hero1.UpdateMovement(true, sf::Keyboard::A);
    ASSERT_EQ((int)Hero1.rect.getPosition().x, 176);
    ASSERT_EQ((int)Hero1.rect.getPosition().y, 168);

    ASSERT_EQ(Hero1.Walkable(Hero1.down), true);
    Hero1.UpdateMovement(true, sf::Keyboard::S);
    ASSERT_EQ((int)Hero1.rect.getPosition().x, 176);
    ASSERT_EQ((int)Hero1.rect.getPosition().y, 173);

    ASSERT_EQ(Hero1.Walkable(Hero1.up), true);
    Hero1.UpdateMovement(true, sf::Keyboard::W);
    ASSERT_EQ((int)Hero1.rect.getPosition().x, 176);
    ASSERT_EQ((int)Hero1.rect.getPosition().y, 168);

    for (int i = 0; i < 100; i++)
        Hero1.UpdateMovement(true, sf::Keyboard::S);
    ASSERT_EQ((int)Hero1.rect.getPosition().y, 268);


    Map::getInstance()->vectorM1 = std::vector<int> {
            1,1,1,1,1,1,1,1,1,1,1,1,
            1,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,0,0,1,
            1,1,1,1,1,1,1,1,1,1,1,1
    };


    ASSERT_EQ((int)Hero1.rect.getPosition().x, 200-24);
    ASSERT_EQ((int)Hero1.rect.getPosition().y, 268);

    ASSERT_EQ(Hero1.Walkable(Hero1.right), false);
    Hero1.UpdateMovement(true);
    ASSERT_EQ((int)Hero1.rect.getPosition().x, 176);
    ASSERT_EQ((int)Hero1.rect.getPosition().y, 268);

    ASSERT_EQ(Hero1.Walkable(Hero1.left), false);
    Hero1.UpdateMovement(true, sf::Keyboard::A);
    ASSERT_EQ((int)Hero1.rect.getPosition().x, 176);
    ASSERT_EQ((int)Hero1.rect.getPosition().y, 268);

    ASSERT_EQ(Hero1.Walkable(Hero1.down), true);
    Hero1.UpdateMovement(true, sf::Keyboard::S);
    ASSERT_EQ((int)Hero1.rect.getPosition().x, 176);
    ASSERT_EQ((int)Hero1.rect.getPosition().y, 273);

    ASSERT_EQ(Hero1.Walkable(Hero1.up), false);
    Hero1.UpdateMovement(true, sf::Keyboard::W);
    ASSERT_EQ((int)Hero1.rect.getPosition().x, 176);
    ASSERT_EQ((int)Hero1.rect.getPosition().y, 273);

    for (int i = 0; i < 100; i++)
        Hero1.UpdateMovement(true, sf::Keyboard::S);
    ASSERT_EQ((int)Hero1.rect.getPosition().y, 368);
}

#endif //MAIN_CPP_MOVEMENT_H