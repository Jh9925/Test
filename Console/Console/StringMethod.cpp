#include<iostream>
using namespace std;

// Srting class

void StringLength();
void StringCopy();
void StringCopy(string src);
void StringConnection();
void StringCompara();
void StringSubstr();
void StringReplace();
void StringErase();





int main()
{
	// ���ڿ��� �ٷ�� String
	// ���� �ι��ڰ� ���� �ʴ´�.
	//string s;

	
	StringConnection();
	StringCompara();
	StringSubstr();
	StringReplace();
	StringErase();





}

void StringLength()
{
	string str = "Hello world";
	cout << " ���ڿ��� ���� " << str.length() << endl;
	//                              size()

}

void StringCopy(const string src)
{
	string dest = src;
	cout << "����� ���ڿ� " << dest << endl;
}

void StringConnection()
{
	string str1 = "Hello, ";
	string str2 = "Hello";
	str1 += str2; // ���ڿ��� ����
	// ��Ʈ�� Ŭ�������ο��� �����ڰ� �����ε� �Ǿ��ֱ� ������ �۵��Ѵ�.
	cout << "����� ���ڿ�" << str1 << endl;
}

void StringCompara()
{
	// ��
	string str1 = "Hello, ";
	string str2 = "Hello, ";
	string str3 = "world";
	if (str1 == str2) cout << "���ڿ��� ����" << endl;
	if (str1 < str3) cout << "str1 �� str3���� �տ� ����" << endl;

}

void StringSubstr()
{
	// �������ڿ��� Ư��������ġ�������� ������ ��ġ��ŭ ���. world �� ����.
	string str = "Hello, World";
	string subStr = str.substr(7, 5);
	cout << "���ڿ� : " << subStr << endl;

}

void StringReplace()
{
	// ���ڿ��� Ư����ġ���� ������ �κ��� �ٸ����ڷ� ��ü
	string str = "Hello, World";
	str.replace(7, 5, "C++");
	cout << "���ڿ� : " << str << endl;
}

void StringErase()
{
	// ������ġ�� ���̸� �ް� �����ش�.
	string str = "Hello, World";
	str.erase(5, 7);
	cout << "���ڿ� : " << str << endl;

	// str.erase();   �������.

}

// ����ü�� Ŭ������ & ������
// �������� �����ϱ� ���� const ���̴°� ����.

void StringCopy()
{
	string str = "Hello world";
	string dest = str; // ����
	cout << "����� ���ڿ� " << dest << endl;

}
