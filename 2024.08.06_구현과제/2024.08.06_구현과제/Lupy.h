#pragma once
#include "Character.h"

class Lupy : public Character
{
public:
	Lupy(const string& n, const int hp, const int atk, const int def);
	~Lupy();

	void Move() override;;
	void Attack() override;;
	void TakeDamage(int amout);
	void PrintInfo() override;;
	
};

