#include <iostream>

using namespace std;
/*
과제 2. 대전게임

플레이어와 몬스터 각각의 클래스가 있다.

기본적으로 둘다 공격력 방어력 체력이 있다.

턴제게임.

클래스로 만들기.
맴버변수는 무조건 private
맴버함수들은 당연히 public
종료조건은 둘중하나 죽으면 끝.
*/

// 플레이어 클래스
class Player
{
public:
	Player();
	~Player();

	// getter
	int GetPlHp()
	{
		return playerHp;
	}
	// setter
	void SetPlHp(const int& monAtk)
	{
		if ((monAtk - playerDef) <= 0)
		{
			cout << " MISS " << endl;
		}
		else
		{
			playerHp = playerHp - (monAtk - playerDef);
			cout << "플레이어가 " << (monAtk - playerDef) << " 피해를 입었습니다. " << endl << endl;
		}
		
		
	}

	void printPlInfo()
	{
		cout << "플레이어 이름 : " << playerName << endl;
		cout << "체력 / 공격력 / 방어력    " << playerHp << " / " << playerAtk << " / " << playerDef << endl << endl;
	}


private:
	string playerName = "K";
	int playerHp = 100;
	int playerAtk = 20;
	int playerDef = 5;
};

Player::Player()
{
	cout << "플레이어 이름 : " << playerName << endl;
	cout << "체력 / 공격력 / 방어력" << playerHp << " / " << playerAtk << " / " << playerDef << endl << endl;
}

Player::~Player()
{
}

// 몬스터 클래스
class Monster
{
public:
	Monster(const string& _monName, int _monHp, int _monAtk, int _monDef);
	~Monster();

	// getter
	int GetMonHp()
	{
		return monsterHp;
	}
	// setter
	void SetMonHp(const int& plAtk)
	{
		if ((plAtk - monsterDef) <= 0)
		{
			cout << " MISS " << endl;
		}
		else
		{
			monsterHp = monsterHp -(plAtk - monsterDef);
			cout << "몬스터가 " << (plAtk - monsterDef) << " 피해를 입었습니다. " << endl << endl;
		}
	}

	void printMonInfo()
	{
		cout << "몬스터 이름 : " << monsterName << endl;
		cout << "체력 / 공격력 / 방어력    " << monsterHp << " / " << monsterAtk << " / " << monsterDef << endl << endl;
	}

private:

	string monsterName;
	int monsterHp;
	int monsterAtk;
	int monsterDef;


};
// 맴버 변수 초기화
Monster::Monster(const string& _monName, int _monHp, int _monAtk, int _monDef)
	: monsterName(_monName), monsterHp(_monHp), monsterAtk(_monAtk), monsterDef(_monDef)
{
	cout << "몬스터 이름 : " << monsterName << endl;
	cout << "체력 / 공격력 / 방어력" << monsterHp << " / " << monsterAtk << " / " << monsterDef << endl << endl;
}

Monster::~Monster()
{
}

int main()
{
	int  e = 0;
	cout << "==============================" << endl;
	cout << " 야생의 몬스터가 나타났다!!!" << endl;
	cout << "==============================" << endl << endl;
	Player player1;
	Monster mon1("슬라임", 50, 10, 10);
	
	
	
	while (true)
	{

		int i = 0, j = 0;
		cout << " 전투 = z // 도망 = x " << endl;
		char mode;
		cin >> mode;
		switch (mode)
		{
		case 'z':
			// 플레이어 먼저 공격
			mon1.SetMonHp(20);
			// 몬스터 공격
			player1.SetPlHp(10);

			player1.printPlInfo();
			mon1.printMonInfo();

			cout << "===========================================" << endl << endl;

			
			i = player1.GetPlHp();
			j = mon1.GetMonHp();

			if (i == 0 || i < 0)
			{
				cout << " 플레이어가 쓰러졌습니다. " << endl;
				return 0;
				break;
			}
			else if (j == 0 || j < 0)
			{
				cout << " 몬스터가 쓰러졌습니다. " << endl;
				return 0;
				break;
			}

			break;
		case 'x':
			
			cout << "무사히 도망쳤다! " << endl;
			
			break;

		default:
			
			cout << " 잘못된 입력입니다. " << endl;
			
			break;
		}
		
		
	}
	return 0;
}