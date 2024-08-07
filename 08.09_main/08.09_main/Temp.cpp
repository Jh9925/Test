#include<iostream>

using namespace std;


/*
Template
- �ſ� ����
- ���� Ÿ���� �������� ���� �Լ��� Ŭ������ �����Ҽ� �ִ�.
- �Ϲ������� ����, �Լ��� Ư�� �����͸� ����ϴ� ��ü���� ��κ��� �����ϱ⸦ ����.
- ������ ������ ���� �޶������� ������ �ڵ带 ���� ��찡 ����.
- ���ĵ� �������� ������ ������ ������ �����Ѵٸ� ����ϴ� ���������� �޶������� �ڵ�� ���� ������.
- �ܼ������ϰ� ������ ������ ����ؼ� �����Ҽ� �ֱ� ������...
	�� ������ ���������� ����ؼ� �����Ѵٸ� �����Ǽ��� �ݺ��ϰԵ�.
	�� ���� ���������� ������ �˰����� �ִ��� ���� �Ǽ��� �ϰ� �ɼ��� �ֱ� ������ ���Ҽ��� �ִ�.

���ø��� ����ϸ� ������ �ذᰡ��!!!

1. ���� �������� ���� �پ��� ������ ���� ���ؼ� �Լ��� Ŭ������ ���� �Ҽ� �ִ�.
2. ���ø��� ����ϸ� ������, ����� ���������� ���ڷ� �˸���.


�Լ� ���ø�
- �Լ��� �ʿ��� �ڷ����� �����ϰ� �Լ� ȣ��� �ڷ����� �����ؼ� ���.
- ���ø����� �ۼ��� �Լ��� ȣ���ϴ� ���� �´� �Լ��� ������.

Ŭ���� ���ø�
- �پ��� ������ Ÿ���� �����ϴ� Ŭ������ �����Ҽ� �ְ� ����.
- ���ø� �Ű������� ���� Ŭ������ �ɹ� ������ �ɹ��Լ��� Ÿ���� �Ϲ�ȭ �Ҽ� �ִ�.
- Ŭ������ �ʿ��� �ڷ����� �����ϰ� Ŭ���� �ڷ����� ������.
- ���ø����� �ۼ��� Ŭ������ ȣ���ϴ� ���� �ڷ����� �´� Ŭ������ ������.


���ø��� ����
- �ڵ� ���뼺: 
	���ø��� ����ϸ� ���� Ÿ�Կ� ���� ������ �ڵ带 ������ �� �ֽ��ϴ�.

- Ÿ�� ������: 
	���ø��� ������ Ÿ�ӿ� Ÿ�� �˻縦 �����ϹǷ� Ÿ�� �������� �����մϴ�.

- ������: 
	���ø��� �پ��� Ÿ���� ó���� �� �־� �ڵ��� �������� ���Դϴ�.

- �Լ� ���ø�
- �Լ��� �ʿ��� �ڷ����� �����ϰ� �Լ�ȣ��� �ڷ����� �����ϰ� �����մϴ�.



*/

// Ÿ���� �ٸ� �Լ� �ΰ�
int GetMax(int x, int y)
{
	if (x > y) return x;
	else return y;
}

float GetMax(float x, float y)
{
	if (x > y) return x;
	else return y;
}

// ���ø����� ����
template <typename T>
T GetMax(const T x, const T y)
{
	if (x > y) return x;
	else return y;
}

template <typename T>
T const& max(T const& a, T const& b)
{
	return a < b ? b : a;
}
// int ��  ȣ���
int const& max(int const& a, int const& b)
{
	return a < b ? b : a;
}

template <typename T>
void OutPut(const T data)
{
	cout << " ������ : "<< data << endl;

}


template <typename T>
void OutPut1(const T a, const T b)
{
	cout << a << "," << b << endl;
}
//  �����ε��� ��.!
template <typename T1, typename T2>
void OutPut2(const T1 a, const T2 b)
{
	cout << a << "," << b << endl;
}


// �굵 Ÿ�Գ��� �ΰ�����
template <typename T>
class Box
{
private:
	T data;
public:
	void SetData(T data)
	{
		this->data = data;
	}
	T GetData() { return data; }


};


template <typename T1, typename T2>
class Box1
{
private:
	T1 data1;
	T2 data2;
public:
	T1 Get1Data();
	T2 Get2Data();

	void Set1(T1 val) { data1 = val; }
	void Set2(T2 val) { data2 = val; }

};
template<typename T1, typename T2>
T1 Box1<T1, T2>::Get1Data()
{
	return data1;
}

template<typename T1, typename T2>
T2 Box1<T1, T2>::Get2Data()
{
	return data2;
}

int main()
{
	OutPut(1);
	OutPut(2.5);
	// Ÿ�Գ����� �ϳ��� ��� ���������� �������� ������ ����
	OutPut1(1, 1);

	// Ÿ���� �޶� Ÿ�Գ����� �ΰ��� ����
	OutPut2(2.32, 4);

	Box<int>box;
	box.SetData(10);
	cout << box.GetData() << endl;

	Box1<int, double>box1;
	box1.Set1(100);
	box1.Set2(3.14);

	cout << box1.Get1Data() << " , " << box1.Get2Data() << endl;





}


