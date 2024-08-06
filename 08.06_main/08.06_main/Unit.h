#pragma once
#include<iostream>
using namespace std;
// 순수가상함수
// - 클래스 내에서 선언만하고 구현하지 않음.
// 순수가상함수를 포함하는 클래스는 추상클래스라고 부름
// 특정함수의 구현을 강요
// 다형성 지원
// 추상클래스 : 인스턴스화 시킬수 없음.

// 기본 인터페이스나 기본동작을 정의하는데 사용.
// 특정 함수들이 자식클래스에 의해서 구현되도록 강제함.

// 추상클래스
class Unit
{
protected:
	string name;
	int hp;
public:
	Unit(const string& n, const int h);
	virtual~Unit();

public:
	virtual void Attack()const = 0;
	virtual void TakeDamage(int damage) = 0;

};

