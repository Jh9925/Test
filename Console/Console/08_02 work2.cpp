#include <iostream>

using namespace std;
/*
���� 2. ��������

�÷��̾�� ���� ������ Ŭ������ �ִ�.

�⺻������ �Ѵ� ���ݷ� ���� ü���� �ִ�.

��������.

Ŭ������ �����.
�ɹ������� ������ private
�ɹ��Լ����� �翬�� public
���������� �����ϳ� ������ ��.
*/

// �÷��̾� Ŭ����
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
			cout << "�÷��̾ " << (monAtk - playerDef) << " ���ظ� �Ծ����ϴ�. " << endl << endl;
		}
		
		
	}

	void printPlInfo()
	{
		cout << "�÷��̾� �̸� : " << playerName << endl;
		cout << "ü�� / ���ݷ� / ����    " << playerHp << " / " << playerAtk << " / " << playerDef << endl << endl;
	}


private:
	string playerName = "K";
	int playerHp = 100;
	int playerAtk = 20;
	int playerDef = 5;
};

Player::Player()
{
	cout << "�÷��̾� �̸� : " << playerName << endl;
	cout << "ü�� / ���ݷ� / ����" << playerHp << " / " << playerAtk << " / " << playerDef << endl << endl;
}

Player::~Player()
{
}

// ���� Ŭ����
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
			cout << "���Ͱ� " << (plAtk - monsterDef) << " ���ظ� �Ծ����ϴ�. " << endl << endl;
		}
	}

	void printMonInfo()
	{
		cout << "���� �̸� : " << monsterName << endl;
		cout << "ü�� / ���ݷ� / ����    " << monsterHp << " / " << monsterAtk << " / " << monsterDef << endl << endl;
	}

private:

	string monsterName;
	int monsterHp;
	int monsterAtk;
	int monsterDef;


};
// �ɹ� ���� �ʱ�ȭ
Monster::Monster(const string& _monName, int _monHp, int _monAtk, int _monDef)
	: monsterName(_monName), monsterHp(_monHp), monsterAtk(_monAtk), monsterDef(_monDef)
{
	cout << "���� �̸� : " << monsterName << endl;
	cout << "ü�� / ���ݷ� / ����" << monsterHp << " / " << monsterAtk << " / " << monsterDef << endl << endl;
}

Monster::~Monster()
{
}

int main()
{
	int  e = 0;
	cout << "==============================" << endl;
	cout << " �߻��� ���Ͱ� ��Ÿ����!!!" << endl;
	cout << "==============================" << endl << endl;
	Player player1;
	Monster mon1("������", 50, 10, 10);
	
	
	
	while (true)
	{

		int i = 0, j = 0;
		cout << " ���� = z // ���� = x " << endl;
		char mode;
		cin >> mode;
		switch (mode)
		{
		case 'z':
			// �÷��̾� ���� ����
			mon1.SetMonHp(20);
			// ���� ����
			player1.SetPlHp(10);

			player1.printPlInfo();
			mon1.printMonInfo();

			cout << "===========================================" << endl << endl;

			
			i = player1.GetPlHp();
			j = mon1.GetMonHp();

			if (i == 0 || i < 0)
			{
				cout << " �÷��̾ ���������ϴ�. " << endl;
				return 0;
				break;
			}
			else if (j == 0 || j < 0)
			{
				cout << " ���Ͱ� ���������ϴ�. " << endl;
				return 0;
				break;
			}

			break;
		case 'x':
			
			cout << "������ �����ƴ�! " << endl;
			
			break;

		default:
			
			cout << " �߸��� �Է��Դϴ�. " << endl;
			
			break;
		}
		
		
	}
	return 0;
}