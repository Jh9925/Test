#include<iostream>
#include<vector>
using namespace std;

/*
▶ 구조체 : Struct

- 하나 이상의 변수를 그룹지어서 새로운 자료형을 정의

- 안에 변수 함수 넣을수 있다.
- C는 함수 넣을 수 없다.

< 구조체 선언 >

struct 구조체 이름 { 구조체 내용 };
- 구조체 내용으로는 변수와 함수가 포함이 가능하다.
- 구조체에 포함된 변수를 맴버변수, 포함된 함수를 맴버 함수라고 함.

// 블로그
https://velog.io/@lbs0315/posts

*/


/*

자료형 재정의
- 자료형의 별칭을 생성하고 실제 자료명 대신 사용

<typedef 자료형 별칭>


*/
// 고전
typedef int myInt_t; // 자료형의 재정의는 _t 로 끝내는 것을 권장.
typedef unsigned long long uint64_t;

// C++ 11 부터 도입된 스타일
using Integer = int;
// 템플릿과 쓸때는 편하다.
using StringList = vector<string>;




struct Student
{
	string name;
	int math;
	int english; 
	int science;
	float Average()
	{
		return(math + english + science / 3.0f);
	}

};

struct Point
{
	int x;
	int y;

	void Print();

};

// 생성자가 있는 구조체
// < 구조체  생성자 >
// 반환형 없이 구조체의 이름의 함수를 구현하여 사용

struct Monster
{
	string name;
	int hp;
	int mp;

	// 매개변수가 없는 생성자
	Monster()
	{
		name = "몬스터 ";
		hp = 10;
		mp = 20;
	}

	// 매개변수가 있는 생성자.
	// 생성자도 오버로딩 가능
	Monster(string _name, int _hp, int _mp)
	{
		name = _name;
		hp = _hp;
		mp = _mp;
	}

};


struct family
{
	string name;
	int age;
	family(string _name, int _age)
	{
		name = _name;
		age = _age;
	}

};




int main()
{
	Point p;
	p.x = 10;
	p.y = 20;


	cout << " p.x 의 값" << p.x << endl;
	cout << " p.y 의 값" << p.y << endl;
	
	p.Print();

	Monster monster;
	Monster dragon = Monster("드래곤", 250, 100);
	Monster slime = Monster("슬라임", 10, 3);
	cout << '\n';
	cout << monster.name << endl;
	cout << monster.hp << endl;
	cout << monster.mp << endl;
	cout << '\n';
	cout << " ++++++++++++++++++++++++ " << endl;

	cout << dragon.name << endl;
	cout << dragon.hp << endl;
	cout << dragon.mp << endl;
	cout << '\n';
	cout << " ++++++++++++++++++++++++ " << endl;

	cout << slime.name << endl;
	cout << slime.hp << endl;
	cout << slime.mp << endl;

	family me = family("안정헌", 25);//...



}

void Point::Print()
{
	cout << " 포인트 구조체 함수임";
}


// 지금 해볼것 
// 구조체를 활용해서 가족관계를 출력해보세요.


// 구조체 메모리 패깅 알아보자./
// 컴퓨터는 4바이트씩 묶어서 계산해 버린다.  char int char 
// 12 나온다.
// 앞에 캐릭터 2개오면 2개묵어서 총 8이 된다. char char int





/*
7_25 과제1. 
빙고 게임
3줄완성시 종료
각항 번호입력시 문자로 바뀌고 빙고되면 표시 까지.



과제 2. 
4X4 슬라이드 퍼즐
시작지점 아무대나

왼쪽키를 입력시 퍼즐이 왼쪽으로 이동 배열 스왑 이용하자. 종료 조건 없음








*/