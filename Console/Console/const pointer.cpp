#include<iostream>

using namespace std;





int main()
{
	// ������
	int a = 0;
	int* p_int = &a;
	
	// �����ʹ� ����Ű�� ������ ���� �ٲܼ��ְ�, ����Ű�� �ּҰ��� �ٲܼ��� �ִ�.
	*p_int = 1;
	p_int = nullptr;


	// const ������
	int b;
	const int* p_constint = &b;

	// *p_constint = 100;
	p_constint = &a;

	//==========================

	// ������ const
	int* const p_intconst = &a;
	
	*p_intconst = 100;
	//p_intconst = &a;


	// �Ѵ� ����.
	const int* const p_const_int_const = nullptr;




}