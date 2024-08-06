#pragma once

#include<iostream>
using namespace std;


class Character
{
protected:
	string Name;
	int Hp;
	int Atk;
	int Def;

public:
	Character(const string& n, const int hp, const int atk, const int def);
	virtual~Character();

	virtual void Move() = 0;
	virtual void Attack() = 0;
	virtual void TakeDamage(int amout) = 0;
	virtual void PrintInfo() = 0;
	

	// Getter methods
	int getHp() const;
	int getAtk() const;
	int getDef() const;
	string getName() const;



};

