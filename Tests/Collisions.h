//
// Created by erosp on 14/05/2021.
//

#ifndef AOEBULLET_CPP_COLLISIONS_H
#define AOEBULLET_CPP_COLLISIONS_H

#include "gtest/gtest.h"
#include <windows.h>

#include "../Hero.h"
#include "../Enemy.h"
#include "../Function.h"
/*
class Collisions: public testing::Test {
public:
    //Enemy Enemy1;
    TextDisplayClass TextDisplay;
    vector<sptr<Enemy>> enemyArray;
    vector<sptr<TextDisplayClass>> textDisplayArray;
    sf::Clock clock;
    std::shared_ptr<Function> function;
};

TEST_F(Collisions, Enemy_Hero) {
    Map::getInstance()->vectorM1 = std::vector<int>{
            1,1,1,
            1,0,1,
            1,0,1,
            1,1,1
    };
    Hero Hero(10,10,3,50,50);
    std::vector<int>({50,85});
    //Enemy Enemy(10,10,1,2,50,85);
    //test vita iniziale eroe
    Function::enemy_collision_player(Hero, enemyArray, TextDisplay, textDisplayArray, clock);
    ASSERT_EQ(Hero.hp,10);
    //test vita finale eroe
    Hero.UpdateMovement(true, sf::Keyboard::S);
    Function::enemy_collision_player(Hero, enemyArray, TextDisplay, textDisplayArray, clock);
    ASSERT_EQ(Hero.hp,8);

}
*/


/*
TEST(Collision, Enemy_Hero) {
    Map::getInstance()->vectorM1 = std::vector<int>{
            1,1,1,
            1,0,1,
            1,0,1,
            1,1,1
    };
    Hero Hero1(10,10,3,50,50);
    Enemy Enemy1(10,10,1,2,50,85);
    vector<sptr<Enemy>> enemyArray;
    TextDisplayClass TextDisplay;
    vector<sptr<TextDisplayClass>> textDisplayArray;
    sf::Clock clock;

    ASSERT_EQ(Hero1.hp,10);
    Hero1.UpdateMovement(true, sf::Keyboard::S);
    Function::enemy_collision_player(Hero1, enemyArray, TextDisplay, textDisplayArray, clock);
    ASSERT_EQ(Hero1.hp,8);
}

*/
#endif //AOEBULLET_CPP_COLLISIONS_H