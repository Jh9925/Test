// ��������� �ߺ����Ǹ� ������.
#pragma once

// �������� ���
//#ifndef UNIT_H
//#define UNIT_H
//
//
//#endif // UNIT_H

#include<iostream>
using namespace std;

// �θ� Ŭ����
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

