#include "Bike.h"

Bike::Bike(const string& n) :Vehicle(n)
{
	cout << " 자식(Bike) 생성자 호출" << endl;
}

Bike::~Bike()
{
	cout << " 자식(Bike) 소멸자 호출" << endl;
}

void Bike::Move() const
{
	cout << name << " 자식(Bike)클래스의 자동차 함수 호출" << endl;
}
