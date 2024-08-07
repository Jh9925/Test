#include<iostream>

using namespace std;

template<typename T>
class Shape
{
public:
	virtual void draw() const = 0; // 순수 가상 함수
	virtual  T area() const = 0; // 순수 가상 함수


};



template<typename T>
class Circle : public Shape<T> // <- 넘겨줘야 됨
{
public:
	Circle(T r) : radius(r){}
	
	void draw()const override {
		cout << " 원의 반지름 : " << radius << endl;
	}
	T area()const override
	{
		return 3.14 * radius * radius;
	}
};

template<typename T>
class Rectangle : public Shape<T> // <- 넘겨줘야 됨
{
private:
	T w;
	T h;

public:
	Rectangle(T w, T h) : w(w), h(h) {}

	void draw()const override {
		cout << "  가로 세로 : " << w << " , " << h << endl;
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
	cout << " 넓이 " << shape->area() << endl;
}





int main()

{
	Circle<double> circle(3.14);
	Rectangle<int> rec(3, 4);

	Show(&circle);
	Show(&rec);
	


}