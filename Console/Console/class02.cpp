#include<iostream>

using namespace std;

#pragma region 생성자
/*
▶ constructor (생성자)

- 객체가 생성될때 자동으로 호출하는 특별한 맴버함수임.
- 객체의 초기화를 담당하고 클래스와 동일한 이름을 가지며 반환형 X
- 생성자는 기본생성자, 매개변수가 있는 생성자, 복사생성자...

※ 생성자 맴버 초기화 리스트

*/

/* 생성자 맴버 초기화 리스트
 생성자 매개변수 뒤에 삽입되고 :(콜론)으로 시작된 다음 초기화할 각 변수들을 쉼표로 구분하여 나열
 
 맴버변수가 생성되고 나중에 값을 변경하는것보다 효율적이다.
 상수및 맴버변수 초기화
 ㄴ const맴버변수, 참조맴버는 반드시 이걸로 초기화를 해야한다. 생성자 본문안에서는 불가.
*/
class Monster
{
public:
	string name;
	int Atk;
	int Def;

	Monster(const string& monsterName, int monsterAtl, int monsterDef)
		:name(monsterName), Atk(monsterAtl), Def(monsterDef)
	{
		// 생성자 맴버초기화를 여기서 할 필요가 없다. 이 방법이 성능상의 이점이 있다.
	}


};


#pragma endregion

class Exam
{
public:
	const int num;
	int& score;

	Exam(int num, int score) :num(num), score(score)
	{

	}



};




class Player
{
public:
	string name;
	int nAtk;
	int mDef;
	// 상수, 참조변수는 일반적으로 초기화 불가.
	// const int a;
	// int& b;

	Player()
	{
		name = "윈터";
		nAtk = 10;
		mDef = 20;

	}
	// 매개변수가 있는 생성자.		오버로딩 된다.!
	Player(const string& playerName, int playerAtk, int playerDef)
	{
		name = playerName;
		nAtk = playerAtk;
		mDef = playerDef;
	}
	
	
	
	
	
	void PrintInfo()const;   // const 맴버함수가 객체의 상태를 변경하지 않겠다!


};

int main()
{
	Player* player = new Player();
	player->PrintInfo();


	Player* player1 = new Player("카리나", 20, 30);
	player1->PrintInfo();


	// 초기화
	delete player;
	player = nullptr;

	delete player1;
	player1 = nullptr;





}

void Player::PrintInfo() const
{
	cout << name <<nAtk<< mDef << endl;
}
