#pragma once

#include<iostream>
using namespace std;
// �θ� Ŭ����
class Vehicle
{
protected:
	std::string name;

public:
	Vehicle(const std::string& n);
	// �Ҹ��ڿ� virtual ���̴� ����
	// �Ⱦ��� �⺻ Ŭ������ �Ҹ��ڸ� ȣ���.  �ڽ�Ŭ������ ȣ��ȵ�.
	// ���� �ڽ� Ŭ�������� �������� �Ҵ��Ѱ��� �ִٸ� �Ҹ��ؾ��ϴ� �ڽ�Ŭ������ ȣ���� �Ǿߵ�.
	// �������� Ȱ���Ҷ� ��ü�� �ùٸ��� �Ҹ�ǵ��� ����.
	// virtual �Ⱦ��� �⺻ Ŭ������ �Ҹ��ڸ� ȣ���.  �ڽ�Ŭ������ ȣ��ȵ�.
	virtual~Vehicle();


	virtual void Move()const;
	// ���������Լ�
	virtual void Move()const = 0;

};

