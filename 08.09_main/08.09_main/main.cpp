
/*
Up+ Casting 
- �ڽ� Ŭ������ ��ü�� �θ�Ŭ����Ÿ������ ��ȯ
- ������� Ÿ�Ժ�ȯ�� �ʿ����

Down + Casting

- �θ�Ŭ����Ÿ���� �����͸� �ڽ�Ŭ������


*/


#include<iostream>

using namespace std;


class Shape
{
public:

	virtual void Draw()const
	{
		cout << " �θ�Ŭ���� Shape" << endl;

	}

	virtual~Shape() = default;

};
class Circle : public Shape
{
public:
	void Draw()const override
	{
		cout << "�ڽ�Ŭ���� Circle" << endl;
	}
	void CirF() {
		cout << "Circle Ŭ������ �ɹ��Լ�" << endl;
	}
};

class Rec : public Shape
{
public:
	void Draw()const override
	{
		cout << "�ڽ�Ŭ���� Rec" << endl;
	}
	void RecF() {
		cout << "Rec Ŭ������ �ɹ��Լ�" << endl;
	}
};

// ������ �����͸�
void Print(const int* value)
{
	int* newValue = const_cast<int*>(value);
	*newValue = 100;

}




int main()
{
	// ��ĳ����
	Shape* shape1 = new Circle();
	Shape* shape2 = new Rec();
	
	shape1->Draw();
	shape2->Draw();

	// �ٿ� ĳ����
	Circle* c = dynamic_cast<Circle*>(shape1);
	
	c->CirF();


	/*
		static_cast
		
		dynamic_cast
		
		const_cast
		��ü�� ������� ����
		Ÿ���� �ٲ��� ����.
		�����ͳ� ������ �����Ҷ��� ���
	
		
		reinterpret_cast


		updownCasting

	
	
	
	*/
 
	
}

