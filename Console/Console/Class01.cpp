#include<iostream>

using namespace std;

#pragma region Ŭ����
/*
�� class

- ��ü���� ���α׷���?
	�� �츮�� ����ִ� ���� ���谡 ��ü��� �����Ǿ� �ִ°�ó�� ����Ʈ��� ��ü�� �����ϴ� ���
	�� ���, TV, ��Ź�� ��� ���� ��ü�� ������.
	�� ������ ����� �����ϰ� �ٸ� ��ü��� ��ȣ�ۿ��� ��.

- ��ü��?
	�� Ŭ���� -> Ʋ�̳� ���赵 -> ��ü�� �����ϴ� Ʋ�̳� ���赵
	�� Ʋ�� ����� ��? -> ��Ծ����.
	�� ��ü�� ���赵�� ������� ��üȭ�� ��Ű�� ��.
	
*/
#pragma endregion

// ����ü
struct Circle
{
public:
	int radius;
	string color;

	double calArea()
	{
		3.14 * radius * radius;
	}

};
// Ŭ����   
// �⺻������ private
class Circle1
{
private:
	int radius;
	string color;

	double calArea()
	{
		3.14 * radius * radius;
	}

};

/* ����ü�� Ŭ������ ���̴� ����Ʈ �������� �����ڰ� �ٸ���.
 private, public, protected

- private: Ŭ���� ���ο����� ��������
	�� ���ܾ��� �ɹ�����

- public : �Լ�, ������, �Ҹ���




��������			Ŭ��������			Ŭ�����ܺ�			���Ŭ����
private				O					X					X			���� ���ڱ�		
public				O					O					O			�濡 ������ ��
protected			O					X					O			���� ���� ��
 */


class Student
{
public:
	void Print()
	{
		cout << " Student Ŭ������ ����Ʈ �Լ�";
	}
	void Print(int a, int b) {};
	void Print(string str = "����Ʈ �Ű� ����")
	{
		cout << str << endl;
	}
	// Ŭ���� ���ο� �Լ� ���� ������
	int Sum(int a, int b);

};

class SquArea
{
public:
	void result();
	int set(int a, int b)
	{
		x = a;
		y = b;
	}
	void print()
	{
		cout << res << endl;
	}

	

private:
	// ����, ����
	int x = 0;
	int	y = 0;
	int res;

		
};



int main()
{
	//// ����ü
	//Circle c;
	//c.radius = 5;

	//// Ŭ����
	//Circle1 cc;
	//// ������ �ȵ�.
	////cc.radius = 5;

	SquArea s;
	s.set(3, 5);
	s.result();
	s.print();


}

int Student::Sum(int a, int b)
{

	return 0;
}


/*
�簢���� Ŭ������ ������.
�ɹ��Լ��δ� �簢���� ���̸� ���.
��	���±���.




*/
void SquArea::result()
{
	res = x * y;
}
