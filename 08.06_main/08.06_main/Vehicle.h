#pragma once

#include<iostream>
using namespace std;
// 부모 클래스
class Vehicle
{
protected:
	std::string name;

public:
	Vehicle(const std::string& n);
	// 소멸자에 virtual 붙이는 이유
	// 안쓰면 기본 클래스의 소멸자만 호출됨.  자식클래스는 호출안됨.
	// 만약 자식 클래스에서 동적으로 할당한것이 있다면 소멸해야하니 자식클래스도 호출이 되야됨.
	// 다형성을 활용할때 객체가 올바르게 소멸되도록 보장.
	// virtual 안쓰면 기본 클래스의 소멸자만 호출됨.  자식클래스는 호출안됨.
	virtual~Vehicle();


	virtual void Move()const;
	// 순수가상함수
	virtual void Move()const = 0;

};

