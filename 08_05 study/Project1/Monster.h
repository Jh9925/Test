#pragma once

#include "Character.h"

class Monster : public Character
{
public:
    Monster(const string& name, int hp, int atk, int def);

    // Reduce HP when attacked
    void takeDamage(int amount);

    void printInfo() const;


};
