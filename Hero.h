//
// Created by Eros on 22/10/2020.
//

#ifndef RPG_GAME_HERO_H
#define RPG_GAME_HERO_H

#include "Character.h"

class Hero: public Character {
public:
    int HeroChoice; //1.melee 2.SRanged 3.AoeRanged
    int coins = 0;

    Hero();
    Hero(int maxHp, int Hp, int MovementSpeed, float x, float y);
};


#endif //RPG_GAME_HERO_H
