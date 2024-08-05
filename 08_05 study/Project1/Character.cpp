#include "Character.h"

#include <iostream>

Character::Character(const string& name, int hp, int atk, int def)
    : name(name), hp(hp), atk(atk), def(def) {}

int Character::getHp() const { return hp; }
int Character::getAtk() const { return atk; }
int Character::getDef() const { return def; }
string Character::getName() const { return name; }

// 몬스터 플레이어 공통계산
void Character::reduceHp(int amount)
{
    if ((amount - def) > 0)
    {
        hp -= (amount - def);
        if (hp < 0) hp = 0;
    }
    else
    {
        cout << " MISS " << endl;
    }
}

/*
void Character::printInfo() const
{
    cout << name << " - 체력: " << hp << ", 공격력: " << atk << ", 방어력: " << def << endl;
}
*/