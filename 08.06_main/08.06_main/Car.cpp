#include "Car.h"

Car::Car(const string& n)
	:Vehicle(n)
{
	cout << " 자식(Car) 생성자 호출" << endl;
}

Car::~Car()
{
	cout << " 자식(Car) 소멸자 호출" << endl;
}

void Car::Move() const
{
	cout << name << " 자식(Car)클래스의 자동차 함수 호출" << endl;
}
