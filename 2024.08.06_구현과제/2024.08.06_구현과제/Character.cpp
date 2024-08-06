#include "Character.h"

Character::Character(const string& n, const int hp, const int atk, const int def)
	: Name(n), Hp(hp), Atk(atk), Def(def)
{
}

Character::~Character()
{
}



int Character::getHp() const
{
	return Hp;
}

int Character::getAtk() const
{
	return Atk;
}

int Character::getDef() const
{
	return Def;
}

string Character::getName() const
{
	return Name;
}
