#include<iostream>
using namespace std;


/*
�� ��������� �ڷ���

- ����ڰ� �ʿ��� ���ؼ� ���Ǹ� ���� ����.
�� ����ü, ����ü, ������, Ŭ������ �ִ�.


*/

#pragma region C_enum
/*
1. ������
 - ���õ� ������� �ϳ��� �׷����� ���´�. 
 - �ڵ��� �������� ���̰� �ǹ��ִ� �̸��� �ο��Ҽ� �ִ�.
 - �Ͻ��� ����ȯ ����

 */
 // �⺻ ���� ��� �ߺ��ȵ�...
enum Color { Red, Green, White };
//            0     1      2

// ������� ���� �Ҵ�.
enum Direction { Left, Right =2 , Up, Down};
// ���������� �Ҵ����� ������ 0���� �ڵ����� �Ҵ�.
// �����Ҵ��ϴ� ��� ������ ������ +1�� �ڵ� �Ҵ�
#pragma endregion







int main()
{
	
	Color color = Red;

	if (color)
	{
		cout << " ���� " << endl;

	}
	else if (color == Green)
	{
		cout << " ��� " << endl;
	}


	Direction key = Left;

	switch (key)
	{
	case Left:
		cout << " �������� �̵� " << endl;
		break;

	case Right:
		cout << " ���������� �̵� " << endl;
		break;

	case Up:
		break;

	case Down:
		break;

	default:
		break;
	}

	// �ȴ�.!
	int red = Red;





}