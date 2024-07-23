#include<iostream>
#include<time.h>
#include<Windows.h>
// ���ڿ��� ���õ� ���
// �� STL -> string -> �޸� ����̳� ���ڿ��� �ٷ� �� �ִ� �Լ����� �����Ѵ�.
// �� char  

#include<string>
// �����ڵ� ����
// world wide
// �����ڵ�� 2����Ʈ / ��Ƽ����Ʈ 1����Ʈ �Ǵ� 2����Ʈ ����� 1 �ѱ��� 2
#include<wchar.h>




using namespace std;

#pragma region �Լ�
/*

�� �Լ�

- ������ ���α׷��ֿ� ��ǥ ����

- �밭 ����� ���Ǳ� (����� ���Ǳ�� ������� �����ϴ� ���)

�� �Լ��� ����ϴ� ����

- �ߺ� ���� ����

- ���� ������

- ������ ���

- ����

EX ) �Լ��� �����ϴ� ���

 ��ȯ �ڷ��� �Լ��̸� (�Է� �ڷ��� (���� OR �μ� ��� �Ҹ���. )
{ <-- �Լ��� ����
 
 
   �Լ��� ����
 
 
 } <-- �Լ��� ��


 �� ���� 
 
 - �Լ� �̸� : �� �״�� �Լ��� �̸� ( �Լ��� �����ҋ� ���� ) 
 - ���� (�μ�) : �Լ��� �ؾ� �� ���� ���λ����� �����ϸ� �Լ��� �۾� �Ÿ���� �Ҽ� �ִ�.
 - ��ȯ �ڷ�� : �Լ��� �����ϴ� ���� ������ ���̸� �Լ��� �۾����
 - �Լ� ���� : {} �ȿ� �Լ��� �����ڵ尡 ����

 - �Լ��� �̸��� "�⺻��"���� �����ؾ� �Ѵ�.
	�� ������ �̸��� �Լ��� N�� �̻� �����ϴ°��� �Ұ��� �ϴ�.


 �� void �� �Լ���?
 
 - ���� �� ���� ���� �Լ�.

 - �Լ��� �Է� �Ǵ� ����� ������� void Ű���带 ���ؼ� �ش� ��/����� ���ٴ°��� ����ؾ� �Ѵ�.

 
 - �츮�� ����� �Լ�
  �� rand() : �������� �̴� �Լ�
  �� sleep(1000) : 1�ʰ� ���߰� ����� �Լ�




  �� �Լ��� ������ �⺻������ �����Լ� ���ʿ� �Ѵ�.


  �� C/ C++ ����� �Լ� ������ �ʿ��� ����

  - C/C++ ����� �����Ϸ��� �⺻������ ������ ������ ������ �Ʒ��� �ؼ��Ѵ�. 

  - �̶� �����Ϸ��� �̹� ����ģ ���ο��� ���ԵǾ� ���� ���� �Լ��� ȣ���� ��� �����Ϸ��� �̿� ���� ������ �𸣱�
	������ ������ �߻��Ѵ�. 
  
  - �׷��� ������ �Լ��� ������ ���ؼ� �����Ϸ��� �ش� �Լ��� ���� ��򰡿� �����Ѵٴ� ���θ� �˷���� �Ѵ�.
  
  - ��, �Լ��� ����� ����( ���� )�� �ݵ�� ������ ���Ͽ� �������� �ʾƵ� �ȴٴ� ���� �ǹ�.

  - ���� �Լ��� ������ �ߺ����� ����ϴ°��� ���������� �Լ��� ���Ǵ� �ݵ�� �����ؾ� �Ѵ�.

  �Ծ� 
  �� ����Ƽ�� -> ī��� -> / ��� ���� -> �Ľ�Į ���̽�


*/


#pragma endregion

// �Լ� ����
void OutputValueA();

// ��Ʈ���� ������ ��ȯ�� ���� �ʴ´�. (void)
void OutputValueB(int numA);
void OutputValueC(int numA, int numB );

// ���ڿ� (�Է� o / ��ȯ x)
string GetStringFunc(string strA, string strB);
string OutputStringFunc(string strA);
int cheakingString(string strA, string strB);

// ��ȯ���� ���� (int)
int GetaddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
int GetDevideValue(int numA, int numB);

void EnemyAttack();
void EnemyAttack();
// namespace ����!!!


namespace NS_A
{
	void EnemyAttack()
	{
		cout << " ���� NS_A �Լ�" << endl;
	}
}

namespace NS_B
{

	void EnemyAttack()
	{
		cout << " ���� NS_B �Լ�" << endl;
	}

}




void main()
{
	//NS_A::EnemyAttack();
	//NS_B::EnemyAttack();
	cout << '\n';

	OutputValueA();
	OutputValueB(5);
	OutputValueC(1, 9);

	OutputStringFunc(" ������ �ʹ� ��մ�.");

	int nReslutA = GetaddValue(18, 25);

	OutputValueB(nReslutA);

	string sResultB = GetStringFunc("����", "����");
	OutputStringFunc(sResultB);

	sResultB = cheakingString(" ������ �ʹ� ��մ�.", " ������ �ʹ� ��մ�.");
	OutputValueB(nReslutA);

	cout << '\n';


	int numL = 0;
	int numR = 0;

	cout << " ���� 2�� �Է� " << endl;

	cin >> numL >> numR;

	printf("%d + %d = %d\n", numL, numR, GetaddValue(numL, numR));
	printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d / %d = %f\n", numL, numR, GetDevideValue(numL, numR));

	/*
	- ��ó�� �Լ��� �پ��� ������ ������ �ִ�.

	C/ C++ ����� �Լ�����

	- �Է� o, ��� o
	- �Է� o, ��� x
	- �Է� x, ��� o
	- �Է� x, ��� x

	EX) 
	- �Է� o, ��� x
	void ShowInfo(int nAge, char psName);
	- �Է� x, ��� o
	int GetRandomValue(void);
	- �Է� x, ��� x
	void SomeFunction(void);



	
	
	
	*/



}


/*
- �̹���
���� ����1. ���ڿ� ���� �׽�Ʈ

- �޾��

<���� ����>
C++���� Ǯ��� �ϰ� ��ĭ�� �˸°� ä�� �����ÿ�.
C ��Ÿ�� ���̺귯��/ STL �� ��Ÿ ���̺귯�� �Լ��� ����ϸ� �ȵ˴ϴ�.
Ư�� STL string�� ���� �ٷ� Ż��
�׸��� �ش� ����� ���� �� �׷��� �ۼ��ߴ��� ª�� �ּ��� �־� �ּ���.

����. �־��� ���ڿ��� �ܾ� ������ ������ ����� ����Ͻÿ�.
<��>
�Է� �� : "Hello World this is Pearl Abyss"
��ȯ �� : "Pearl Abyss is this World Hello"

<����>
�Է� ���ڿ��� �յ� ������ ���ٰ� ����
��� �ܾ�� ���� �� ĭ���� ���еȴٰ� ����

void ReverseWords(char* output, int outputArraySize, const char* input)
{


  // ä���

}

// �ۼ��� ������ �ð����⵵�� ����ϴ� ���� ������ �Լ����� ���۹�İ� �� �׷��� �ߴ��� �ۼ��ߴ��� ���



*/



// ������ �Է� �����Ϳ� ��� �����Ͱ� ������ �ش籸���� �Լ���� �����Ҽ� �ִ�.
// ���� C/ C++ ���� �Լ������� �����ϱ� ������ ��ǻ���� ��ɹ��� �ۼ��ϱ� ���ؼ��� �ݵ�� �ش籸����
// �Լ��ȿ� �ۼ������ �Ѵ�.

void OutputValueA()
{
	cout << "���� �ٷ� �Լ���! " << endl;
}

void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA << numB << endl;
}

string OutputStringFunc(string str)
{
	cout << str << endl;
}



string GetStringFunc(string strA, string strB)
{
	// ������ return Ű���带 ���ؼ� �Լ��� ����Ǵ� ������� ��ȯ�ϴ°��� �����ϴ�.
	// �Լ��� ������� �Է°��� �޸� �ϳ��� ������� ��ȯ�Ҽ� �ִ�. (�Լ� ����) 
	
	// string�� ���ڿ��� �ٷ�� �ִ� �پ��� ��ɵ���  �����ϰ� �ִ�.
	return strA + strB;
	//return strA.append(strB);		��Ʈ�� �Ⱦ��� �ϴ¹�

}

int cheakingString(string strA, string strB)
{
	//������ 1 / �ٸ��� 0
	return strA == strB;
}

int GetaddValue(int numA, int numB)
{
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;
}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}

int GetDevideValue(int numA, int numB)
{
	return numA / numB;
}
