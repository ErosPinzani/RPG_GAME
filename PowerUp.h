//
// Created by Francesco on 22/10/2020.
//

#ifndef RPG_GAME_POWERUP_H
#define RPG_GAME_POWERUP_H
#include <string>

class PowerUp {
public:
    void addCoin();

    const std::string &getType() const;

    void setType(const std::string &type);

    void heal();
private:
    std::string type;
};


#endif //RPG_GAME_POWERUP_H
