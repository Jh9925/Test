#include<string>
#include <iostream>
#include<algorithm>
#include<functional>

using namespace std;


// 구구단 만들자.

void main() {
	
	int i;
	int j;
	int ii;
	int jj;

	
	j = 1;
	jj = 1;
	i = 2;
	ii = 2;

	
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
	}*/

	// while 사용  j 가 1로 초기화가 필요했다!!!
	//cout << " while 사용 " << endl;
	/*while (i < 10)
	{

		while (j < 10)
		{
			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		}
		
		i++;
		j = 1;

	}*/

	//do ~ while 사용 
	
	/*do 
	{		
		do 
		{
			cout << ii << " * " << jj << " = " << ii * jj << endl;
			j++;
		} while (jj < 10);
		
		ii++;
		jj = 1;
		
	} while (ii < 10);*/


	int plus, miuns;
	int num11, num22;

	//과제 2. 연산자 활용
	// 
	// 두개의 정수를 받아서 덧샘 뺄샘

	/*cout << "두개의 정수입력" << endl;
	cin >> num11;
	cin >> num22;

	cout << "두 정수의 덧샘 결과: " << num11 + num22 << endl;
	cout << "두 정수의 뺄샘 결과: " << num11 - num22 << endl;

	cout << endl;
	cout << endl;*/

	// 3개의 정수를 받아서 다음의 연산결과 출력

	int num1, num2, num3;
	int reslut1;
	/*
	cout << "3개의 정수입력" << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;

	reslut1 = (num1 + num2) * (num3 + num1) % num1;

	cout << "연산결과 : " << reslut1 << endl;*/

	// 입력받은 두 정수를 나누었을때 
	// 얻게되는 몫과 나머지를 출력하는 프로그램

	/*int num4, num5;
	cout << "두개의 정수입력" << endl;
	cin >> num4;
	cin >> num5;
	cout << "두 정수의 나눗샘 몫 : " << num4 / num5 << endl;
	cout << "나머지 : " << num4 % num5 << endl;
	cout << '\n';*/

	//과제 3. 반복문 출력
	// - 1부터 20까지 출력하시오. (짝수만)
	// - 20에서 1까지 출력하시오.
	
	// for / while / do ~ while문 모두 사용
	 
	// for문 사용
	/*for (int i=1; i <= 10; i++)
	{
		cout << i*2 << endl;
	}
	
	for (int i = 20; i > 0; i--)
	{
		cout << i << endl;
	}*/

	
	// while문 사용
	/*int i_1 = 1;
	int i_2 = 20;
	while (i_1 <= 10) 
	{
		cout << i_1 * 2 << endl;
		i_1++;
	}

	while (i_2 >= 1)
	{
		cout << i_2 << endl;
		i_2--;
	}*/
	
	// do while 사용
	int j_1,j_2;
	j_1 = 1;
	j_2 = 20;
	/*
	do
	{
		cout << j_1 * 2 << endl;
		j_1++;
	} while (j_1 <= 10);

	do
	{
		cout << j_2 << endl;
		j_2--;
	} while (j_2 >= 1);*/

	// 과제 4. 정수 하나를 입력 받아 -5 씩 반복적으로 연산이 되는 식을 만든다.
	
	// ㄴ 종료 조건 : -15 를 넘어가면 탈출
	// ㄴ 조건 : 입력받는 값은 - 10 ~10 사이에 숫자여야 하고 이외에 값을 입력시 프로그램 종료를 시킨다.
	// while 문 2개 사용함 -= 연산자의 정확한 사용법을 알지 못해 ++연산자로 구현하기위해 2중 while문을 사용해서 구현
	// 이후 조사를 통해 do ~ while 이 좀더 효과적이라고 생각하게 됨
	/*int k = 0;
	cout << "정수 입력" << endl;
	cin >> k;
	int k_1 = 1, k_2 = 0;
	while (k<11 
	
	
	
	& k> -11)
	{
		while (k_2 > -10)
		{
			k_2 = k - k_1 * 5;
			k_1++;
			cout << "결과 " << k_2 << endl;
		}
	}*/
	
	/*do 도움받은버전
	{
		cout << k << endl;
		k -= 5;
	} while (k >= -15 && k <= 5);
	*/
	


	// 과제 5.별찍기
	 
    //char star = '*';
	// 우 상단
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < i+1; j++)
//		{
//			cout << "**";
//		}
//		cout << '\n';
//	}
//////==========================================
//	// 우 하단
//	for (int i = 6; i > 1; i--)
//	{
//		for (int j = 0; j < i - 1; j++)
//		{
//			cout << "**";
//		}
//		cout << '\n';
//	}
//////===========================================
//	// 좌 하단
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < i  ; j++)
//		{
//			cout << "　";
//		}
//		for (int k = i; k < 5; k++)
//		{
//			cout << "**";
//		}
//		cout << '\n';
//	}
//////============================================
//	// 좌 상단
//	for (int i = 5; i > 0; i--)
//	{
//		cout << i;
//		for (int j = 0; j < i - 1; j++)
//		{
//			cout << "　";
//		}
//		for (int k = i; k <= 5 ; k++ )
//		{
//			cout << "**";
//		}
//		cout << '\n';
//	}

// 도전 과제1. 
	for (int i = 0, line = 0, spaces = 0, stars = 0; i < 10; line = i < 5 ? i : 9 - i - 1, spaces = 5 - line - 1, stars = 2 * line + 1, i++)
		{
			std::cout << std::string(spaces, ' ') << std::string(stars, '*') << '\n';
		}








}



//while (j < 10)
//{
//	//cout << i << " * " << j << " = " << i*j << endl;
//	j++;
//}