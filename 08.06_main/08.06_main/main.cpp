#include<iostream>

using namespace std;

#pragma region �����Լ�
/*

�� ������
- ��ü�� �Ӽ��̳� ����� ��Ȳ�� ���� �������� ���¸� ������ �ִ� ����

�� �����Լ�
VirtualFunction
��Ӱ��迡 �ִ� Ŭ�������� �θ� Ŭ������ �Լ��� �ڽ� Ŭ�������� ������(�������̵�)
�ϰ� �θ�Ŭ������ �����ͳ� ������ ���� �ڽ�Ŭ������ �Լ� ȣ��

// �����ε� vs �������̵�?

�������ε��� �������ε�

*/

#pragma endregion

#include "Bike.h"
#include "Car.h"
#include "Vehicle.h"


// �������ε�.
int main()
{
	// �θ��� �����ͷ� 
	Vehicle* v;
	// �ڽĿ� ����
	v = new Car(" B M W ");
	v->Move();
	
	delete v;

	v = new Bike(" ������� ");
	v->Move();
		
	delete v;

}