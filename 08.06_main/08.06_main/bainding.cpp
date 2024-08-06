#include<iostream>

/*
1. 정적 바인딩??
컴파일 타임에 함수호출이 어떤함수로 연결될지 결정하는 놈
컴파일타임에 설정되어 빠름
단점은 컴파일타임에 정해지기 때문에 런타임에 변경불가

2. 동적 바인딩.
런타임에 함수호출이 어떤함수로 연결될지 결정하는 놈
바인딩 자체를 실행시간에 결정하도록 미뤄놓음
그다음 호출할때 오버라이딩된 동적함수로 호출하게 됨.
어떤 포인터에 의해 접근되었는지 상관없이 다형성을 지원함.

*/

class CPrint 
{
public:
	void Print(int a)
	{
		std::cout << "int 형 출력" << a << std::endl;
	}

	void Print(double a)
	{
		std::cout << "double 형 출력" << a << std::endl;
	}

};

class Parent
{
public:
	virtual void Show()
	{
		std::cout << " 부모클래스 Show 함수" << std::endl;
	}
	virtual ~Parent() = default;

};

class Child : public Parent
{
public:
	void Show()override
	{
		std::cout << " 자식클래스 Show 함수" << std::endl;
	}




};



int main()
{
	// 이게 정적 바인딩
	CPrint c;
	c.Print(10);
	c.Print(3.14);

	// 동적 바인딩
	Parent* pPtr = new Child();
	pPtr->Show();
	delete pPtr;


	/*
	★면접질문
	가상 함수 테이블 (VTable) 개념
	
	가상 함수 테이블:
	- 가상 함수를 포함하는 클래스는 가상 함수 테이블을 가지고 있습니다. 이 테이블은 해당 클래스의 가상 함수들의 포인터를 저장합니다.
	- 객체가 생성될 때, 객체의 가상 함수 테이블 포인터(vptr)가 해당 클래스의 가상 함수 테이블을 가리키도록 설정됩니다.
	
	가상 함수 테이블 포인터 (vptr):
	- 클래스의 각 객체는 가상 함수 테이블을 가리키는 포인터(vptr)를 가지고 있습니다.
	- 이 포인터를 통해 객체가 호출할 실제 가상 함수를 런타임에 결정할 수 있습니다.
	
	*/

}
