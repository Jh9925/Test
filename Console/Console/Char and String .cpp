#include<iostream>
using namespace std;

int main()
{

	//char c = 'a';
	//// '\0'
	//char h[4] = "��";
	//// ���ڿ� �������� ������ ��\0 ���ڰ� ��


	//// ���� �迭
	//char str[] = "Hello World";
	//cout << str << endl;
	//// ������ �ι��� ���� 12
	//cout << sizeof(str) << endl;



	char str[50];

	// ���ڿ� ����.
	strcpy_s(str, "Hello World");
	cout << str << endl;

	// ���ڿ� ���� ���
	cout << strlen(str) << endl;

	char str1[] = "Hello";

	for (int i = 0; str1[i] != '\0'; ++i)
	{
		cout << "����" << i << ": "<< str1[i] << endl;
	}

	 // strcat_s    ���ڿ��� ���̴� �Լ�   ��������ش�.

	/*char str3[50] = "Hello, ";
	char str4[] = "world ";

	strcat_s(str3, str4);
	cout << str3 << endl;*/


	char str11[] = "Hello";
	char str22[] = "Hello";
	char str33[] = "world";

	// �ΰ��� ���ڿ��� �����ش�. strcmp 0 �̸� �� ���ڿ� ����  ���ڰ� �ٸ��� �ι����� �ƽ�Ű���� ���̸� ����  ���ڿ��� ���� �����ϸ� �񱳸� ����
	int result1 = strcmp(str11, str22);
	int result2 = strcmp(str11, str33);

	cout << "str11, str22 ��� :" << result1 << endl; // 0	-> �� ���ڿ��� ����
 	cout << "str11, str33 ��� :" << result2 << endl; // -1	-> ù��°���ڿ��� �۰ų� �ڿ� ������ ���� 






}