// 1

#include<iostream>
#include<time.h>
#include<Windows.h>
// Sleep(1000) : 1�ʵ��� �����.


// 2
using namespace std;

// 3

// �����ΰ��� �����Ҷ��� ...

/*
1. �ȿ��� ����� �̸� ����� �� �ְ� ���縦 �صд�.
	�� ���α׷��Ӵ� ������ ������ �ǰ� ����� ��ǻ�Ͱ� �����Ѵ�.

2. ������ �������� �ش�.

3. ���� ������� �ϴ� ��ɿ� ���� �������� ������ ���´�.

4. �ʿ��� �������� �����.

5. ������ ������ �ʿ��ϴٸ� �ʱ�ȭ�� �����Ѵ�.

6. ����� ������ ���� �ݺ��� ������.

7. �ݺ��� ���ư��� �����ȿ��� ���α׷��� �����Ҽ��ִ� ����� �����Ѵ�.

8. �� ����?!!
*/


void main()
{
	//5
	srand(time(NULL));	
	
	int comNumber;
	int myNumber;

	comNumber = rand() % 100 + 1;
	//cout << "ġƮ : " << comNumber << endl;

	// ���� �ݺ�
	while (true)
	{
		cout << " ���ٿ� ����: ���ڸ� �Է��Ͻÿ�. �ִ� 100" << endl;
		cin >> myNumber;
		Sleep(1000);

		if (myNumber == comNumber)
		{

			cout << " ã�Ҵ�. " << endl;
			Sleep(3000);
			system("cls"); //Ŭ���ý��� ȭ�� �����
			//break;


		}
		else if (myNumber > comNumber)
		{
			cout << " �ٿ� " << endl;
		}

		else
		{
			cout << " �� " << endl;
		}
		cout << endl;

	}


}


//4



