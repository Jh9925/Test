#include<iostream>
#include<random>

using namespace std;

int main()
{
	// �޸��� Ʈ����Ʈ ����
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 10);
	
	int number[11] = {1, };

#pragma region 

	//srand(time(NULL));

	//int number[10];

	//int num1, num2, num3;

	//for (int i = 0; i < 10; i += 1)
	//{
	//	number[i] = i;
	//}
	//for (int i = 0; i < 10; i += 1)
	//{
	//	cout << "number[" << i << "] �ε���" << number[i] << endl;
	//	cout << endl;
	//	cout << endl;
	//}
	//cout << "=======================================" << endl;
	//for (int i = 0; i < 1000; i += 1)
	//{
	//	num1 = dist(gen);
	//	num2 = dist(gen);

	//	// ���� 
	//	num3 = number[num1];
	//	number[num1] = number[num2];
	//	number[num2] = num3;


	//}

	//for (int i = 0; i < 10; i += 1)
	//{
	//	cout << "number[" << i << "] �ε���" << number[i] << endl;
	//	cout << endl;
	//	

	//}

	// �޸��� Ʈ����Ʈ ���� ���� ����.
	//random_device rd;
	//mt19937 gen(rd());

	//
	//for (int i = 0; i < 5; i += 1)
	//{
	//	//cout << gen()<< " " << endl;
	//}
	//
	//
	//uniform_int_distribution<> dist(1, 6);

	//for (int i = 0; i < 10; i += 1)
	//{
	//	cout << dist(gen) << " " << endl;
	//}

#pragma endregion �迭 2
	int player, computer;
	int comNum[3] = {};
	int playerNum[3] = {};
	int ball = 0, strike = 0, out = 0;

	// �迭�� ���� �ֱ�.
	for (int i = 0; i < 10; i++ )
	{
		number[i+1] = i+1;
	}

	while (out < 3)
	{
		while (strike < 3)
		{
			
			for (int i = 0; i < 11; i += 1)
			{
				cout << number[i] << endl;
			}
			
			
			
			// ��ǻ�� 3�� ����
			for (int i = 1; i < 9; ++i)
			{
				int num1 = 0, num2 = 0;
				num2 = dist(gen);
				// ���� 
				num1 = number[i-1];
				number[i-1] = number[num2];
				number[num2] = num1;
				//cout << "���� " << num2 << endl;

			}

			for (int i = 0; i < 3; i++)
			{
				comNum[i] = number[i];
			}
			
			/*for (int i = 0; i < 3; i++)
			{
				comNum[i] = dist(gen);
			}*/
				
			// comNum[0] = dist(gen);
			// comNum[1] = dist(gen);
			// comNum[2] = dist(gen);
		
		//���Է� Ż�ⱸ
		EXIT_1:

			// �÷��̾� 3�� �Է� �ޱ�
			cout << " 1���� 10 ���� ���� 3�� �Է� :" << endl;
			for (int i = 0; i < 3; i++)
			{
				cin >> playerNum[i];
			}
			
			// cin >> playerNum[0];
			// cin >> playerNum[1];
			// cin >> playerNum[2];

			// ���� �� �� �Է½� ���Է� �ޱ�
			for (int i = 0; 0 < 3; i++)
			{
				if (playerNum[i] > 10 || playerNum[i] < 1)
					// ��              /    ��          ��	
					// ��              /    ��			��	
					// ��              /    ��			��	
					// ��              /    ��			��		
				{
					cout << endl;
					cout << "0���� 10 ���̿� ���ڸ� �Է��� �ּ���" << endl;
					cout << endl;
					goto EXIT_1;
				}
				else
				{
					break;
				}
				
			}

			// ��Ʈ����ũ ����
			for (int i = 0; i < 3; i += 1)
			{
				
				if (comNum[i] == playerNum[i])
				{
					strike++;
				}
			}


			// ������.
			if (comNum[0] == playerNum[1])
			{
				ball++;
			}

			if (comNum[0] == playerNum[2])
			{
				ball++;
			}

			if (comNum[1] == playerNum[2])
			{
				ball++;
			}

			if (comNum[1] == playerNum[0])
			{
				ball++;
			}

			if (comNum[2] == playerNum[0])
			{
				ball++;
			}

			if (comNum[2] == playerNum[1])
			{
				ball++;
			}

			for (int i = 0; i < 3; i++)
			{
				cout << "��ǻ�Ͱ� ���� ���� " << comNum[i] << endl;
				cout << "�÷��̾ ���� ���� " << playerNum[i] << endl;

			}
			cout << "��Ʈ����ũ : " << strike << endl;
			cout << "�� : " << ball << endl;
			cout << "�ƿ� : " << out << endl;

		}

		strike = 0, ball = 0;
		out++;
	
	}
}


/*
���� 1. 

- �迭�� ���� ���
- player VS computer

1. com �� ������ ����3���� �̴´�
2. �÷��̾�� ���ʴ�� ���� 3���� �Է��մϴ�.
3. �� �ܰ�
ex ) 5, 3, 1 �� 1, 2, 3 �ߺ��Ǵ� �� 1 ,3 �ڸ��� �ٸ��� ���ڰ� ������ �� �ڸ� ���� ��� ������ ��Ʈ����ũ
// ������
4. ���� ����
3�ƿ� �� ���� / 3��Ʈ����ũ�� 1�ƿ�

�����߻� ������ 1���� 10
������ 1���� 10 �� �ٸ� ���� �Է��ϰ� �Ǹ� �ٽ��Է��ϼ��� ������ ���ߵ�.

*/

//for (int i = 0; i < 500; i += 1)
			//{

			//	num1 = dist(gen);
			//	num2 = dist(gen);

			//	// ����	
			//	num3 = number[num1];
			//	number[num1] = number[num2];
			//	number[num2] = num3;
			//}

			//// ��ǻ�� 3�� �̱�.
			//for (int i = 0; i < 3; i += 1)
			//{
			//	comNum[i] = number[i];
			//}

