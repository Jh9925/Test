#include "Unit.h"

Unit::Unit()
{
}

Unit::Unit(const string& n, const int h) 
	: name(n), hp(h)
{
	cout << " 부모클래스 생성자 호출 " << endl;
}

Unit::~Unit()
{
	cout << " 부모클래스 소멸자 호출 " << endl;
}

void Unit::TakeDamage(const int damage)
{
	
		hp - damage;

		cout << name << "가 " << damage << " 피해 받음  체력 : " << hp << endl;
	
}
