//
// Created by erosp on 11/02/2021.
//

#ifndef ENEMY_CPP_COLLISIONS_H
#define ENEMY_CPP_COLLISIONS_H

#include "gtest/gtest.h"
#include "../Hero.h"
#include "../Enemy.h"
#include "../Map.h"
#include "../Chest.h"
#include "../AoeBullet.h"
#include "../Function.h"

class Collisions: public testing::Test {
public:
    AoeBullet Bullet1;
    Enemy Enemy1;
    TextDisplayClass TextDisplay1;
    vector<sptr<AoeBullet>> AoeBulletArray;
    vector<sptr<Enemy>> enemyArray;
    vector<sptr<Chest>> chestArray;
    vector<sptr<TextDisplayClass>> textDisplayArray;
    std::shared_ptr<Function> function;
};

TEST_F(Collisions, WallCollision){
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

    Bullet1.rect.setPosition(100, 100);

    Bullet1.direction = Bullet::left;
    ASSERT_EQ((int)Bullet1.rect.getPosition().x, 100);
    ASSERT_EQ((int)Bullet1.rect.getPosition().y, 100);
    Bullet1.Update();
    ASSERT_EQ((int)Bullet1.rect.getPosition().x, 100 - Bullet1.getMovementSpeed());
    ASSERT_EQ((int)Bullet1.rect.getPosition().y, 100);

    Bullet1.direction = Bullet::right;
    Bullet1.Update();
    ASSERT_EQ((int)Bullet1.rect.getPosition().x, 100);
    ASSERT_EQ((int)Bullet1.rect.getPosition().y, 100);

    Bullet1.direction = Bullet::down;
    Bullet1.Update();
    ASSERT_EQ((int)Bullet1.rect.getPosition().x, 100);
    ASSERT_EQ((int)Bullet1.rect.getPosition().y, 100 + Bullet1.getMovementSpeed());

    Bullet1.direction = Bullet::up;
    Bullet1.Update();
    ASSERT_EQ((int)Bullet1.rect.getPosition().x, 100);
    ASSERT_EQ((int)Bullet1.rect.getPosition().y, 100);

    for (int i = 0; i < 100; i++)
        Bullet1.Update();
    ASSERT_EQ((int)Bullet1.destroy, true);



    Map::getInstance()->vectorM1 = std::vector<int> {
            1,1,1,1,1,1,1,1,1,1,1,1,
            1,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,0,0,1,
            1,0,0,0,0,0,0,0,0,0,0,1,
            1,1,1,1,1,1,1,1,1,1,1,1
    };
    Bullet1.rect.setPosition(100, 100);
    Bullet1.destroy = false;

    ASSERT_EQ((int)Bullet1.rect.getPosition().x, 100);
    ASSERT_EQ((int)Bullet1.rect.getPosition().y, 100);

    Bullet1.direction = Bullet::left;
    Bullet1.Update();
    ASSERT_EQ((int)Bullet1.rect.getPosition().x, 100 - Bullet1.getMovementSpeed());
    ASSERT_EQ((int)Bullet1.rect.getPosition().y, 100);

    Bullet1.direction = Bullet::right;
    Bullet1.Update();
    ASSERT_EQ((int)Bullet1.rect.getPosition().x, 100);
    ASSERT_EQ((int)Bullet1.rect.getPosition().y, 100);

    Bullet1.direction = Bullet::down;
    Bullet1.Update();
    ASSERT_EQ((int)Bullet1.rect.getPosition().x, 100);
    ASSERT_EQ((int)Bullet1.rect.getPosition().y, 100 + Bullet1.getMovementSpeed());

    Bullet1.direction = Bullet::up;
    Bullet1.Update();
    ASSERT_EQ((int)Bullet1.rect.getPosition().x, 100);
    ASSERT_EQ((int)Bullet1.rect.getPosition().y, 100);

    for (int i = 0; i < 100; i++)
        Bullet1.Update();
    ASSERT_EQ((int)Bullet1.destroy, true);
}

TEST_F(Collisions, EnemyCollision){
    Enemy1.rect.setPosition(50, 100);
    ASSERT_EQ(Enemy1.rect.getPosition().x, 50);
    ASSERT_EQ(Enemy1.rect.getPosition().y, 100);

    Bullet1.rect.setPosition(100, 100);
    ASSERT_EQ(Bullet1.rect.getPosition().x, 100);
    ASSERT_EQ(Bullet1.rect.getPosition().y, 100);

    ASSERT_EQ(Enemy1.hp, 15);
    ASSERT_EQ(Bullet1.getAttackDamage(), 2);

    Bullet1.direction = Bullet::left;
    for (int i = 0; i < 10; i++) {
        std::cout<<Enemy1.hp<<endl;
        Bullet1.Update();
        function->aoe_collision(AoeBulletArray, enemyArray, chestArray, TextDisplay1, textDisplayArray);
    }

    ASSERT_EQ((int)Bullet1.destroy, true);
    ASSERT_EQ(Enemy1.hp, Enemy1.hp - Bullet1.getAttackDamage());
}

#endif //ENEMY_CPP_COLLISIONS_H
