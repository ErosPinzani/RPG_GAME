//
// Created by erosp on 19/03/2021.
//

#ifndef MAIN_CPP_FUNCTION_H
#define MAIN_CPP_FUNCTION_H

#include "memory"

#include "Hero.h"
#include "PickUpClass.h"
#include "Enemy.h"
#include "TextDisplayClass.h"
#include "AoeBullet.h"
#include "Chest.h"

// Add a short alias for std::shared_ptr to the current environment
template <class T> using sptr = std::shared_ptr<T>;

class Function {
public:
    static void item_collision(Hero &Hero, vector<sptr<PickUpClass>> &pickUpArray);
    static void enemy_collision_player(Hero &Hero, vector<sptr<Enemy>> &enemyArray, TextDisplayClass &TextDisplay, vector<sptr<TextDisplayClass>> &textDisplayArray, sf::Clock &clock);
    static void aoe_collision(vector<sptr<AoeBullet>> &AoeBulletArray, vector<sptr<Enemy>> &enemyArray, vector<sptr<Chest>> &chestArray, TextDisplayClass &TextDisplay, vector<sptr<TextDisplayClass>> &textDisplayArray);
    static void aggro(vector<sptr<Enemy>> &enemyArray, Hero &Hero, sf::Clock &clock);
    static void delete_enemy(vector<sptr<Enemy>> &enemyArray, PickUpClass &PickUp, vector<sptr<PickUpClass>> &pickUpArray, Enemy &Blood, vector<sptr<Enemy>> &bloodArray);
    static void delete_AoeBullet(vector<sptr<AoeBullet>> &AoeBulletArray);
    static void delete_text(vector<sptr<TextDisplayClass>> &textDisplayArray);
    static void delete_chest(vector<sptr<Chest>> &chestArray, Chest &OpenChest, vector<sptr<Chest>> &openChestArray, PickUpClass &PickUp, vector<sptr<PickUpClass>> &pickUpArray);
    static void delete_PickUp_items(vector<sptr<PickUpClass>> &pickUpArray);
    static void draw(vector<sptr<Enemy>> &bloodArray, vector<sptr<Chest>> &chestArray, vector<sptr<Chest>> &openChestArray, vector<sptr<PickUpClass>> &pickUpArray, vector<sptr<AoeBullet>> &AoeBulletArray, vector<sptr<Enemy>> &enemyArray, vector<sptr<TextDisplayClass>> &textDisplayArray, Hero &Hero, sf::RenderWindow &window);
};


#endif //MAIN_CPP_FUNCTION_H
