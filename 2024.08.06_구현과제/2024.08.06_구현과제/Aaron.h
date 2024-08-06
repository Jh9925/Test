#pragma once
#include "Character.h"
class Aaron : public Character
{
public:
	Aaron(const string& n, const int hp, const int atk, const int def);
	~Aaron();

	void Move();
	void Attack();
	void TakeDamage(int amout);
	void PrintInfo();
};

