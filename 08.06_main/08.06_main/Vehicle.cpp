#include "Vehicle.h"


Vehicle::Vehicle(const std::string& n)
{
	cout << "�θ�Ŭ���� ������ ȣ��" << endl;
}

Vehicle::~Vehicle()
{
	cout << "�θ�Ŭ���� �Ҹ��� ȣ��" << endl;
}

void Vehicle::Move() const
{
	cout << name <<" �θ�Ŭ������ �Լ� ȣ��" << endl;
}
