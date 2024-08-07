#include<iostream>

using namespace std;

template<typename T>
class Shape
{
public:
	virtual void draw() const = 0; // ���� ���� �Լ�
	virtual  T area() const = 0; // ���� ���� �Լ�


};



template<typename T>
class Circle : public Shape<T> // <- �Ѱ���� ��
{
public:
	Circle(T r) : radius(r){}
	
	void draw()const override {
		cout << " ���� ������ : " << radius << endl;
	}
	T area()const override
	{
		return 3.14 * radius * radius;
	}
};

template<typename T>
class Rectangle : public Shape<T> // <- �Ѱ���� ��
{
private:
	T w;
	T h;

public:
	Rectangle(T w, T h) : w(w), h(h) {}

	void draw()const override {
		cout << "  ���� ���� : " << w << " , " << h << endl;
	}
	T area()const override
	{
		return w * h;
	}

};



template<typename T>
void Show(const Shape<T>* shape)
{
	shape->draw();
	cout << " ���� " << shape->area() << endl;
}





int main()

{
	Circle<double> circle(3.14);
	Rectangle<int> rec(3, 4);

	Show(&circle);
	Show(&rec);
	


}