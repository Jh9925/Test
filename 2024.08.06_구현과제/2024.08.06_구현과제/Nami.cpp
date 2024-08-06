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
	cout << "������ ����" << endl;
}

void Nami::Attack()
{
	cout << Name  << " : " << Atk << " ũ���� ��Ʈ! " << endl;
}


void Nami::TakeDamage(int amout)
{
	Hp = Hp - amout;
	cout << Name << " : " << amout << "��ŭ �������� �Ծ���. " << endl;
}

void Nami::PrintInfo()
{
	cout << Name << " - ü��: " << Hp << ", ���ݷ�: " << Atk << ", ����: " << Def << endl;
}
