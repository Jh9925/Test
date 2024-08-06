#pragma once
#include "Character.h"

class Zoro : public Character
{
public:
	Zoro(const string& n, const int hp, const int atk, const int def);
	~Zoro();

	void Move();
	void Attack();
	void TakeDamage(int amout);
	void PrintInfo();
};
