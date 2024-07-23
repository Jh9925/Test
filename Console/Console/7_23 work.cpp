#include <iostream>
#include<time.h>
#include<Windows.h>
#include<random>


using namespace std;



// 인풋을 받아서 입력받은 숫자의 구구단 출력후 계산 결과를 저장하고 출력하기.

void main()
{



	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 100);


	srand((unsigned int)time(NULL));


	int guNum;
	int arr1[10];
	int i, sub = 0;
	int work_1, work_2;
	int arr2[5][5];
	int ran;
	int ramram1;

	int sub_V[5] = {};
	int sub_H[5] = {};


	//work_1();

	//work_2();
	
	for (int i = 0; i < 5; i += 1)
	{
		// ran = rand() % 100;
		// cin >> ran >> arr2[i][0];

		for (int j = 0; j < 5; j += 1)
		{

			ran = dist(gen);
			arr2[i][j] = ran;
			sub += ran;

		}


	}
	// 배열사용 정리
	
	//가로합
	for (int i = 0, k=0; i < 5; i += 1)
	{
		for (int j = 0; j < 5; j++)
		{
			k = arr2[i][j];
			sub_H[i] += k;
			
		}
		
	}

	// 세로합
	for (int i = 0, k = 0; i < 5; i += 1)
	{
		for (int j = 0; j < 5; j++)
		{
			k = arr2[i][j];
			sub_V[j] += k;

		}

	}



	for (int i = 0; i < 5; i += 1)
	{
		for (int j = 0; j < 5; j += 1)
		{

			//cout << i <<"//"<< j << "||" << arr2[i][j] << endl;
			

		}
		cout << i << " 가로합" << sub_H[i] << endl;
		cout << i << " 세로합" << sub_V[i] << endl;
		cout << endl;
		cout << endl;

	}

	
	//cout << "가로 합계 ? " << sub << endl;
	//cout << "세로 합계 ? " << sub << endl;

	cout << endl;
	cout << " 합계  " << sub << endl;
	
	cout << endl;






	
}



//int work_1()
//{
//	std::cout << " 출력하고 싶은 구구단? " << endl;
//	cin >> guNum;
//
//	switch (guNum)
//	{
//	case 1:
//		for (int i = 1, j = 0; i < 10; i+=1)
//		{
//			j = 1 * i;
//			cout << 1 << " * " << i << " = " << j << endl;
//			
//			arr1[i] += j;
//			sub += arr1[i];
//			cout << '\n';
//		}
//
//		break;
//	case 2:
//		for (int i = 1,  j = 0; i < 10; i += 1)
//		{
//			j = 2 * i;
//			cout << 2 << " * " << i << " = " << j << endl;
//
//			arr1[i] += j;
//			sub += arr1[i];
//			cout << '\n';
//		}
//		break;
//	case 3:
//		for (int i = 1,  j = 0; i < 10; i += 1)
//		{
//			j = 3 * i;
//			cout << 3 << " * " << i << " = " << j << endl;
//
//			arr1[i] += j;
//			sub += arr1[i];
//			cout << '\n';
//		}
//
//		break;
//	case 4:
//		for (int i = 1,  j = 0; i < 10; i += 1)
//		{
//			j = 4 * i;
//			cout << 4 << " * " << i << " = " << j << endl;
//
//			arr1[i] += j;
//			sub += arr1[i];
//			cout << '\n';
//		}
//		break;
//	case 5:
//		for (int i = 1,  j = 0; i < 10; i += 1)
//		{
//			j = 5 * i;
//			cout << 5 << " * " << i << " = " << j << endl;
//
//			arr1[i] += j;
//			sub += arr1[i];
//			cout << '\n';
//		}
//		break;
//	case 6:
//		for (int i = 6,  j = 0; i < 10; i += 1)
//		{
//			j = 1 * i;
//			cout << 6 << " * " << i << " = " << j << endl;
//
//			arr1[i] += j;
//			sub += arr1[i];
//			cout << '\n';
//		}
//		break;
//	case 7:
//		for (int i = 7,  j = 0; i < 10; i += 1)
//		{
//			j = 1 * i;
//			cout << 7 << " * " << i << " = " << j << endl;
//
//			arr1[i] += j;
//			sub += arr1[i];
//			cout << '\n';
//		}
//		break;
//	case 8:
//		for (int i = 1,  j = 0; i < 10; i += 1)
//		{
//			j = 8 * i;
//			cout << 8 << " * " << i << " = " << j << endl;
//
//			arr1[i] += j;
//			sub += arr1[i];
//			cout << '\n';
//		}
//
//		break;
//	case 9:
//		for (int i = 1,  j = 0; i < 10; i += 1)
//		{
//			j = 9 * i;
//			cout << 9 << " * " << i << " = " << j << endl;
//			
//			arr1[i] += j;
//			sub += arr1[i];
//			cout << '\n';
//		}
//
//		break;
//
//
//	default:
//		break;
//
//
//
//
//		
//	}
//
//	/*for (size_t i = 0; i < 10; i++)
//	{
//		cout << arr1[i] << endl;
//	}*/
//
//	cout << "합계" << sub << endl;
//
//
//	return 0;
//}

//다음 표에서 가로합과 세로합 모든수의 합을 구해라.
//랜덤하게 뽑아서 해보자.난수발생 시켜서




//int work_2()
//{
//	for (int i=0; i<5; i+=1)
//	{
//		// ran = rand() % 100;
//		// cin >> ran >> arr2[i][0];
//
//			for (int j = 0; j < 5; j += 1)
//			{
//
//				ran = rand() % 100;
//				ran = arr2[i][j];
//			}
//
//
//	}
//
//	for (int i = 0; i < 5; i += 1)
//	{
//		for (int j = 0; j < 5; j += 1)
//		{
//
//			cout << i << j << arr2[i][j] << endl;
//		}
//
//
//	}
//
//	
//
//
//
//
//	return 0;
//}