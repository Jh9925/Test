#include<iostream>

using namespace std;

/*
▶ 소멸자
- 객체가 소멸될때 자동으로 호출되는 맴버함수
- 매개변수를 가질 수 없고, 반환값도 없고, 오버로딩도 불가.
*/


class MyClass
{
public:
	MyClass(int size);	// 생성자
	~MyClass();	// 소멸자

private:
	int* data;
};
// 생성자
MyClass::MyClass(int size)
{
	data = new int[size];
	cout << " 생성자 영역 ~~ 호출!" << endl;
}
// 소멸자
MyClass::~MyClass()
{
	delete data; // 반납
	data = nullptr;
	cout << "소멸자 ~ 호출" << endl;
}



int main()
{
	MyClass* m = new MyClass(10);
	delete m;
	m = nullptr;


}