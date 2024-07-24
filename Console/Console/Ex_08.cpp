#include<iostream>

using namespace std;

// 삼항연산자
// 코드의 가독성을 높이고 간결한 조건을 표현하는데 유용하게 쓰임.
// 너무 복잡한경우는 분기로 처리하는것이 유리하다.( if ~ else )
int main()
{
	//int num1 = 2;
	//int num2 = 3;

	//int result;
	//// 참이면 앞 거짓이면 뒤
	//result = (num1 > num2) ? num1 : num2;

	//cout << result << endl;
	
	int a = 5;
	int b = 10;
	int c = 15;

	int result;
	int result1;

	if (a < b)
	{
		if (b < c)
		{
			result = a + b;
		}
		else
		{
			result = a - b;
		}

	}
	else
	{
		if (b > c)
		{
			result = a * b;

		}
		else
		{
			result = a / b;
		}

	}
	cout << " 결과 " << result << endl;

	// 1. 복잡한 조건문
	result1 = (a < b) ? ((b < c) ? a + b : a - b) : ((b > c) ? a * b : a / b);




}