#include "Unit.h"

Unit::Unit()
{
}

Unit::Unit(const string& n, const int h) 
	: name(n), hp(h)
{
	cout << " �θ�Ŭ���� ������ ȣ�� " << endl;
}

Unit::~Unit()
{
	cout << " �θ�Ŭ���� �Ҹ��� ȣ�� " << endl;
}

void Unit::TakeDamage(const int damage)
{
	
		hp - damage;

		cout << name << "�� " << damage << " ���� ����  ü�� : " << hp << endl;
	
}
