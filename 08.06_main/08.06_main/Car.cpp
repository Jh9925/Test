#include "Car.h"

Car::Car(const string& n)
	:Vehicle(n)
{
	cout << " �ڽ�(Car) ������ ȣ��" << endl;
}

Car::~Car()
{
	cout << " �ڽ�(Car) �Ҹ��� ȣ��" << endl;
}

void Car::Move() const
{
	cout << name << " �ڽ�(Car)Ŭ������ �ڵ��� �Լ� ȣ��" << endl;
}
