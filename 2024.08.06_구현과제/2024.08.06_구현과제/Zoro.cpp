#include "Zoro.h"

Zoro::Zoro(const string& n, const int hp, const int atk, const int def)
	:Character(n, hp, atk, def)
{

}

Zoro::~Zoro()
{
}

void Zoro::Move()
{
	cout << "앞으로 가기" << endl;
}

void Zoro::Attack()
{
	cout << Name << " : " << Atk << " 도깨비 참수!!! " << endl;
}


void Zoro::TakeDamage(int amout)
{
	Hp = Hp - amout;
	cout << Name << " : " << amout << "만큼 데미지를 입었다. " << endl;
}

void Zoro::PrintInfo()
{
	cout << Name << " - 체력: " << Hp << ", 공격력: " << Atk << ", 방어력: " << Def << endl;
}
