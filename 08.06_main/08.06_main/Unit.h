#pragma once
#include<iostream>
using namespace std;
// ���������Լ�
// - Ŭ���� ������ �����ϰ� �������� ����.
// ���������Լ��� �����ϴ� Ŭ������ �߻�Ŭ������� �θ�
// Ư���Լ��� ������ ����
// ������ ����
// �߻�Ŭ���� : �ν��Ͻ�ȭ ��ų�� ����.

// �⺻ �������̽��� �⺻������ �����ϴµ� ���.
// Ư�� �Լ����� �ڽ�Ŭ������ ���ؼ� �����ǵ��� ������.

// �߻�Ŭ����
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

