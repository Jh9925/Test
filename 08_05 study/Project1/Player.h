#pragma once

#include "Character.h"

class Player : public Character
{
public:
    Player(const string& name, int hp, int atk, int def);

    // Reduce HP when attacked
    void takeDamage(int amount);
    void equipWeapon(int weaponAtk);
    void equipArmor(int armorDef);


    int getTotalAttackPower() const;
    int getTotalDefensePower() const;



    void printInfo() const;


    int weaponAtk;
    int armorDef;


};

