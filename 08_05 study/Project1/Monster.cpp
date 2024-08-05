#include "Monster.h"
#include "Player.h"
#include <iostream>

Monster::Monster(const string& name, int hp, int atk, int def) : Character(name, hp, atk, def)
{
    // printInfo();
}

void Monster::takeDamage(int amount)
{
    reduceHp(amount);
    cout << "몬스터가 " << (amount - getDef()) << " 피해를 입었습니다." << endl << endl;
}

void Monster::printInfo() const
{
    cout << name << " - 체력: " << hp << ", 공격력: " << atk << ", 방어력: " << def << endl;
}
