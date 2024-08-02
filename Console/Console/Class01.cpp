#include<iostream>

using namespace std;

#pragma region 클래스
/*
▶ class

- 객체지향 프로그래밍?
	ㄴ 우리가 살고있는 실제 세계가 객체들로 구성되어 있는것처럼 소프트웨어도 객체로 구성하는 방법
	ㄴ 사람, TV, 세탁기 등등 많은 객체가 존재함.
	ㄴ 고유한 기능을 수행하고 다른 객체들과 상호작용을 함.

- 객체란?
	ㄴ 클래스 -> 틀이나 설계도 -> 객체를 정의하는 틀이나 설계도
	ㄴ 틀만 만들면 됨? -> 써먹어야지.
	ㄴ 객체는 설계도를 기반으로 실체화를 시키는 것.
	
*/
#pragma endregion

// 구조체
struct Circle
{
public:
	int radius;
	string color;

	double calArea()
	{
		3.14 * radius * radius;
	}

};
// 클래스   
// 기본적으로 private
class Circle1
{
private:
	int radius;
	string color;

	double calArea()
	{
		3.14 * radius * radius;
	}

};

/* 구조체와 클래스의 차이는 디폴트 접근제어 지시자가 다르다.
 private, public, protected

- private: 클래스 내부에서만 참조가능
	ㄴ 숨겨야할 맴버변수

- public : 함수, 생성자, 소멸자




접근제어			클래스내부			클래스외부			상속클래스
private				O					X					X			나의 비자금		
public				O					O					O			길에 떨어진 돈
protected			O					X					O			가족 공유 돈
 */


class Student
{
public:
	void Print()
	{
		cout << " Student 클래스의 츠린트 함수";
	}
	void Print(int a, int b) {};
	void Print(string str = "기폴트 매개 변수")
	{
		cout << str << endl;
	}
	// 클래스 내부에 함수 선언 원형만
	int Sum(int a, int b);

};

class SquArea
{
public:
	void result();
	int set(int a, int b)
	{
		x = a;
		y = b;
	}
	void print()
	{
		cout << res << endl;
	}

	

private:
	// 가로, 세로
	int x = 0;
	int	y = 0;
	int res;

		
};



int main()
{
	//// 구조체
	//Circle c;
	//c.radius = 5;

	//// 클래스
	//Circle1 cc;
	//// 접근이 안됨.
	////cc.radius = 5;

	SquArea s;
	s.set(3, 5);
	s.result();
	s.print();


}

int Student::Sum(int a, int b)
{

	return 0;
}


/*
사각형의 클래스를 만들어보자.
맴버함수로는 사각형의 넓이를 계산.
ㄴ	츨력까지.




*/
void SquArea::result()
{
	res = x * y;
}
