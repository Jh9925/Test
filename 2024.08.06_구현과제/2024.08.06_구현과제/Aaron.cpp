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
	cout << Name << " : " << Atk << " �������� �ش�. " << endl;
}

void Aaron::TakeDamage(int amout)
{
	Hp = Hp - amout;
	cout << Name << " : " << amout << "��ŭ �������� �Ծ���. " << endl;
}

void Aaron::PrintInfo()
{
	cout << Name << " - ü��: " << Hp << ", ���ݷ�: " << Atk << ", ����: " << Def << endl;
}
