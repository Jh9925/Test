#include<iostream>

using namespace std;





int main()
{
	// 포인터
	int a = 0;
	int* p_int = &a;
	
	// 포인터는 가리키는 변수의 값을 바꿀수있고, 가리키는 주소값을 바꿀수도 있다.
	*p_int = 1;
	p_int = nullptr;


	// const 포인터
	int b;
	const int* p_constint = &b;

	// *p_constint = 100;
	p_constint = &a;

	//==========================

	// 포인터 const
	int* const p_intconst = &a;
	
	*p_intconst = 100;
	//p_intconst = &a;


	// 둘다 쓰기.
	const int* const p_const_int_const = nullptr;




}