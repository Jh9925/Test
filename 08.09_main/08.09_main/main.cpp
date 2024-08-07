
/*
Up+ Casting 
- 자식 클래스의 개체를 부모클래스타입으로 변환
- 명시적인 타입변환이 필요없음

Down + Casting

- 부모클래스타입의 포인터를 자식클래스로


*/


#include<iostream>

using namespace std;


class Shape
{
public:

	virtual void Draw()const
	{
		cout << " 부모클래스 Shape" << endl;

	}

	virtual~Shape() = default;

};
class Circle : public Shape
{
public:
	void Draw()const override
	{
		cout << "자식클래스 Circle" << endl;
	}
	void CirF() {
		cout << "Circle 클래스의 맴버함수" << endl;
	}
};

class Rec : public Shape
{
public:
	void Draw()const override
	{
		cout << "자식클래스 Rec" << endl;
	}
	void RecF() {
		cout << "Rec 클래스의 맴버함수" << endl;
	}
};

// 참조나 포인터만
void Print(const int* value)
{
	int* newValue = const_cast<int*>(value);
	*newValue = 100;

}




int main()
{
	// 업캐스팅
	Shape* shape1 = new Circle();
	Shape* shape2 = new Rec();
	
	shape1->Draw();
	shape2->Draw();

	// 다운 캐스팅
	Circle* c = dynamic_cast<Circle*>(shape1);
	
	c->CirF();


	/*
		static_cast
		
		dynamic_cast
		
		const_cast
		객체의 상수성을 제거
		타입을 바꾸진 않음.
		포인터나 참조를 변경할때만 사용
	
		
		reinterpret_cast


		updownCasting

	
	
	
	*/
 
	
}

