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
	cout << "������ ����" << endl;
}

void Lupy::Attack()
{
	cout << Name << " : " << Atk << " ���� ��! " << endl;
}

void Lupy::TakeDamage(int amout)
{
	Hp = Hp - amout;
	cout << Name << " : " << amout << "��ŭ �������� �Ծ���. " << endl;
}

void Lupy::PrintInfo()
{
	cout << Name << " - ü��: " << Hp << ", ���ݷ�: " << Atk << ", ����: " << Def << endl;
}



