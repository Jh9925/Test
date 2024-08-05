#include "Player.h"
#include <iostream>

Player::Player(const string& name, int hp, int atk, int def)
    : Character(name, hp, atk, def),weaponAtk(0), armorDef(0)
{
    printInfo();
}
// 데미지 게산
void Player::takeDamage(int amount)
{
    // 데미지 계산시 추가 스텟 적용 매우 어려움,,,, 하지만 햇죠
    int effectiveDamage = amount - armorDef;
    reduceHp(effectiveDamage);
    if (effectiveDamage <= getDef())
    {
        cout << "플레이어가 " << " 막았습니다." << endl << endl;
    }
    else
    {
        cout << "플레이어가 " << (effectiveDamage - getDef()) << " 피해를 입었습니다." << endl << endl;
    }
}

// 무기 장착 
void Player::equipWeapon(int weaponAtk)
{
    this->weaponAtk = weaponAtk;

    cout << "무기를 장착했습니다. 공격력이 " << weaponAtk << " 증가합니다." << endl;
}
// 방어구 장착
void Player::equipArmor(int armorDef)
{
    this->armorDef = armorDef;
    cout << "방어구를 장착했습니다. 방어력이 " << armorDef << " 증가합니다." << endl;
}
// 장비착용 공격력 반환
int Player::getTotalAttackPower() const
{
    return atk + weaponAtk;
}
// 장비착용 방어력 반환
int Player::getTotalDefensePower() const
{
    return def + armorDef;
}
// 정보출력
void Player::printInfo() const
{
    cout << name << " - 체력: " << hp << ", 공격력: " << atk+ weaponAtk << ", 방어력: " << def + armorDef << endl;
}
