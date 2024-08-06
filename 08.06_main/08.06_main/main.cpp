#include<iostream>

using namespace std;

#pragma region 가상함수
/*

※ 다형성
- 객체의 속성이나 기능이 상황에 따라 여러가지 형태를 가질수 있는 성질

▶ 가상함수
VirtualFunction
상속관계에 있는 클래스에서 부모 클래스의 함수를 자식 클래스에서 재정의(오버라이딩)
하고 부모클래스의 포인터나 참조를 통해 자식클래스의 함수 호출

// 오버로딩 vs 오버라이딩?

동적바인딩과 정적바인딩

*/

#pragma endregion

#include "Bike.h"
#include "Car.h"
#include "Vehicle.h"


// 동적바인딩.
int main()
{
	// 부모의 포인터로 
	Vehicle* v;
	// 자식에 접근
	v = new Car(" B M W ");
	v->Move();
	
	delete v;

	v = new Bike(" 오토바이 ");
	v->Move();
		
	delete v;

}