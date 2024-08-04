#include<iostream>

using namespace std;

/*
값에 의한 전달 -> CallByValue
함수에 인수를 전달할때 인수의 값이 복사되어 함수의 매개변수로 전달.
함수 내부에서 매개변수를 변경하더라도 호출한 함수의 실제 인수는 변하지 않는다.


*/

void Value(int n);

// 참조에 의한 호출
// 함수 호출시 인수로 변수의 주소를 전달.
// 함수가 매개변수로 받은 참조를 통해서 실제 인수의 값을 직접 수정가능
// 함수 내부에서 매개변수의 값을 변경하면 호출한 함수의 실제 인수도 변경가능
// 값을 복사하는 대신 주소를 전달 -> 메모리와 성능 효율이 좋다.
// 구조체나...  클래스나...
void Address(int* n);  //  -> 변수의 메모리주소 전달 함수내부의 포인터로 수정
// 잘못된 메모리 접근이 가능하다.
// ㄴ 이를 방지하기 위해 const 사용하기 ( 값 변경 불가. ) 읽기전용
void Address(const int* n);



// 변수의 다른 이름을 만들어서 함수가 해당변수의 원본데이터에 주소값으로? 직접 접근하고 수정 할수 있게 만들어줌.
void Reference(int& nn);  //  -> 함수내부에서 참조를 통해 직접 값을 수정할수 있게 해줌.
// 위보다 아래가 좀더 안전하다.
// 메모리 주소가 동일해진다.
// & 주소를 반환하는 연산자가 아님!!!!!!!!

void Swap(int a, int b);
void SwapAddress(int* a, int* b);
void SwapRefrence(int& a, int& b);





int main()
{


#pragma region 배열과 포인터
	/*
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{

		cout << &arr[i] << endl;
	}

	// 배열과 포인터의 관계
	// 포인터로도 배열 원소의 접근이 가능하다.!
	// 즉, 배열의 시작부분을 가리키는 포인터를 정의하고 포인터에 1을 더하면 그다음원소를 가리키고
	// 2를 더하면 그 다음다음 원소를 가리키게 된다.

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	// parr포인터를 배열의 첫번째 요소의 주소를 저장.
	parr = &arr[0];

	for (int i = 0; i < 10; i++)
	{

		cout << "arr의 주소" << &arr[i] << endl;
		// 포인터로도 배열원소의 접근가능하다.
		cout << "parr의 값 : " << (parr + i) << endl;

	}

	// 배열의 이름을 사용시 암묵적으로 첫번째 원소를 가리키는 포인터로 타입변환


	*/
	
#pragma endregion

		
	/*int num = 30;
	Value(num);
	cout << "num의 값 : " << num << endl;
	cout << "num의 주소 값 : " << &num << endl;*/

	cout << "=======================-=========================" << endl << endl;

	/*int num1 = 30;
	Address(&num1);
	cout << "num1의 값 : " << num1 << endl;
	cout << "num1의 주소 값 : " << &num1 << endl;*/

	/*int num2 = 30;
	cout << "num1의 값 : " << num2 << endl;
	cout << "num1의 주소 값 : " << &num2 << endl;
	Reference(num2);
	cout << "num1의 값 : " << num2 << endl;
	cout << "num1의 주소 값 : " << &num2 << endl;*/

	/*int num1 = 10;
	int num2 = 20;
	cout << " 스왑 전 데이터 : " << num1 << "," << num2 << endl;
	Swap(num1, num2);
	cout << " 스왑 후 데이터 : " << num1 << "," << num2 << endl;*/
 
	int SwapAddNum1 = 10;
	int SwapAddNum2 = 20;
	cout << " 스왑 전 데이터 : " << SwapAddNum1 << "," << SwapAddNum2 << endl;
	SwapAddress(&SwapAddNum1, &SwapAddNum2);
	cout << " 스왑 후 데이터 : " << SwapAddNum1 << "," << SwapAddNum2 << endl; 


	// void 포인터 변수
	// 자료형이 없는 포인터 변수
	// 자료형에 제약을 받지 않고 어떤 자료형의 주소든 저장이 가능하다.
	// 값을 참조하려면 강제로 형변환을 해야한다.
	// 타입의 안정성을 보장할수 없다.
	
	void* vp = nullptr; // -> 포인터를 널포인터로 초기화

	int c = 3;
	double d = 3.14;

	int a = 1;
	int* p = &a;

	// *vp = 1; 자료형이 없어서 역참조 불가.  ->  값을 참조 하려면 강제로 형 변환 필요
	// (자료형*) 을 붙임으로써 가능하게 함. : 강제 형 변환 
	*(int*)vp = 5;
	cout << *(int*)vp << endl;



	// 과제
/*
	정적할당과 동적할당의 차이점.
	노트에 정리하기.
	
	동적할당
	ㄴ 프로그램이 돌아가는동안 필요한 메모리의 크기를 os에 요청해서 사용.
	ㄴ 반드시 메모리를 반납해줘야 함!!!!
	ㄴ 안하면 메모리 누수발생!!!

	C	-> malloc
	   free

	C++	-> new
	   delete / 메모리 해제

*/

	// C 스타일
	int* ptr = (int*)malloc(sizeof(int) * 10);


	// C++ 스타일
	int* ptr = new int(10);

	delete ptr;
	
	

	int* array = new int[5];  //  5개의 int를 저장할수 있는 배열을 할당.

	for (int i = 0; i < 5; i++)
	{
		array[i] = i * 2;
	}
	delete[] array;		// 메모리 해지 후

	array = nullptr;	// 오류 예방법


	// 이중 포인터
	int num = 10;
	int* p = &num;
	*p = 7777;

	int** pp;
	pp = &p;
	cout << "pp의 값 : p의 주소 값 " << pp << endl;

	cout << *pp << endl; // num의 주소값이 나옴







	
}

void Value(int n)
{
	n = 10;
	cout << "n의 값 : " << n << endl;
	cout << "n의 주소 값 : " << &n << endl;

}

void Address(int* n)
{
	*n = 10;
	cout << "n의 값 : " << *n << endl;
	cout << "n의 주소 값 : " << &n << endl;


}

void Reference(int& nn)
{
	nn = 10;
	cout << "nn의 값 : " << nn << endl;
	cout << "nn의 주소 값 : " << &nn << endl;

}
// 복사.
// 아래와 같은 형태는 전달이 아니라 복사의 형태
// num1, num2에 각각 저장된 10, 20이 복사
// Swap 내부에서만 변경되고 메인함수에 있는 num1, num2에는 전혀 영향 X
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Swap()함수 내부의 값 : " << a <<" , "<< b << endl;
}

void SwapAddress(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "SwapAddress()함수 내부의 값 : " << *a << " , " << *b << endl;
}

void SwapRefrence(int& a, int& b) // & 주소를 반환하는 연산자가 아님!!!!!!!!
{
	// 이건 만들어 보자.
	int temp = a;
	a = b;
	b = temp;
	cout << "Swap()함수 내부의 값 : " << a << " , " << b << endl;

}

// 과제
/*
정적할당과 동적할당의 차이점. 
노트에 정리하기.

동적할당 
ㄴ 프로그램이 돌아가는동안 필요한 메모리의 크기를 os에 요청해서 사용.
ㄴ 반드시 메모리를 반납해줘야 함!!!!
ㄴ 안하면 메모리 누수발생!!!

C	-> malloc 
	   free

C++	-> new
	   delete / 메모리 해제

*/

// C 스타일
int* ptr = (int*)malloc(sizeof(int) * 10);


// C++ 스타일
int* ptr = new int(10);

int* array = new int[5];  //  5개의 int를 저장할수 있는 배열을 할당.


// 과제
/*
1. 정적할당과 동적할당의 차이
2. 클래스란 무엇인가?
무작위로 발표시킴

3. 구조체를 활용한 학생정보 출력하기.
	ㄴ 학생정보를 출력하는 함수
	ㄴ 학생정보를 추가하는 함수

	void (&구조체)
	복사말고 참조방식으로 구현하기.



*/