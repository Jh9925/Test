#include<iostream>

using namespace std;

#pragma region
/*
- 배열  많은양의 데이터를 효율적으로 사용하기 위해 사용
- 배열에 저장된 데이터를 참조  예시 표의 번호
- 같은 자료형을 가진 연속된 메모리 공간으로 이루어진 자료구조.
- 이런 배열은 같은 자료형을 가진 변수들이 여러개 필요할때 사용
- 많은 양의 데이터를 처리할때 유용


*/


#pragma endregion

int main()
{

	// 배열 선언 방법
	// 자료형 / 배열이름 [10];
	//					[배열 길이];


#pragma region 배열 초기화
	/* 배열 초기화 방법

		1. 크기를 명시하고 초기화
		int arr [ 4 ] = { 1,2,3,4 };

		2. 배열의 크기를 생략하고 초기화
		int arr [  ] = { 1,2,3 };

		3. 크기를 명시적으로 지정하고 일부 요소만 초기화
		int arr [ 5 ] = { 1,2,3 };   나머지는 알아서 초기화

		4. 모든 요소를 초기화 하지 않음
		int arr [ 5 ] = { };
		*/
#pragma endregion

	
#pragma region  배열 1

	//	//int arr[4] = {1,2,3,4};

	//	//cout << "arr [0]번째 데이터 : " << arr[0] << endl;
	//	//cout << "arr [1]번째 데이터 : " << arr[1] << endl;
	//	//cout << "arr [2]번째 데이터 : " << arr[2] << endl;
	//	//cout << "arr [3]번째 데이터 : " << arr[3] << endl;

	//	//cout << "==============================================" << endl;

	//	//// 베열의 시작주소는 0번째인덱스의 주소와 같다.
	//	//cout << arr << endl;
	//	//cout << &arr[0] << endl;
	//	//cout << &arr[1] << endl;
	//	//cout << &arr[2] << endl;
	//	//cout << &arr[3] << endl;

	//	//cout << " for 문을 이용한 배열출력" << endl;
	//	//for (size_t i = 0; i < 4; i++)
	//	//{
	//	//	cout << arr[i] << endl;


	//	//}
	//	//int number[5];

	//	//for (size_t i = 0; i < 5; i++)
	//	//{
	//	//	number[i] = i + 1;

	//	//}

	//	// 만약 10명의 학생 성적을 입력 -> 입력한 데이터를 배열에 저장 -> 총점과 평균 구하기

	//int point[10];
	//int all = 0;
	//int avg = 0;

	//for (int i = 0; i < 10; i += 1)
	//{
	//	//cin >> point[i];
	//	//cout << endl;
	//	//// cout << point[i] << endl;
	//	//all += point[i]; 
	//	//cout << "총점 " << all;
	//	//cout << endl;
	//	//avg = all / 10;
	//	//cout << " 평균 " << avg;
	//	//cout << endl;
	//	cout << " 내가 입력한 학생 점수?" << endl;
	//	cout << i + 1 << "번째 학생 :";
	//	cin >> point[i];
	//	all += point[i];

	//}

	//cout << "총점 " << all;
	//cout << endl;
	//avg = all / 10;
	//cout << " 평균 " << avg;
	//cout << endl;


	//// 입력 -> 처리 -> 결과


#pragma endregion



	int arr1[4] [3];

	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;
	 
	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;

	arr1[2][0] = 7;
	arr1[2][1] = 8;
	arr1[2][2] = 9;

	arr1[3][0] = 10;
	arr1[3][1] = 11;
	arr1[3][2] = 12;


	cout << endl;
	cout << endl;

	cout << " 0 행의 출력 결과 " << &arr1[0][0] << ", " << &arr1[0][1] << ", " << &arr1[0][2] << endl;
	cout << " 1 행의 출력 결과 " << &arr1[1][0] << ", " << &arr1[1][1] << ", " << &arr1[1][2] << endl;
	cout << " 2 행의 출력 결과 " << arr1[2][0] << ", " << arr1[2][1] << ", " << arr1[2][2] << endl;
	cout << " 3 행의 출력 결과 " << arr1[3][0] << ", " << arr1[3][1] << ", " << arr1[3][2] << endl;


	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << i << "행의 출력 결과 " << arr1[i][j] << endl;


		}
	}




	return 0;
}

/*
7_23 과제

프로그래머스 2 3단계까지

1. 지금부터 4교시 종료까지

배열을 활용하기

- 인풋을 받아서 입력받은 숫자의 구구단 출력후 계산 결과를 저장하고 출력하기.

//과제 1. 구구단 구현

	// for 사용
	//cout << " for 사용 " << endl;
	/*for (i = 2 ; i < 10; i++)
	{


		for (j = 1; j < 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;

		}
		cout << '\n';
	}



2. 다음 표에서 가로합과 세로합 모든수의 합을 구해라.
	랜덤하게 뽑아서 해보자. 난수발생 시켜서

	
*/



