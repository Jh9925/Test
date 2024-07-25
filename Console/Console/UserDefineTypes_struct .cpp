#include<iostream>
#include<vector>
using namespace std;

/*
�� ����ü : Struct

- �ϳ� �̻��� ������ �׷���� ���ο� �ڷ����� ����

- �ȿ� ���� �Լ� ������ �ִ�.
- C�� �Լ� ���� �� ����.

< ����ü ���� >

struct ����ü �̸� { ����ü ���� };
- ����ü �������δ� ������ �Լ��� ������ �����ϴ�.
- ����ü�� ���Ե� ������ �ɹ�����, ���Ե� �Լ��� �ɹ� �Լ���� ��.

// ��α�
https://velog.io/@lbs0315/posts

*/


/*

�ڷ��� ������
- �ڷ����� ��Ī�� �����ϰ� ���� �ڷ�� ��� ���

<typedef �ڷ��� ��Ī>


*/
// ����
typedef int myInt_t; // �ڷ����� �����Ǵ� _t �� ������ ���� ����.
typedef unsigned long long uint64_t;

// C++ 11 ���� ���Ե� ��Ÿ��
using Integer = int;
// ���ø��� ������ ���ϴ�.
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

// �����ڰ� �ִ� ����ü
// < ����ü  ������ >
// ��ȯ�� ���� ����ü�� �̸��� �Լ��� �����Ͽ� ���

struct Monster
{
	string name;
	int hp;
	int mp;

	// �Ű������� ���� ������
	Monster()
	{
		name = "���� ";
		hp = 10;
		mp = 20;
	}

	// �Ű������� �ִ� ������.
	// �����ڵ� �����ε� ����
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


	cout << " p.x �� ��" << p.x << endl;
	cout << " p.y �� ��" << p.y << endl;
	
	p.Print();

	Monster monster;
	Monster dragon = Monster("�巡��", 250, 100);
	Monster slime = Monster("������", 10, 3);
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

	family me = family("������", 25);//...



}

void Point::Print()
{
	cout << " ����Ʈ ����ü �Լ���";
}


// ���� �غ��� 
// ����ü�� Ȱ���ؼ� �������踦 ����غ�����.


// ����ü �޸� �б� �˾ƺ���./
// ��ǻ�ʹ� 4����Ʈ�� ��� ����� ������.  char int char 
// 12 ���´�.
// �տ� ĳ���� 2������ 2����� �� 8�� �ȴ�. char char int





/*
7_25 ����1. 
���� ����
3�ٿϼ��� ����
���� ��ȣ�Է½� ���ڷ� �ٲ�� ����Ǹ� ǥ�� ����.



���� 2. 
4X4 �����̵� ����
�������� �ƹ��볪

����Ű�� �Է½� ������ �������� �̵� �迭 ���� �̿�����. ���� ���� ����








*/