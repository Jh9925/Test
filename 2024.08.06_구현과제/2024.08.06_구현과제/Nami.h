#pragma once
#include "Character.h"
class Nami : public Character
{
public:
	Nami(const string& n, const int hp, const int atk, const int def);
	~Nami();

	void Move();
	void Attack();
	void TakeDamage(int amout);
	void PrintInfo();
};
