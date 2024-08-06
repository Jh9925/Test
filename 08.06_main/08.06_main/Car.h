#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
public:

	Car(const string& n);
	~Car();

	void Move()const override;
	// override 오버라이딩 함수에 명시적으로 적는다. 없어도 노상관
};

