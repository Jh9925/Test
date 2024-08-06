#include "Aaron.h"

Aaron::Aaron(const string& n, const int hp, const int atk, const int def)
	:Character(n, hp, atk, def)
{

}

Aaron::~Aaron()
{
}

void Aaron::Move()
{
}

void Aaron::Attack()
{
	cout << Name << " : " << Atk << " 데미지를 준다. " << endl;
}

void Aaron::TakeDamage(int amout)
{
	Hp = Hp - amout;
	cout << Name << " : " << amout << "만큼 데미지를 입었다. " << endl;
}

void Aaron::PrintInfo()
{
	cout << Name << " - 체력: " << Hp << ", 공격력: " << Atk << ", 방어력: " << Def << endl;
}
