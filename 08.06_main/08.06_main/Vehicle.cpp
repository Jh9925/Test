#include "Vehicle.h"


Vehicle::Vehicle(const std::string& n)
{
	cout << "부모클래스 생성자 호출" << endl;
}

Vehicle::~Vehicle()
{
	cout << "부모클래스 소멸자 호출" << endl;
}

void Vehicle::Move() const
{
	cout << name <<" 부모클래스의 함수 호출" << endl;
}
