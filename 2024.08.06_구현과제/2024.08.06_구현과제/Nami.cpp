#include "Nami.h"

Nami::Nami(const string& n, const int hp, const int atk, const int def)
	:Character(n, hp, atk, def)
{
}

Nami::~Nami()
{
}

void Nami::Move()
{
	cout << "앞으로 가기" << endl;
}

void Nami::Attack()
{
	cout << Name  << " : " << Atk << " 크리마 텍트! " << endl;
}


void Nami::TakeDamage(int amout)
{
	Hp = Hp - amout;
	cout << Name << " : " << amout << "만큼 데미지를 입었다. " << endl;
}

void Nami::PrintInfo()
{
	cout << Name << " - 체력: " << Hp << ", 공격력: " << Atk << ", 방어력: " << Def << endl;
}
