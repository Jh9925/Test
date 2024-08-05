#include <iostream>

using namespace std;

#pragma region 
/*
▶ static, extern

- static
변수의 라이프 사이클(생명주기)를 제어하는데 사용

전역변수에 붙는 static 과 함수 내부에 붙는static, 클래스 내부에 맴버변수에 붙는 static 은 다 다르다.




-extern
외부변수
전역변수를 여러파일에서 사용하기 위함
다른 파일에서 있는 전역변수를 사용할수 있음

파일들간의 연결이 많아지고 유지보수가 힘들어진다.
적절하게 사용하자.




*/
#pragma endregion

// staticV.cpp 안에 있는 전역변수

extern int num1;

void Count();


// static 붙은 애들은 0으로 자동 초기화 해준다/.
static int sNum;


//=====================================================================
// 클래스 내의 static?
// 클래스 내부에서 static으로 선언된 변수는 해당클래스의 모든 인스턴스에서 공유됨.
// ㄴ 클래스의 인스턴스끼리 공통으로 사용되는 변수
// ㄴ 클래스의 인스턴스 없이도 접근이 가능함.


// 선언방법
// 클래스 내부에서 staric 을 사용하여 선언
// 이 선언은 컴파일러한테 해당 클래스에 정적 맴버변수가 있음을 알려줌.

// 외부에서 초기화 해야함.

// :: 을 사용해서 초기화를 해야함.


//=====================================================================



class Charactor
{
private:
	static int count;

	int num = 0;


public:
	
	Charactor()
	{
		count++;
	}
	
	// 정적 맴버 함수
	// 정적 맴버 변수에 접근을 한다거나 클래스와 관련된 어떤 공통적인 작업을 돌릴떄 사용.
	static void PrintCount()
	{
		cout << count << endl;
		// 정적맴버함수에서는 일반 맴버변수를 호출할수 없음.
		//cout << num << endl;
	}

};

int Charactor::count = 0;


int main()
{
	/*Count();
	Count();
	Count();*/


	Charactor::PrintCount();
	Charactor baba;
	Charactor::PrintCount();
	Charactor war;
	Charactor::PrintCount();


}

void Count()
{
	// 함수를 부를떄마다 값이 변하지 않음

	static int x = 0;
	int y = 0;
	x = x + 1;
	y = y + 1;

	/*
	결과
	x값 : 1 y 값 : 1
	x값 : 2 y 값 : 1
	x값 : 3 y 값 : 1
	*/

	cout << " x값 ㅣ " << x << " y 값 : " << y << endl;


}
