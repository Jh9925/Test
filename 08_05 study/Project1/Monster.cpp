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
    cout << "���Ͱ� " << (amount - getDef()) << " ���ظ� �Ծ����ϴ�." << endl << endl;
}

void Monster::printInfo() const
{
    cout << name << " - ü��: " << hp << ", ���ݷ�: " << atk << ", ����: " << def << endl;
}
