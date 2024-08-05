#include <iostream>

using namespace std;

#pragma region 
/*
�� static, extern

- static
������ ������ ����Ŭ(�����ֱ�)�� �����ϴµ� ���

���������� �ٴ� static �� �Լ� ���ο� �ٴ�static, Ŭ���� ���ο� �ɹ������� �ٴ� static �� �� �ٸ���.




-extern
�ܺκ���
���������� �������Ͽ��� ����ϱ� ����
�ٸ� ���Ͽ��� �ִ� ���������� ����Ҽ� ����

���ϵ鰣�� ������ �������� ���������� ���������.
�����ϰ� �������.




*/
#pragma endregion

// staticV.cpp �ȿ� �ִ� ��������

extern int num1;

void Count();


// static ���� �ֵ��� 0���� �ڵ� �ʱ�ȭ ���ش�/.
static int sNum;


//=====================================================================
// Ŭ���� ���� static?
// Ŭ���� ���ο��� static���� ����� ������ �ش�Ŭ������ ��� �ν��Ͻ����� ������.
// �� Ŭ������ �ν��Ͻ����� �������� ���Ǵ� ����
// �� Ŭ������ �ν��Ͻ� ���̵� ������ ������.


// ������
// Ŭ���� ���ο��� staric �� ����Ͽ� ����
// �� ������ �����Ϸ����� �ش� Ŭ������ ���� �ɹ������� ������ �˷���.

// �ܺο��� �ʱ�ȭ �ؾ���.

// :: �� ����ؼ� �ʱ�ȭ�� �ؾ���.


//=====================================================================



class Charactor
{
private:
	static int count;

	int num = 0;


public:
	
	Charactor()
	{
		count++;
	}
	
	// ���� �ɹ� �Լ�
	// ���� �ɹ� ������ ������ �Ѵٰų� Ŭ������ ���õ� � �������� �۾��� ������ ���.
	static void PrintCount()
	{
		cout << count << endl;
		// �����ɹ��Լ������� �Ϲ� �ɹ������� ȣ���Ҽ� ����.
		//cout << num << endl;
	}

};

int Charactor::count = 0;


int main()
{
	/*Count();
	Count();
	Count();*/


	Charactor::PrintCount();
	Charactor baba;
	Charactor::PrintCount();
	Charactor war;
	Charactor::PrintCount();


}

void Count()
{
	// �Լ��� �θ������� ���� ������ ����

	static int x = 0;
	int y = 0;
	x = x + 1;
	y = y + 1;

	/*
	���
	x�� : 1 y �� : 1
	x�� : 2 y �� : 1
	x�� : 3 y �� : 1
	*/

	cout << " x�� �� " << x << " y �� : " << y << endl;


}
