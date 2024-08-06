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
	cout << "������ ����" << endl;
}

void Zoro::Attack()
{
	cout << Name << " : " << Atk << " ������ ����!!! " << endl;
}


void Zoro::TakeDamage(int amout)
{
	Hp = Hp - amout;
	cout << Name << " : " << amout << "��ŭ �������� �Ծ���. " << endl;
}

void Zoro::PrintInfo()
{
	cout << Name << " - ü��: " << Hp << ", ���ݷ�: " << Atk << ", ����: " << Def << endl;
}
