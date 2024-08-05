#include <iostream>

using namespace std;

/*
▶ 상속

부모 -> 자식
클래스간의 상속관계를 맺을때는 공통의 기능을 상위 클래스에 묶어넣어 다른 클래스로 확장할수 있게 하는것이 목적
만약 클래스들이 서로 비슷한 또는 완전히 같은 코드를 가지고 있다면 해당코드를 상위 클래스로 묶어 내는것을 고려하는게 좋다.

ex)

Player
이름, 공격력, 방어력		 - 속성
공격, 스킬, 도망가기 등등  - 행동

Monster
이름, 공격력, 방어력		 - 속성
공격, 스킬, 도망가기 등등  - 행동

*/


// 부모, 자식
// 부모
class Parent
{
public:
	int publicValue;

	Parent() :publicValue(1), protectedValue(2), privateValue(3){}

	void ShowValue()
	{
		cout << "부모 클래스 public 값 : " << publicValue << endl;
		cout << "부모 클래스 protected 값 : " << protectedValue << endl;
		cout << "부모 클래스 private 값 : " << privateValue << endl;


	}


protected:
		int protectedValue;




private:
	int privateValue;



};
// 자식 : 접근제어 지시자 부모클래스
/*
public 상속:
부모 클래스의 public 맴버는 자식클래스의 public으로 유지됨.
부모 클래의 protected 맴버는 자식클래스의 protected으로 유지됨.
부모 클래의 private 맴버는 자식클래스에서 접근 X

protected 상속:
부모 클래스의 public 맴버는 자식클래스의 protected으로 유지됨.
부모 클래의 protected 맴버는 자식클래스의 protected으로 유지됨.
부모 클래의 private 맴버는 자식클래스에서 접근 X


private 상속:
부모 클래스의 public 맴버는 자식클래스의 private으로 유지됨.
부모 클래의 protected 맴버는 자식클래스의 private으로 유지됨.
부모 클래의 private 맴버는 자식클래스에서 접근 X




*/
class ChildPurblic : public Parent
{
public:
	void ShowValue()
	{
		cout << "자식 클래스 public 값 : " << publicValue << endl;
		cout << "자식 클래스 protected 값 : " << protectedValue << endl;
		// private 는 상속 안됨. 자식에서 접근불가.
		// cout << "자식 클래스 private 값 : " << privateValue << endl;

	}



};

class ChildProtected : protected Parent
{
public:
	void ShowValue()
	{
		cout << "자식 클래스 public 값 : " << publicValue << endl;
		cout << "자식 클래스 protected 값 : " << protectedValue << endl;
		// private 는 상속 안됨. 자식에서 접근불가.
		// cout << "자식 클래스 private 값 : " << privateValue << endl;


	}



};

class ChildPrivate : private Parent
{
public:
	void ShowValue()
	{
		cout << "자식 클래스 public 값 : " << publicValue << endl;
		cout << "자식 클래스 protected 값 : " << protectedValue << endl;
		// private 는 상속 안됨. 자식에서 접근불가.
		// cout << "자식 클래스 private 값 : " << privateValue << endl;


	}

};

#pragma region 상속을 쓰지 않았을때

class Warror
{
	string name;
	int hp;
public:
	Warror(const string& n, const int h) : name(n), hp(h) {}

	void atk()
	{
		cout << name << " 휘두르기 " << endl;
	}

	void TakeDamage(const int damage)
	{
		hp - damage;

		cout << name << "가 " << damage << " 피해 받음  체력 : " << hp << endl;
	}
	

};

class mage
{

	string name;
	int hp;
public:
	mage(const string& n, const int h) : name(n), hp(h) {}

	void Skill()
	{
		cout << name << " 파이어볼 " << endl;
	}

	void TakeDamage(const int damage)
	{
		hp - damage;

		cout << name << "가 " << damage << " 피해 받음  체력 : " << hp << endl;
	}



};


#pragma endregion




#pragma region 상속을 했을때
class Character
{
public:
	string name;
	int hp;

	Character(const string& n, const int h) : name(n), hp(h) {}



	void TakeDamage(const int damage)
	{
		hp - damage;

		cout << name << "가 " << damage << " 피해 받음  체력 : " << hp << endl;
	}

};

class Warrior : public Character
{
public:
	// 부모 -> 자식
	// 자식 클래스의 생성자호출시 부모클래스의 생성자가 먼저 호출
	Warrior(const string& n, const int h) : Character(n,h){} // -> 자식클래스인 warrior에서 부모클래스인 Character의 생성자를 호출
	void atk()
	{
		cout << name << " 휘두르기 " << endl;
	}
};

class mageci : public Character
{

public:
	mageci(const string& n, const int h) : Character(n, h) {}
	void Skill()
	{
		cout << name << " 파이어볼 " << endl;
	}
};
#pragma endregion

/*
- 상속관계
is - a
~는 ~이다.
바나나는 과일이다. O


- 포함관계
has - a
~ 는 ~를 포함한다.
바나나는 과일을 포함한다. X

*/

class weapon{};

class Sw : public weapon
{
public:
	void use()
	{
		

	};

// 클래스 안에 포함
class CChar {
	Sw* s;
	weapon* weapon;
public:
	void Atk()
	{
		s -> use();
	}



};




int main()
{
	//ChildPurblic c1;
	//// 자식 정의를 먼저들고오지만 없으면 부모꺼 가져옴
	//c1.ShowValue();
	//
	//cout << c1.publicValue << endl;

	//// cout << c1.protectedValue   안됨.

	//ChildProtected c2;
	//c2.ShowValue();

	Warrior* w = new Warrior("전사", 100);
	w->atk(); // 자식꺼
	w->TakeDamage(10); // 부모꺼

}