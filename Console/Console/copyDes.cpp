#include <iostream>

using namespace std;
/*
=====================================================================
▶ 복사 생성자
- 동일한 클래스의 객체를 복사해서 생성할때 사용하는 생성자.

★ 면접 질문

얕은 복사
- 객체를 복사할때 객체의 모든 맴버변수를 단순히 복사.
- 만약 맴버변수가 포인터인 경우라면 포인터의 주소값만 복사를 하게되고 그말인 즉 같은 메모리를 가리키게 된다.
- 만약 한 객체에서 해당 메모리를 수정하면 영향을 받음.
	ㄴ 두 객체가 같은 메모리 주소를 가리키기 때문에 한 객체가 소멸하면서 메모리를 해제하면 다른 객체는 더 이상 유효하지 않은
	   메모리를 가리키게 되어 문제 발생!!!


깊은 복사
- 객체가 동적메모리를 사용할때 필요함
- 원본 객체가 동일한 값을 가지는 새로운 메모리를 할당하여 복사하는것을 의미함.
	-> 다른 메모리를 사용하게 되므로 서로 영향을 받지않음.


*/
//class Person
//{
//public:
//	Person(int a) :age(a) {};
//
//	// 컴파일러가 생성하는 기본 복사생성자 형태
//	// 없어도 컴파일러가 알아서 삽입
//	// 복사생성자
//	// 지금 이건 얕은 복사 
//	// 객체를 복사할때 객체의 맴버변수를 단순하게 복사.
//	// 만약 맴버변수로 포인터가 있다면 포인터에 주소값만 복사한다. -> 같은 메모리 영역을 가리킨다.
//	Person(const Person& other) : age(other.age)
//	{
//
//	}
//
//	void SetAge(int age)
//	{
//		this->age = age;
//	}
//
//	int GetAge()
//	{
//		return age;
//	}
//
//private:
//	int age;
//
//};
//
// ==============================================================================
// 얕은 복사
//class MyArray
//{
//private:
//	int* data;
//	int size;
//
//public:
//	MyArray(int size) : size(size), data(new int[size]){}
//	~MyArray()
//	{
//		// 두번 지우려고 해서 펑!		
//		// delete[] data;
//	}
//	
//	void SetValue(int index, int value)
//	{
//		data[index] = value;
//	}
//	int GetValue(int index)
//	{
//		return data[index];
//	}
//
//
//
//};

class MyArray
{
public:
	int* data;
	int size;

public:
	MyArray(int size) 
	{
		this->size = size;
		data = new int[size]; // 생성자에서 동적메모리 할당.
	}
	//======================================================
	// 깊은 복사
	MyArray(const MyArray& other)
	{
		this->size = other.size;
		this->data = new int[other.size];
		for (int i = 0; i < size; i++)
		{
			this->data[i] = other.data[i];
		}

	}
	//======================================================
	~MyArray()
	{
		if (data != nullptr)
		{
			// this->data;
			delete[] data;
		}
		data = nullptr;
	}

	



};






int main()
{
	// 만약 kim을 수정하면 같은 주소값을 가지고 있는 애들 다 영향받음.
	
	//Person kim(21);
	//Person clone(kim); // 복사 생성자 호출

	//MyArray arr1(10);
	//arr1.SetValue(0, 42);

	//MyArray arr2(arr1);

	//cout << "arr1 값 : " << arr1.GetValue(0) << endl;
	//cout << "arr2 값 : " << arr2.GetValue(0) << endl;

	//arr1.SetValue(0, 100);

	//cout << "arr1 값(변경 후) : " << arr1.GetValue(0) << endl;
	//cout << "arr2 값(변경 후) : " << arr2.GetValue(0) << endl;

	MyArray arr(10);
	arr.data[0] = 1;

	cout << arr.data[0] << endl;

		MyArray  clone = arr;
	
	
	clone.data[0] = 2;
	cout << clone.data[0] << endl;

}