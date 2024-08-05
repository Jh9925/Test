#include <iostream>

using namespace std;
/*
=====================================================================
�� ���� ������
- ������ Ŭ������ ��ü�� �����ؼ� �����Ҷ� ����ϴ� ������.

�� ���� ����

���� ����
- ��ü�� �����Ҷ� ��ü�� ��� �ɹ������� �ܼ��� ����.
- ���� �ɹ������� �������� ����� �������� �ּҰ��� ���縦 �ϰԵǰ� �׸��� �� ���� �޸𸮸� ����Ű�� �ȴ�.
- ���� �� ��ü���� �ش� �޸𸮸� �����ϸ� ������ ����.
	�� �� ��ü�� ���� �޸� �ּҸ� ����Ű�� ������ �� ��ü�� �Ҹ��ϸ鼭 �޸𸮸� �����ϸ� �ٸ� ��ü�� �� �̻� ��ȿ���� ����
	   �޸𸮸� ����Ű�� �Ǿ� ���� �߻�!!!


���� ����
- ��ü�� �����޸𸮸� ����Ҷ� �ʿ���
- ���� ��ü�� ������ ���� ������ ���ο� �޸𸮸� �Ҵ��Ͽ� �����ϴ°��� �ǹ���.
	-> �ٸ� �޸𸮸� ����ϰ� �ǹǷ� ���� ������ ��������.


*/
//class Person
//{
//public:
//	Person(int a) :age(a) {};
//
//	// �����Ϸ��� �����ϴ� �⺻ ��������� ����
//	// ��� �����Ϸ��� �˾Ƽ� ����
//	// ���������
//	// ���� �̰� ���� ���� 
//	// ��ü�� �����Ҷ� ��ü�� �ɹ������� �ܼ��ϰ� ����.
//	// ���� �ɹ������� �����Ͱ� �ִٸ� �����Ϳ� �ּҰ��� �����Ѵ�. -> ���� �޸� ������ ����Ų��.
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
// ���� ����
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
//		// �ι� ������� �ؼ� ��!		
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
		data = new int[size]; // �����ڿ��� �����޸� �Ҵ�.
	}
	//======================================================
	// ���� ����
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
	// ���� kim�� �����ϸ� ���� �ּҰ��� ������ �ִ� �ֵ� �� �������.
	
	//Person kim(21);
	//Person clone(kim); // ���� ������ ȣ��

	//MyArray arr1(10);
	//arr1.SetValue(0, 42);

	//MyArray arr2(arr1);

	//cout << "arr1 �� : " << arr1.GetValue(0) << endl;
	//cout << "arr2 �� : " << arr2.GetValue(0) << endl;

	//arr1.SetValue(0, 100);

	//cout << "arr1 ��(���� ��) : " << arr1.GetValue(0) << endl;
	//cout << "arr2 ��(���� ��) : " << arr2.GetValue(0) << endl;

	MyArray arr(10);
	arr.data[0] = 1;

	cout << arr.data[0] << endl;

		MyArray  clone = arr;
	
	
	clone.data[0] = 2;
	cout << clone.data[0] << endl;

}