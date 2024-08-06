#include "Lupy.h"

Lupy::Lupy(const string& n, const int hp, const int atk, const int def)
	:Character(n,hp,atk,def)
{
}

Lupy::~Lupy()
{
}

void Lupy::Move()
{
	cout << "앞으로 가기" << endl;
}

void Lupy::Attack()
{
	cout << Name << " : " << Atk << " 고무고무 총! " << endl;
}

void Lupy::TakeDamage(int amout)
{
	Hp = Hp - amout;
	cout << Name << " : " << amout << "만큼 데미지를 입었다. " << endl;
}

void Lupy::PrintInfo()
{
	cout << Name << " - 체력: " << Hp << ", 공격력: " << Atk << ", 방어력: " << Def << endl;
}



