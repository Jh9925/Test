#include<iostream>

using namespace std;
/* ���� 1.

1. �Լ� �����ε��� Ȱ���� ĳ���� ��ų �����.

ex)

- ��ų �̸��� �Է¹޾� ����ϴ� �Լ�
- ��ų �̸��̶� ������ ���� �Է¹޾� ��ų�� ����ϴ� �Լ�
- ��ų�̸�, ������, ũ��Ƽ�� Ȯ��
- ��ų�̸�, ������, ũ��Ƽ�� Ȯ��, �ǰݰŸ�

2.  ����ڰ� �Է��� ���� ������ �� �ڸ����� ���� ���ϴ� ������ ����.
ex)

- �Է� 18324
- 1+8+3+2+4 = 18
- �Է� 3849
- 24
//


*/


int Skill(string sName);
int Skill(string sName, int sDam);
int Skill(string sName, int sDam, int sCri);
int Skill(string sName, int sDam, int sCri, int sType);

int subZari(int n);

string sName1 = "��Ÿ";
string sName2 = "����";



int main()
{
	//// ���� �Է��� �� �ڸ� ���� �� ���ϴ� �Լ�
	//int i;
	//cout << " ������ �Է��� �ּ��� " << endl;
	//cin >> i;
	//cout << " �� �ڸ� ������ �հ� : " << subZari(i) << endl;
	
	string sName;
	int sDam = 0; 
	int sCri = 0;
	int sType = 0;
	cout << " ����ϰ� ���� ��ų�� �Է��ϼ���. " << endl;
	cout << " ��Ÿ | ���� " << endl;
	cin >> sName >> sDam >> sCri >> sType;
	//cin >> sName ,sDam, sCri, sType;
	// cin >> sDam;
	// cin >> sCri;
	// cin >> sType;

	if (sDam != 0)
	{
		Skill(sName, sDam);
		if (sCri != 0)
		{
			Skill(sName, sDam, sCri);
			if (sType != 0)
			{
				Skill(sName, sDam, sCri, sType);
			}
		}
	}
	else
	{
		Skill(sName);
	}
	

}

// ��ų �̸��� �Է�
int Skill(string sName)
{
	
	if (sName == sName1)
	{
		cout << "�� Ÿ ! " << endl;
	}
	else if (sName == sName2)
	{
		cout << "�� �� ! " << endl;
	}
	return 0;

}

// ��ų �̸��� ������
int Skill(string sName, int sDam)
{
	

	if (sName == sName1)
	{
		cout << "��Ÿ ! ������ "<< sDam << endl;


	}
	else if (sName == sName2)
	{
		cout << "�� �� ! ������ " << sDam << endl;

	}
	return 0;

}

// ��ų�̸� ������ ũ��Ȯ��
int Skill(string sName, int sDam, int sCri)
{
	if (sName == sName1)
	{
		cout << "��Ÿ ! ������ " << sDam<< "ũ�� Ȯ�� "<< sCri << endl;


	}
	else if (sName == sName2)
	{
		cout << "�� �� ! ������ " << sDam << "ũ�� Ȯ�� " << sCri << endl;

	}
	return 0;
}

// ��ų�̸� ������ ũ��Ȯ�� �Ӽ��߰� ������
int Skill(string sName, int sDam, int sCri, int sType)
{
	
	if (sName == sName1)
	{
		cout << "��Ÿ ! ������ " << sDam << "ũ�� Ȯ�� " << sCri << " �Ӽ��߰� ������ "<< sType << endl;


	}
	else if (sName == sName2)
	{
		cout << "�� �� ! ������ " << sDam << "ũ�� Ȯ�� " << sCri << " �Ӽ��߰� ������ " << sType << endl;

	}
	return 0;
}


// ���� �Է��� �� �ڸ� ���� �� ���ϴ� �Լ�
int subZari(int n)
	
{
		int sub = 0;

		while (n > 0) 
		{
			sub += n % 10;
			n = n / 10;
		}

		return sub;
	
}


