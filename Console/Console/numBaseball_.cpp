#include<iostream>
#include<random>

using namespace std;

int main()
{
	srand(time(NULL));

	int number[10];
	int comNumber[3];
	int playerNum[3] = {};
	int dest, sour, temp, i =0;
	int ball =0 ;
	int strike = 0;

	for (size_t i = 0; i < 10; i++)
	{
		number[i] = i;

	}
	for (size_t i = 0; i < 500; i++)
	{
		dest = rand() %10;
		sour = rand() % 10;

		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;

	}

	for (size_t i = 0; i < 3; i++)
	{
		comNumber[i] = number[i];
	}

	cout <<  " ��ǻ�Ͱ� �� ���� : " << endl;
	for (size_t i = 0; i < 3; i++)
	{
		cout <<"��ǻ�� ���� " << comNumber[i] << endl;
	}

	// ��Ƽ�� ����ؼ� �������� �� ���� while
	while (true)
	{
		cout << " 0���� 9���� ���� �Է� : " << endl;
		while (true)
		{
			if (playerNum[i] > 10 || playerNum[i] < 1)
			{

				for (size_t i = 0; i < 3; i++)
				{
					cout << i + 1 << " ���� ���� �Է� " << endl;
					cin >> playerNum[i];
					
				}
			}
			else
			{
				break;
			}
		}
		//�ʱ�ȭ
		ball = 0;
		strike = 0;
		//��
		for (int i = 0; i < 3; i++)
		{
			// �÷��̾�
			for (int j = 0; j < 3; j++)
			{
				//��ǻ�� ���ڿ� ���� �Է��� ���ڰ� ����?
				if (comNumber[i] == playerNum[j]);
				{

					if (i == j)
					{
						strike++;
					}
					else
					{
						ball++;
					}

				}

			}
			


		}//for

		cout << "��Ʈ����ũ : " << strike << endl;
		cout << "�� : " << ball << endl;

		if (strike == 3)
		{
			break;
		}


	}// while




}