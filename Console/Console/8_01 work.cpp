#include<iostream>

using namespace std;


/*
* ���� 3.
����ü�� Ȱ���� �л����� ����ϱ�.
	�� �л������� ����ϴ� �Լ�
	�� �л������� �߰��ϴ� �Լ�

	void (&����ü)
	���縻�� ����������� �����ϱ�.
*/

// ���尡�� �ִ� �л� ��
const int maxNum = 10;
int index = 0;



struct Student
{
	string name;
	int age = 0;
};

Student student[maxNum] = {} ;

// �л� ���� �Է�
void inputInfo(Student(&student)[maxNum]);
// �л� ���� ���
void outputInfo(Student(&student)[maxNum]);




void inputInfo(Student (& student)[maxNum])
{
	string inputName;
	int inputAge;
	cout << " �л��� �̸��� ���̸� �Է��ϼ��� (�ִ� 10��) " << endl;
	
	for (int i = index; i < maxNum; i++)
	{
		cout << " �̸��� ���� (�Է¿Ϸ�� q �Է�) : " << endl;
		cin >> inputName;
		cin >> inputAge;
		
		// �Է����� fin
	if (inputName == "q")
		{
			break;
		}
		else 
		{
			student[i].name = inputName;
			student[i].age = inputAge;
		}
		cout << i << " �� �Է¿Ϸ� " << student[i].name << " , " << student[i].age << endl;
		index++;

	}
	
}

void outputInfo(Student(&student)[maxNum])
{
	for (int i = 0; i < index; i++)
	{
		cout << i << " ���л� �̸��� ���� : " << student[i].name << " , " << student[i].age << endl;

	}
}





int main()
{
	// Student student[maxNum] = { };
		
	// �Է��Լ� 	 
	inputInfo(student);
		 
	// ����Լ�
	outputInfo(student);
			
		/*Student* p_Stu;
		string* p_Name;
		int* p_Age;

		p_Stu = &student[0];
		p_Name = &student[0].name;
		p_Age = &student[0].age;
		
		cout << "0��° �л� ����" << *p_Name << " , " << *p_Age << endl;
		cout << "0��° �л� ���� �ּ�" << p_Name << " , " << p_Age << endl;
		cout << "�迭 �ּ�" << p_Stu << endl;
		cout << "������ �迭 �ּ�" << &student[5] << endl;
		cout << "�迭 �ּ�" << (p_Stu + 1) << endl;		
		cout << "1��° �л� ���� �ּ�" << (p_Name + 2)  << " , " << *(p_Age + 2) << endl;
		*/

}