#include<iostream>
#include<random>

using namespace std;

int main()
{
	// 메르센 트위스트 난수
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
	//	cout << "number[" << i << "] 인덱스" << number[i] << endl;
	//	cout << endl;
	//	cout << endl;
	//}
	//cout << "=======================================" << endl;
	//for (int i = 0; i < 1000; i += 1)
	//{
	//	num1 = dist(gen);
	//	num2 = dist(gen);

	//	// 셔플 
	//	num3 = number[num1];
	//	number[num1] = number[num2];
	//	number[num2] = num3;


	//}

	//for (int i = 0; i < 10; i += 1)
	//{
	//	cout << "number[" << i << "] 인덱스" << number[i] << endl;
	//	cout << endl;
	//	

	//}

	// 메르센 트위스트 난수 쓰자 권장.
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

#pragma endregion 배열 2
	int player, computer;
	int comNum[3] = {};
	int playerNum[3] = {};
	int ball = 0, strike = 0, out = 0;

	// 배열에 숫자 넣기.
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
			
			
			
			// 컴퓨터 3개 랜덤
			for (int i = 1; i < 9; ++i)
			{
				int num1 = 0, num2 = 0;
				num2 = dist(gen);
				// 셔플 
				num1 = number[i-1];
				number[i-1] = number[num2];
				number[num2] = num1;
				//cout << "난수 " << num2 << endl;

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
		
		//재입력 탈출구
		EXIT_1:

			// 플레이어 3개 입력 받기
			cout << " 1부터 10 까지 숫자 3개 입력 :" << endl;
			for (int i = 0; i < 3; i++)
			{
				cin >> playerNum[i];
			}
			
			// cin >> playerNum[0];
			// cin >> playerNum[1];
			// cin >> playerNum[2];

			// 범위 외 값 입력시 재입력 받기
			for (int i = 0; 0 < 3; i++)
			{
				if (playerNum[i] > 10 || playerNum[i] < 1)
					// 참              /    참          참	
					// 참              /    거			참	
					// 거              /    참			참	
					// 거              /    거			거		
				{
					cout << endl;
					cout << "0부터 10 사이에 숫자를 입력해 주세요" << endl;
					cout << endl;
					goto EXIT_1;
				}
				else
				{
					break;
				}
				
			}

			// 스트라이크 판정
			for (int i = 0; i < 3; i += 1)
			{
				
				if (comNum[i] == playerNum[i])
				{
					strike++;
				}
			}


			// 볼판정.
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
				cout << "컴퓨터가 뽑은 숫자 " << comNum[i] << endl;
				cout << "플레이어가 뽑은 숫자 " << playerNum[i] << endl;

			}
			cout << "스트라이크 : " << strike << endl;
			cout << "볼 : " << ball << endl;
			cout << "아웃 : " << out << endl;

		}

		strike = 0, ball = 0;
		out++;
	
	}
}


/*
과제 1. 

- 배열과 셔플 사용
- player VS computer

1. com 은 임의의 숫자3개를 뽑는다
2. 플레이어는 차례대로 숫자 3개를 입력합니다.
3. 비교 단계
ex ) 5, 3, 1 나 1, 2, 3 중복되는 수 1 ,3 자리는 다르고 숫자가 같으면 볼 자리 숫자 모두 같으면 스트라이크
// 눈속임
4. 종료 조건
3아웃 시 종료 / 3스트라이크시 1아웃

난수발생 범위는 1에서 10
유저가 1에서 10 외 다른 수를 입력하게 되면 다시입력하세요 문구가 떠야됨.

*/

//for (int i = 0; i < 500; i += 1)
			//{

			//	num1 = dist(gen);
			//	num2 = dist(gen);

			//	// 셔플	
			//	num3 = number[num1];
			//	number[num1] = number[num2];
			//	number[num2] = num3;
			//}

			//// 컴퓨터 3개 뽑기.
			//for (int i = 0; i < 3; i += 1)
			//{
			//	comNum[i] = number[i];
			//}

