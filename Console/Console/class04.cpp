#include<iostream>

using namespace std;

// 맴버 변수는 private
// 생성자, 소멸자, 맴버함수 public
// 접근자(getter), 설정자(setter)
// 정보를 숨기고 원칙을 지키며 함수로 접근
// 캡슐화
class person
{
private:
	string name;
	int age;

public:
	// getter
	// 클래스의 맴버변수의 접근하고 수정하기위한 것.
	string GetName()const
	{
		return name;
	}
	// setter

	void SetName(const string& name1)
	{
		// person::name = name1;
		this->name = name1;
		// this : 자기 자신을 가리키는 포인터

	}

};



int main()
{
	person P;
	P.SetName("asd");
	cout << P.GetName() << endl;
}

/*
▶ 클래스는 설계도임

- 객체를 찍어내기 위한 녀석

※ 구조체와 클래스의 차이는 기본근접제어지시자가 다르다.

- 접근제어 지시자는 private, public, protected(상속)

- private은 오로지 클래스 내부에서만 접근가능(맴버 변수는 이곳에)
- public은 클래스 내, 외부에서 접근가능. (외부에 공개할 맴버함수, 생성자, 소멸자 등)
- protected는 상속관계에서 활용되며 클래스 내부와 상속관계에서 접근을 허용

- 생성자는 기본적으로 무조건 호출되며 없는 경우 컴파일러가 알아서 생성
- 생성자는 일반적으로 맴버들을 초기화 할때 사용하며, 맴버 이니셜라이즈에 효율적임.(상수, 참조변수들은 반드시 이것을 이용)

- 소멸자는 생성자와 마찬가지로 자동 호출되며 (객체가 소멸될때)
	ㄴ 이곳에 메모리해제를 할때 사용

- 생성자 -> 소멸자 호출순서임
- 생성자는 오버로딩이 가능하고 소멸자는 불가능.

- 접근자, 설정자는 데이터 캡슐화를 보존하며 외부에서 변경이 가능하다.

★ const 쓰는 습관!!!

*/


/*
과제1. 
택 1
 
슬라이드, 빙고 카드게임
셋중한개를 클래스화 시킬것
동적할당도 활용


과제 2. 대전게임

플레이어와 몬스터 각각의 클래스가 있다.

기본적으로 둘다 공격력 방어력 체력이 있다.

턴제게임.

클래스로 만들기.
맴버변수는 무조건 private
맴버함수들은 당연히 public
종료조건은 둘중하나 죽으면 끝.













*/
