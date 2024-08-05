// 헤더파일의 중복정의를 막아줌.
#pragma once

// 고전적인 방법
//#ifndef UNIT_H
//#define UNIT_H
//
//
//#endif // UNIT_H

#include<iostream>
using namespace std;

// 부모 클래스
class Unit
{
protected:
	string name;
	int hp;

public:
	Unit();
	Unit(const string& n, const int h);
	~Unit();

	
	void TakeDamage(const int damage);


};

