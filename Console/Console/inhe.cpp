#include <iostream>

using namespace std;

/*
�� ���

�θ� -> �ڽ�
Ŭ�������� ��Ӱ��踦 �������� ������ ����� ���� Ŭ������ ����־� �ٸ� Ŭ������ Ȯ���Ҽ� �ְ� �ϴ°��� ����
���� Ŭ�������� ���� ����� �Ǵ� ������ ���� �ڵ带 ������ �ִٸ� �ش��ڵ带 ���� Ŭ������ ���� ���°��� ����ϴ°� ����.

ex)

Player
�̸�, ���ݷ�, ����		 - �Ӽ�
����, ��ų, �������� ���  - �ൿ

Monster
�̸�, ���ݷ�, ����		 - �Ӽ�
����, ��ų, �������� ���  - �ൿ

*/


// �θ�, �ڽ�
// �θ�
class Parent
{
public:
	int publicValue;

	Parent() :publicValue(1), protectedValue(2), privateValue(3){}

	void ShowValue()
	{
		cout << "�θ� Ŭ���� public �� : " << publicValue << endl;
		cout << "�θ� Ŭ���� protected �� : " << protectedValue << endl;
		cout << "�θ� Ŭ���� private �� : " << privateValue << endl;


	}


protected:
		int protectedValue;




private:
	int privateValue;



};
// �ڽ� : �������� ������ �θ�Ŭ����
/*
public ���:
�θ� Ŭ������ public �ɹ��� �ڽ�Ŭ������ public���� ������.
�θ� Ŭ���� protected �ɹ��� �ڽ�Ŭ������ protected���� ������.
�θ� Ŭ���� private �ɹ��� �ڽ�Ŭ�������� ���� X

protected ���:
�θ� Ŭ������ public �ɹ��� �ڽ�Ŭ������ protected���� ������.
�θ� Ŭ���� protected �ɹ��� �ڽ�Ŭ������ protected���� ������.
�θ� Ŭ���� private �ɹ��� �ڽ�Ŭ�������� ���� X


private ���:
�θ� Ŭ������ public �ɹ��� �ڽ�Ŭ������ private���� ������.
�θ� Ŭ���� protected �ɹ��� �ڽ�Ŭ������ private���� ������.
�θ� Ŭ���� private �ɹ��� �ڽ�Ŭ�������� ���� X




*/
class ChildPurblic : public Parent
{
public:
	void ShowValue()
	{
		cout << "�ڽ� Ŭ���� public �� : " << publicValue << endl;
		cout << "�ڽ� Ŭ���� protected �� : " << protectedValue << endl;
		// private �� ��� �ȵ�. �ڽĿ��� ���ٺҰ�.
		// cout << "�ڽ� Ŭ���� private �� : " << privateValue << endl;

	}



};

class ChildProtected : protected Parent
{
public:
	void ShowValue()
	{
		cout << "�ڽ� Ŭ���� public �� : " << publicValue << endl;
		cout << "�ڽ� Ŭ���� protected �� : " << protectedValue << endl;
		// private �� ��� �ȵ�. �ڽĿ��� ���ٺҰ�.
		// cout << "�ڽ� Ŭ���� private �� : " << privateValue << endl;


	}



};

class ChildPrivate : private Parent
{
public:
	void ShowValue()
	{
		cout << "�ڽ� Ŭ���� public �� : " << publicValue << endl;
		cout << "�ڽ� Ŭ���� protected �� : " << protectedValue << endl;
		// private �� ��� �ȵ�. �ڽĿ��� ���ٺҰ�.
		// cout << "�ڽ� Ŭ���� private �� : " << privateValue << endl;


	}

};

#pragma region ����� ���� �ʾ�����

class Warror
{
	string name;
	int hp;
public:
	Warror(const string& n, const int h) : name(n), hp(h) {}

	void atk()
	{
		cout << name << " �ֵθ��� " << endl;
	}

	void TakeDamage(const int damage)
	{
		hp - damage;

		cout << name << "�� " << damage << " ���� ����  ü�� : " << hp << endl;
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
		cout << name << " ���̾ " << endl;
	}

	void TakeDamage(const int damage)
	{
		hp - damage;

		cout << name << "�� " << damage << " ���� ����  ü�� : " << hp << endl;
	}



};


#pragma endregion




#pragma region ����� ������
class Character
{
public:
	string name;
	int hp;

	Character(const string& n, const int h) : name(n), hp(h) {}



	void TakeDamage(const int damage)
	{
		hp - damage;

		cout << name << "�� " << damage << " ���� ����  ü�� : " << hp << endl;
	}

};

class Warrior : public Character
{
public:
	// �θ� -> �ڽ�
	// �ڽ� Ŭ������ ������ȣ��� �θ�Ŭ������ �����ڰ� ���� ȣ��
	Warrior(const string& n, const int h) : Character(n,h){} // -> �ڽ�Ŭ������ warrior���� �θ�Ŭ������ Character�� �����ڸ� ȣ��
	void atk()
	{
		cout << name << " �ֵθ��� " << endl;
	}
};

class mageci : public Character
{

public:
	mageci(const string& n, const int h) : Character(n, h) {}
	void Skill()
	{
		cout << name << " ���̾ " << endl;
	}
};
#pragma endregion

/*
- ��Ӱ���
is - a
~�� ~�̴�.
�ٳ����� �����̴�. O


- ���԰���
has - a
~ �� ~�� �����Ѵ�.
�ٳ����� ������ �����Ѵ�. X

*/

class weapon{};

class Sw : public weapon
{
public:
	void use()
	{
		

	};

// Ŭ���� �ȿ� ����
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
	//// �ڽ� ���Ǹ� ������������ ������ �θ� ������
	//c1.ShowValue();
	//
	//cout << c1.publicValue << endl;

	//// cout << c1.protectedValue   �ȵ�.

	//ChildProtected c2;
	//c2.ShowValue();

	Warrior* w = new Warrior("����", 100);
	w->atk(); // �ڽĲ�
	w->TakeDamage(10); // �θ�

}