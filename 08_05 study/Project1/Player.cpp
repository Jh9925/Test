#include "Player.h"
#include <iostream>

Player::Player(const string& name, int hp, int atk, int def)
    : Character(name, hp, atk, def),weaponAtk(0), armorDef(0)
{
    printInfo();
}
// ������ �Ի�
void Player::takeDamage(int amount)
{
    // ������ ���� �߰� ���� ���� �ſ� �����,,,, ������ ����
    int effectiveDamage = amount - armorDef;
    reduceHp(effectiveDamage);
    if (effectiveDamage <= getDef())
    {
        cout << "�÷��̾ " << " ���ҽ��ϴ�." << endl << endl;
    }
    else
    {
        cout << "�÷��̾ " << (effectiveDamage - getDef()) << " ���ظ� �Ծ����ϴ�." << endl << endl;
    }
}

// ���� ���� 
void Player::equipWeapon(int weaponAtk)
{
    this->weaponAtk = weaponAtk;

    cout << "���⸦ �����߽��ϴ�. ���ݷ��� " << weaponAtk << " �����մϴ�." << endl;
}
// �� ����
void Player::equipArmor(int armorDef)
{
    this->armorDef = armorDef;
    cout << "���� �����߽��ϴ�. ������ " << armorDef << " �����մϴ�." << endl;
}
// ������� ���ݷ� ��ȯ
int Player::getTotalAttackPower() const
{
    return atk + weaponAtk;
}
// ������� ���� ��ȯ
int Player::getTotalDefensePower() const
{
    return def + armorDef;
}
// �������
void Player::printInfo() const
{
    cout << name << " - ü��: " << hp << ", ���ݷ�: " << atk+ weaponAtk << ", ����: " << def + armorDef << endl;
}
