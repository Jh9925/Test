#include<string>
#include <iostream>
#include<algorithm>
#include<functional>

using namespace std;


// ������ ������.

void main() {
	
	int i;
	int j;
	int ii;
	int jj;

	
	j = 1;
	jj = 1;
	i = 2;
	ii = 2;

	
	//���� 1. ������ ����

	// for ���
	//cout << " for ��� " << endl;
	/*for (i = 2 ; i < 10; i++)
	{
		
		
		for (j = 1; j < 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
			
		}
		cout << '\n';
	}*/

	// while ���  j �� 1�� �ʱ�ȭ�� �ʿ��ߴ�!!!
	//cout << " while ��� " << endl;
	/*while (i < 10)
	{

		while (j < 10)
		{
			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		}
		
		i++;
		j = 1;

	}*/

	//do ~ while ��� 
	
	/*do 
	{		
		do 
		{
			cout << ii << " * " << jj << " = " << ii * jj << endl;
			j++;
		} while (jj < 10);
		
		ii++;
		jj = 1;
		
	} while (ii < 10);*/


	int plus, miuns;
	int num11, num22;

	//���� 2. ������ Ȱ��
	// 
	// �ΰ��� ������ �޾Ƽ� ���� ����

	/*cout << "�ΰ��� �����Է�" << endl;
	cin >> num11;
	cin >> num22;

	cout << "�� ������ ���� ���: " << num11 + num22 << endl;
	cout << "�� ������ ���� ���: " << num11 - num22 << endl;

	cout << endl;
	cout << endl;*/

	// 3���� ������ �޾Ƽ� ������ ������ ���

	int num1, num2, num3;
	int reslut1;
	/*
	cout << "3���� �����Է�" << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;

	reslut1 = (num1 + num2) * (num3 + num1) % num1;

	cout << "������ : " << reslut1 << endl;*/

	// �Է¹��� �� ������ ���������� 
	// ��ԵǴ� ��� �������� ����ϴ� ���α׷�

	/*int num4, num5;
	cout << "�ΰ��� �����Է�" << endl;
	cin >> num4;
	cin >> num5;
	cout << "�� ������ ������ �� : " << num4 / num5 << endl;
	cout << "������ : " << num4 % num5 << endl;
	cout << '\n';*/

	//���� 3. �ݺ��� ���
	// - 1���� 20���� ����Ͻÿ�. (¦����)
	// - 20���� 1���� ����Ͻÿ�.
	
	// for / while / do ~ while�� ��� ���
	 
	// for�� ���
	/*for (int i=1; i <= 10; i++)
	{
		cout << i*2 << endl;
	}
	
	for (int i = 20; i > 0; i--)
	{
		cout << i << endl;
	}*/

	
	// while�� ���
	/*int i_1 = 1;
	int i_2 = 20;
	while (i_1 <= 10) 
	{
		cout << i_1 * 2 << endl;
		i_1++;
	}

	while (i_2 >= 1)
	{
		cout << i_2 << endl;
		i_2--;
	}*/
	
	// do while ���
	int j_1,j_2;
	j_1 = 1;
	j_2 = 20;
	/*
	do
	{
		cout << j_1 * 2 << endl;
		j_1++;
	} while (j_1 <= 10);

	do
	{
		cout << j_2 << endl;
		j_2--;
	} while (j_2 >= 1);*/

	// ���� 4. ���� �ϳ��� �Է� �޾� -5 �� �ݺ������� ������ �Ǵ� ���� �����.
	
	// �� ���� ���� : -15 �� �Ѿ�� Ż��
	// �� ���� : �Է¹޴� ���� - 10 ~10 ���̿� ���ڿ��� �ϰ� �̿ܿ� ���� �Է½� ���α׷� ���Ḧ ��Ų��.
	// while �� 2�� ����� -= �������� ��Ȯ�� ������ ���� ���� ++�����ڷ� �����ϱ����� 2�� while���� ����ؼ� ����
	// ���� ���縦 ���� do ~ while �� ���� ȿ�����̶�� �����ϰ� ��
	/*int k = 0;
	cout << "���� �Է�" << endl;
	cin >> k;
	int k_1 = 1, k_2 = 0;
	while (k<11 
	
	
	
	& k> -11)
	{
		while (k_2 > -10)
		{
			k_2 = k - k_1 * 5;
			k_1++;
			cout << "��� " << k_2 << endl;
		}
	}*/
	
	/*do �����������
	{
		cout << k << endl;
		k -= 5;
	} while (k >= -15 && k <= 5);
	*/
	


	// ���� 5.�����
	 
    //char star = '*';
	// �� ���
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < i+1; j++)
//		{
//			cout << "**";
//		}
//		cout << '\n';
//	}
//////==========================================
//	// �� �ϴ�
//	for (int i = 6; i > 1; i--)
//	{
//		for (int j = 0; j < i - 1; j++)
//		{
//			cout << "**";
//		}
//		cout << '\n';
//	}
//////===========================================
//	// �� �ϴ�
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < i  ; j++)
//		{
//			cout << "��";
//		}
//		for (int k = i; k < 5; k++)
//		{
//			cout << "**";
//		}
//		cout << '\n';
//	}
//////============================================
//	// �� ���
//	for (int i = 5; i > 0; i--)
//	{
//		cout << i;
//		for (int j = 0; j < i - 1; j++)
//		{
//			cout << "��";
//		}
//		for (int k = i; k <= 5 ; k++ )
//		{
//			cout << "**";
//		}
//		cout << '\n';
//	}

// ���� ����1. 
	for (int i = 0, line = 0, spaces = 0, stars = 0; i < 10; line = i < 5 ? i : 9 - i - 1, spaces = 5 - line - 1, stars = 2 * line + 1, i++)
		{
			std::cout << std::string(spaces, ' ') << std::string(stars, '*') << '\n';
		}








}



//while (j < 10)
//{
//	//cout << i << " * " << j << " = " << i*j << endl;
//	j++;
//}