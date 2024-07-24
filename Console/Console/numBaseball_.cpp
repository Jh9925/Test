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

	cout <<  " 컴퓨터가 낸 숫자 : " << endl;
	for (size_t i = 0; i < 3; i++)
	{
		cout <<"컴퓨터 숫자 " << comNumber[i] << endl;
	}

	// 컨티뉴 사용해서 범위외의 값 로직 while
	while (true)
	{
		cout << " 0에서 9까지 숫자 입력 : " << endl;
		while (true)
		{
			if (playerNum[i] > 10 || playerNum[i] < 1)
			{

				for (size_t i = 0; i < 3; i++)
				{
					cout << i + 1 << " 번쨰 숫자 입력 " << endl;
					cin >> playerNum[i];
					
				}
			}
			else
			{
				break;
			}
		}
		//초기화
		ball = 0;
		strike = 0;
		//컴
		for (int i = 0; i < 3; i++)
		{
			// 플레이어
			for (int j = 0; j < 3; j++)
			{
				//컴퓨터 숫자와 내가 입력한 숫자가 같냐?
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

		cout << "스트라이크 : " << strike << endl;
		cout << "볼 : " << ball << endl;

		if (strike == 3)
		{
			break;
		}


	}// while




}