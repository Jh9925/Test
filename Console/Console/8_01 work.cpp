#include<iostream>

using namespace std;


/*
* 과제 3.
구조체를 활용한 학생정보 출력하기.
	ㄴ 학생정보를 출력하는 함수
	ㄴ 학생정보를 추가하는 함수

	void (&구조체)
	복사말고 참조방식으로 구현하기.
*/

// 저장가능 최대 학생 수
const int maxNum = 10;
int index = 0;



struct Student
{
	string name;
	int age = 0;
};

Student student[maxNum] = {} ;

// 학생 정보 입력
void inputInfo(Student(&student)[maxNum]);
// 학생 정보 출력
void outputInfo(Student(&student)[maxNum]);




void inputInfo(Student (& student)[maxNum])
{
	string inputName;
	int inputAge;
	cout << " 학생의 이름과 나이를 입력하세요 (최대 10명) " << endl;
	
	for (int i = index; i < maxNum; i++)
	{
		cout << " 이름과 나이 (입력완료시 q 입력) : " << endl;
		cin >> inputName;
		cin >> inputAge;
		
		// 입력종료 fin
	if (inputName == "q")
		{
			break;
		}
		else 
		{
			student[i].name = inputName;
			student[i].age = inputAge;
		}
		cout << i << " 번 입력완료 " << student[i].name << " , " << student[i].age << endl;
		index++;

	}
	
}

void outputInfo(Student(&student)[maxNum])
{
	for (int i = 0; i < index; i++)
	{
		cout << i << " 번학생 이름과 나이 : " << student[i].name << " , " << student[i].age << endl;

	}
}





int main()
{
	// Student student[maxNum] = { };
		
	// 입력함수 	 
	inputInfo(student);
		 
	// 출력함수
	outputInfo(student);
			
		/*Student* p_Stu;
		string* p_Name;
		int* p_Age;

		p_Stu = &student[0];
		p_Name = &student[0].name;
		p_Age = &student[0].age;
		
		cout << "0번째 학생 정보" << *p_Name << " , " << *p_Age << endl;
		cout << "0번째 학생 정보 주소" << p_Name << " , " << p_Age << endl;
		cout << "배열 주소" << p_Stu << endl;
		cout << "마지막 배열 주소" << &student[5] << endl;
		cout << "배열 주소" << (p_Stu + 1) << endl;		
		cout << "1번째 학생 정보 주소" << (p_Name + 2)  << " , " << *(p_Age + 2) << endl;
		*/

}