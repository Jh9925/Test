#include<iostream>

using namespace std;

// ���׿�����
// �ڵ��� �������� ���̰� ������ ������ ǥ���ϴµ� �����ϰ� ����.
// �ʹ� �����Ѱ��� �б�� ó���ϴ°��� �����ϴ�.( if ~ else )
int main()
{
	//int num1 = 2;
	//int num2 = 3;

	//int result;
	//// ���̸� �� �����̸� ��
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
	cout << " ��� " << result << endl;

	// 1. ������ ���ǹ�
	result1 = (a < b) ? ((b < c) ? a + b : a - b) : ((b > c) ? a * b : a / b);




}