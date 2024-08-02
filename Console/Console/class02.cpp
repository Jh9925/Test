#include<iostream>

using namespace std;

#pragma region ������
/*
�� constructor (������)

- ��ü�� �����ɶ� �ڵ����� ȣ���ϴ� Ư���� �ɹ��Լ���.
- ��ü�� �ʱ�ȭ�� ����ϰ� Ŭ������ ������ �̸��� ������ ��ȯ�� X
- �����ڴ� �⺻������, �Ű������� �ִ� ������, ���������...

�� ������ �ɹ� �ʱ�ȭ ����Ʈ

*/

/* ������ �ɹ� �ʱ�ȭ ����Ʈ
 ������ �Ű����� �ڿ� ���Եǰ� :(�ݷ�)���� ���۵� ���� �ʱ�ȭ�� �� �������� ��ǥ�� �����Ͽ� ����
 
 �ɹ������� �����ǰ� ���߿� ���� �����ϴ°ͺ��� ȿ�����̴�.
 ����� �ɹ����� �ʱ�ȭ
 �� const�ɹ�����, �����ɹ��� �ݵ�� �̰ɷ� �ʱ�ȭ�� �ؾ��Ѵ�. ������ �����ȿ����� �Ұ�.
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
		// ������ �ɹ��ʱ�ȭ�� ���⼭ �� �ʿ䰡 ����. �� ����� ���ɻ��� ������ �ִ�.
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
	// ���, ���������� �Ϲ������� �ʱ�ȭ �Ұ�.
	// const int a;
	// int& b;

	Player()
	{
		name = "����";
		nAtk = 10;
		mDef = 20;

	}
	// �Ű������� �ִ� ������.		�����ε� �ȴ�.!
	Player(const string& playerName, int playerAtk, int playerDef)
	{
		name = playerName;
		nAtk = playerAtk;
		mDef = playerDef;
	}
	
	
	
	
	
	void PrintInfo()const;   // const �ɹ��Լ��� ��ü�� ���¸� �������� �ʰڴ�!


};

int main()
{
	Player* player = new Player();
	player->PrintInfo();


	Player* player1 = new Player("ī����", 20, 30);
	player1->PrintInfo();


	// �ʱ�ȭ
	delete player;
	player = nullptr;

	delete player1;
	player1 = nullptr;





}

void Player::PrintInfo() const
{
	cout << name <<nAtk<< mDef << endl;
}
