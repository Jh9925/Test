#include<iostream>

using namespace std;


/*
Template
- 매우 유용
- 아직 타입이 정해지지 않은 함수나 클래스를 정의할수 있다.
- 일반적으로 변수, 함수와 특정 데이터를 사용하는 실체들의 대부분을 선언하기를 원함.
- 하지만 데이터 형이 달라지더라도 동일한 코드를 갖는 경우가 많다.
- 정렬등 뭔가같은 데이터 구조의 동작을 구현한다면 취급하는 데이터형이 달라지더라도 코드는 거의 동일함.
- 단순무식하게 동일한 동작을 계속해서 구현할수 있긴 하지만...
	ㄴ 문제는 같은동작을 계속해서 구현한다면 같은실수를 반복하게됨.
	ㄴ 또한 복잡하지만 더나은 알고리즘이 있더라도 많은 실수를 하게 될수도 있기 때문에 피할수도 있다.

템플릿을 사용하면 문제를 해결가능!!!

1. 아직 정해지지 않은 다양한 데이터 형에 대해서 함수나 클래스로 정의 할수 있다.
2. 켐플릿을 사용하면 묵시적, 명시적 데이터형을 인자로 알린다.


함수 템플릿
- 함수에 필요한 자료형을 선언하고 함수 호출시 자료형을 지정해서 사용.
- 템플릿으로 작성한 함수를 호출하는 때에 맞는 함수를 생성함.

클래스 템플릿
- 다양한 데이터 타입을 지원하는 클래스를 정의할수 있게 해줌.
- 템플릿 매개변수를 통해 클래스의 맴버 변수와 맴버함수의 타입을 일반화 할수 있다.
- 클래스에 필요한 자료형을 선언하고 클래스 자료형을 지정함.
- 템플릿으로 작성한 클래슬흘 호출하는 때에 자료형의 맞는 클래스를 생성함.


템플릿의 장점
- 코드 재사용성: 
	템플릿을 사용하면 여러 타입에 대해 동일한 코드를 재사용할 수 있습니다.

- 타입 안전성: 
	템플릿은 컴파일 타임에 타입 검사를 수행하므로 타입 안전성을 보장합니다.

- 유연성: 
	템플릿은 다양한 타입을 처리할 수 있어 코드의 유연성을 높입니다.

- 함수 템플릿
- 함수에 필요한 자료형을 선언하고 함수호출시 자료형을 지정하고 선언합니다.



*/

// 타입이 다른 함수 두개
int GetMax(int x, int y)
{
	if (x > y) return x;
	else return y;
}

float GetMax(float x, float y)
{
	if (x > y) return x;
	else return y;
}

// 템플릿으로 구현
template <typename T>
T GetMax(const T x, const T y)
{
	if (x > y) return x;
	else return y;
}

template <typename T>
T const& max(T const& a, T const& b)
{
	return a < b ? b : a;
}
// int 로  호출시
int const& max(int const& a, int const& b)
{
	return a < b ? b : a;
}

template <typename T>
void OutPut(const T data)
{
	cout << " 데이터 : "<< data << endl;

}


template <typename T>
void OutPut1(const T a, const T b)
{
	cout << a << "," << b << endl;
}
//  오버로딩도 됨.!
template <typename T1, typename T2>
void OutPut2(const T1 a, const T2 b)
{
	cout << a << "," << b << endl;
}


// 얘도 타입네임 두개가능
template <typename T>
class Box
{
private:
	T data;
public:
	void SetData(T data)
	{
		this->data = data;
	}
	T GetData() { return data; }


};


template <typename T1, typename T2>
class Box1
{
private:
	T1 data1;
	T2 data2;
public:
	T1 Get1Data();
	T2 Get2Data();

	void Set1(T1 val) { data1 = val; }
	void Set2(T2 val) { data2 = val; }

};
template<typename T1, typename T2>
T1 Box1<T1, T2>::Get1Data()
{
	return data1;
}

template<typename T1, typename T2>
T2 Box1<T1, T2>::Get2Data()
{
	return data2;
}

int main()
{
	OutPut(1);
	OutPut(2.5);
	// 타입네임이 하나인 경우 데이터형이 동일하지 않으면 오류
	OutPut1(1, 1);

	// 타입이 달라도 타입네임이 두개면 가능
	OutPut2(2.32, 4);

	Box<int>box;
	box.SetData(10);
	cout << box.GetData() << endl;

	Box1<int, double>box1;
	box1.Set1(100);
	box1.Set2(3.14);

	cout << box1.Get1Data() << " , " << box1.Get2Data() << endl;





}


