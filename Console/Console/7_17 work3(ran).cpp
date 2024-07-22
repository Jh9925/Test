#include<iostream>
#include<time.h>

using namespace std;

void main()
{
	/*
	//과제 3
	srand(time(NULL));

	int numR1;
	int numR2;
	int numR3;

	// 1 ~ 5
	numR1 = rand() % 5 + 1;    //rand() 불완전 난수
	cout << "1 ~ 5 랜덤 " << endl;
	cout << numR1 << endl;
	cout << endl;

	// 6 ~ 19
	numR2 = rand() % 13 + 6;    //rand() 불완전 난수
	cout << "6 ~ 19 랜덤 " << endl;
	cout << numR2 << endl;
	cout << endl;


	// 23 ~ 189
	int min3;
	int max3;
	min3 = 23;
	max3 = min3 + 166;

	numR3 = rand() % 166 + 23;    //rand() 불완전 난수
	cout << "23 ~ 189 랜덤 " << endl;
	cout << numR3 << endl;
	cout << "최솟값 " << min3 << endl;
	cout << "최댓값 " << max3 << endl;
	

	*/




	//로또번호 

	srand(time(NULL));

	int numLooto1;
	int numLooto2;
	int numLooto3;
	int numLooto4;
	int numLooto5;
	int numLooto6;



	numLooto1 = rand() % 45 + 1;
	numLooto2 = rand() % 45 + 1;
	numLooto3 = rand() % 45 + 1;
	numLooto4 = rand() % 45 + 1;
	numLooto5= rand() % 45 + 1;
	numLooto6 = rand() % 45 + 1;
	
	cout << numLooto1 << "  " << numLooto2 << "  " << numLooto3 << "  " << numLooto4 << "  " << numLooto5 << "  " << numLooto6 << endl;
	cout << endl;

	/*numLooto2 = rand() % 45 + 1;    //rand() 불완전 난수
	
	cout << numLooto2 << endl;
	cout << endl;

	numLooto3 = rand() % 45 + 1;    //rand() 불완전 난수
	
	cout << numLooto3 << endl;
	cout << endl;

	numLooto4 = rand() % 45 + 1;    //rand() 불완전 난수
	
	cout << numLooto4 << endl;
	cout << endl;

	numLooto5 = rand() % 45 + 1;    //rand() 불완전 난수
	
	cout << numLooto5 << endl;
	cout << endl;

	numLooto6 = rand() % 45 + 1;    //rand() 불완전 난수
	
	cout << numLooto6 << endl;
	cout << endl;
	*/


}