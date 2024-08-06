#pragma once
#include "Unit.h"

class Player : public Unit
{
public:
	Player(const string& n, const int h);

	~Player();

	void Attack()const override;
	void TakeDamage(int damage) override;

};

