#include<iostream>
#include<time.h>


//���ϴ�  -> ���̴�.
using namespace std;

//using  ������: ������ ���� �����̽��� ��� ��Ī�� �� ������ �ִ� ������ ������ �Ҽ� �������� ����ϰڴ�.



using std::cin;
using std::cout;
using std::endl;



namespace A
{
	namespace B
	{
		namespace C
		{
			int EnemyAtt;  // ��⼺ ĸ��ȭ

		}

	}

}

namespace ABC = A::B::C;



#pragma region �ڷ��� + ���� ����
/*
�� �ڷ��� 
- ������ ������ �ǹ��ϸ� ���� �ڷ��� (Data type) �̴�.

�� ������?

- ���Ҽ� �ִ� ������, ����
- ��ǻ�ͷ� �Ͽ��� ���� �����Ҽ� �ִ� �޸� ������ �ٴ� �̸�
- ������ �̿��ϸ� Ư������ ������ �ش簪�� �̿��� �������� ������ �����ϴ�. ( Ȥ�� ó���Ҽ� �ִ�.)



���ڷ����� ���� (C/C++)

- ������ (�Ҽ����� ���� ���� ǥ���ϱ� ���� �ڷ���)
- �Ǽ��� (�Ҽ����� �����ϴ� ���� ǥ���ϱ����� �ڷ���)
- ������ (���ڸ� ǥ���ϱ����� �ڷ���)
- ���� (�� / ����)

�� �ڷ����� ���� (������)
 
- short		(2����Ʈ) 

- int		(4����Ʈ) 43��
!!!��!!! 
- long		(4 ~ 8����Ʈ) Ȯ�强 ��� 32 ��Ʈ�϶� 4  /  64�϶� 8

- longlong	(8����Ʈ)

�� �Ǽ���

- float		�� (4����Ʈ) 8�ڸ� 0.0000000
- double	�� (8����Ʈ) 14�ڸ�����16�ڸ�

�� decimal	(16����Ʈ)
  �����������..
  �Ҽ��� 29�ڸ�

�� ������

- char (1����Ʈ)
	

�� ����

- bool	(1����Ʈ)  ->  0 (����) / 1 (��) �� ��Ÿ��
�� bool �ڷ����� ������ �;��� ��ġ�� ���ԵǸ� ���� 1�� 0���� ��ȯ�� �ɻ� ���� ������ �ǹ��ϴ°� �ƴϴ�.



- �⺻������ c ���� ������ �ش��ϴ� ��/ �����̶�� �ڷ����� ������ �������� �ʾҴ�.
�� �׷��� ������ ���� 0�� ���� 1 / 0�� ������ ������ ������ ���� �Ͽ���.
�� ����� C���� bool�������� �����ϴ� �ް����� ����.

- C++ �� �Ѿ� ���鼭 �� �Ǵ� ������ ��Ÿ���� Ű���带 �߰��߰� ���� true / flase �̴�.

-�׸��� C / C++ �ڷ����� �⺻������ ������ ǥ���ϴ� ���� ���������� ��쿡 ���� ������ ǥ������ �ʴ� ��ſ� ����� 
 ���� ũ�� ǥ���ϴ� ����� �ִ�. (signed (��) / unsigned (��))


 �� �ڷ����� ũ��

 1. ������

  �ڷ��� Ÿ��				 ũ��					����
  short						2����Ʈ				-32768~32767
  unsighedshort				2����Ʈ				0 ~ 65535
  int						4����Ʈ				-21�� ~ 21��
  unsighedint				4����Ʈ				�� 43��
  long						4����Ʈ (32)			-21�� ~ 21��


 2. �Ǽ���
 floar						4����Ʈ				�Ҽ����� ��´�.
 double						8����Ʈ				�Ҽ����� ��´�.


 3. ������
 char						1����Ʈ				������ ��´�. (����)
 unsiginedchar				1����Ʈ				���� ������ ��´�. (����)


 4. ����
 bool						1����Ʈ				0 ���� 1 ��


 �� ���� ����
 - ���� �����̶�?
 �� ���� �����Ҽ� �ִ� �޸� ������ �̸��� �����ϴ°� ���Ѵ�.

 EX : �⺻ ���� -> ���� ����(����) ������
 �� int number;

 EX : int number = 20;
 �� ������ �������� ���ؼ� number ��� �̸����� �޸� ������ �Ҵ��.
 �� int number=20; �� �ܼ��� number �� 20�� �����ϴ°� �ƴ� number �� �Ǹ��ϴ� ������ 20�� �־�� ��� �ǹ̰� �ȴ�.








*/

#pragma endregion


void main()
{
	
	/*cout << endl;
	//ȿ�����̴�.
	
	std::cout << std::endl;
	//�����ڰ� �������...

	//int num;
	//int num; // �Ѵ� �޸� �Ҵ��� ������... �ȵ�

	int EnemyAtt;

	A::B::C::EnemyAtt;
	ABC::EnemyAtt
	*/


	int TestNumA = true;
	int TestNumB = false;
	int TestReasuit = TestNumA + TestNumB;

	//1 ����
	cout << "booleran" << TestReasuit << endl;

	cout << endl;




	//���� �ʱ�ȭ -> �پ��� ��� ����    ������ ����.

	//A
	//�������� �Ҵ�
	int Num0;  // �޸� ������ �����ڰ� Ȯ���Ҽ� �ִ� 1ƽ�� ���� ����
	Num0 = 10;


	//���� �ʱ�ȭ      
	//B				����� �Բ� �� �ʱ�ȭ
	int Num1 = 3;
	int Num2 = 6;
	

	int Total;
	int Num3;
	int Num4;
	int Num5;
	int Num6, Num7, Num8;
	Num6 = Num7 = Num8 = 100;

	// sizeof() : Ű������ �� ������ ���� �Ǵ� �ڷ����� ũ�⸦ ����ϴ°��� �����ϴ�.
	cout << "���� ������ " << sizeof(4400000) << endl;
	cout << "���� ������ " << sizeof(2) << endl;
	cout << "true ������ " << sizeof(true) << endl;
	cout << "false ������ " << sizeof(false) << endl;


	cout << endl;



	//�Է�
	int nValue = 0;
	
	//C++
	cout << "�����Է�" << endl;
	cin >> nValue;

	cout << "���� �Է��� ����" << nValue << endl;

	cout << endl;

	//C
	printf("�����Է�: ");
	scanf_s( "%d", &nValue);

	cout << endl;



	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;

	cout << "C++ Short " << ValueA << ", " << sizeof(ValueA) << endl;
	cout << "C++ int " << ValueB << ", " << sizeof(ValueB) << endl;
	cout << "C++ long " << ValueC << ", " << sizeof(ValueC) << endl;
	cout << "C++ long long " << ValueD << ", " << sizeof(ValueD) << endl;



	printf("C��� short: %d,  %d  \n", ValueA, sizeof(ValueA));

	printf("C��� int: %d,  %d  \n", ValueB, sizeof(ValueB));

	printf("C��� long: %ld,  %ld  \n", ValueC, sizeof(ValueC));

	printf("C��� long long: %lld,  %lld  \n", ValueD, sizeof(ValueD));




	/*
	
	�� ���� ǥ���

	1. �밡����
	
	- ���� ������������ ������� �ڵ��� �Ҷ� ���� ���� ǥ���
	�� �̺����� � �������� �˱� ���Ͽ� ���� ����ϵ��� �տ� �� ���� ���°� ���ϴ� ���ڸ� ���δ�.

	EX : 
	int num			<->		nNum; 
	float ValueA	<->		fValueA;
	double ValueA	<->		dbValueA;
	char ValueA		<->		chValueA;
	bool ValueA		<->		bValueA;

	- ���� ����Ƽ�� �ڵ���Ŀ����� ���� ä����� �ʴ´�.   �𸮾󿡼� ���
		�� ��ü������ ����ϱ� ����



	2. ī���

	- ��ü�������� ����� �ڵ����� ��ȯ�� �Ǹ鼭 �������� ì�� ǥ���

	EX
	int playerselectiotnum		<->		playerSelectiotNum


	3. �Ľ�Į ���̽� 

	- ù���� �빮��  �𸮾��� �⺻ ǥ���
	EX
	int playerselectiotnum		<->		PlayerSelectiotNum


	4. ������ũ

	int playerselectiotnum		<->		Player_Selectiot_Num


	5.  ����   ������� ����

	int playerselectiotnum		<->		PlSelN

	



	�� ���� �̸��� Ư¡

	- �⺻������ ������ �̸��� ���ĺ�, ����, _�� �����ȴ�.
	- C���� ��ҹ��ڸ� �����ϸ� Num �� num�� �ٸ������̴�.

	a. ������ �̸��� ���ڷ� ���۵ɼ� ����.
	b. Ű���� ���� ���� �̸����� ����Ҽ� ����.
	c. �̸� ���̿� ������ ���� �� �� ����.

	int Num100;
	int Num101;
	int _Num102;
	
	int 6Num;
	int Num lock;
	int bool;
		
	*/


	

	//�����õ� �ʱ�ȭ
	srand(time(NULL));

	int numR;

	//0, 1, 2, 3, 4,
	numR = rand() % 5;    //rand() �ҿ��� ����
	cout << numR << endl;

	//RAND_MAX


	int weaponA = 0;



	//20 ~ 25
	weaponA = rand() % 6+20;
	cout << " ���� ���ݷ�: " << weaponA << endl;






}