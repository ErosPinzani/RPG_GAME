//
// Created by Francesco on 22/10/2020.
//

#ifndef RPG_GAME_BULLET_H
#define RPG_GAME_BULLET_H

#include <SFML/Graphics.hpp>

class Bullet {
public:
    sf::RectangleShape rect;
    sf::Sprite sprite;

    int movementSpeed = 1;
    int attackDamage;
    int direction = 0; //1 - up, 2 - down, 3 - left, 4 - right
    bool destroy = false;
    int counterLifetime = 0;
    int lifetime = 100;

    int U = 1;
    int D = 2;
    int L = 3;
    int R = 4;

    virtual void Update();
    void Walkable(int direction);
};


#endif //RPG_GAME_BULLET_H