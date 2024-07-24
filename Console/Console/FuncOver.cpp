#include<iostream>
using namespace std;


// 함수 오버로딩
int sum(int a, int b);

//int sum(int a, int b, int c)
//{
//	return a + b + c;
//}
//int sum(double a, int b, int c)
//{
//	return a + b + c;
//}
//int sum(int a, double b, int c)
//{
//	return a + b + c;
//}


// 함수 오버로딩의 규칙
// 함수 이름이 같더라도 매개변수의 갯수가 다르면 서로 다른함수로 인지.
// 1. 매개변수의 갯수가 달라야 한다.
// 2. 매개변수의 타입이 달라도 다른함수로 인지.
// 3. 매개변수의 순서가 다르면 다른함수로 인지.


// int func(int a);
// double func(int a);
// 리턴타입이 달라도 오버로딩안된다.


// 함수 오버로딩의 장점
// 여러함수를 하나의 이름의 함수로 관리 가능.
// 업무의 유연성 증가.
// 남발은 좋지않다.



/* 디폴트 매개변수
 기본값을 지정한다.
 매개변수의 디폴트값을 전달하고 함수호출시 매개변수를 전달하지 않았을때 기본값으로 호출한다.
 // 함수오버로딩과 함께 사용한다면 모호함이 발생된다.
 // 맨 오른쪽 매개변수부터 지정을 해줘야 한다. (맨 뒤)
 
 int sum(int a, int b, int c =3)
{
	return a + b + c;
}
*/


// inline 함수
// 함수의 호출과정에서 오버헤드를 줄이기 위해서 호출된자리에서 때려박는 방식
// 반복적인 호출에서 걸리는 시간을 절약할수 있다.
// 코드가 매우 짧고 반복적, 주기적으로 호출이 될시 사용하면 좋긴 하다.
// inline 코드 굳이 사용할 필요 없다.



int main()
{
	


}

int sum(int a, int b)
{
	return 0;
}
