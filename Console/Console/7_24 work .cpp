#include<iostream>

using namespace std;
/* 과제 1.

1. 함수 오버로딩을 활용한 캐릭터 스킬 만들기.

ex)

- 스킬 이름만 입력받아 사용하는 함수
- 스킬 이름이랑 데미지 값을 입력받아 스킬을 사용하는 함수
- 스킬이름, 데미지, 크리티컬 확률
- 스킬이름, 데미지, 크리티컬 확률, 피격거리

2.  사용자가 입력한 양의 정수의 각 자릿수의 합을 구하는 로직을 구현.
ex)

- 입력 18324
- 1+8+3+2+4 = 18
- 입력 3849
- 24
//


*/


int Skill(string sName);
int Skill(string sName, int sDam);
int Skill(string sName, int sDam, int sCri);
int Skill(string sName, int sDam, int sCri, int sType);

int subZari(int n);

string sName1 = "강타";
string sName2 = "난격";



int main()
{
	//// 정수 입력후 각 자리 정수 합 구하는 함수
	//int i;
	//cout << " 정수를 입력해 주세요 " << endl;
	//cin >> i;
	//cout << " 각 자리 정수의 합계 : " << subZari(i) << endl;
	
	string sName;
	int sDam = 0; 
	int sCri = 0;
	int sType = 0;
	cout << " 사용하고 싶은 스킬을 입력하세요. " << endl;
	cout << " 강타 | 난격 " << endl;
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

// 스킬 이름만 입력
int Skill(string sName)
{
	
	if (sName == sName1)
	{
		cout << "강 타 ! " << endl;
	}
	else if (sName == sName2)
	{
		cout << "난 격 ! " << endl;
	}
	return 0;

}

// 스킬 이름과 데미지
int Skill(string sName, int sDam)
{
	

	if (sName == sName1)
	{
		cout << "강타 ! 데미지 "<< sDam << endl;


	}
	else if (sName == sName2)
	{
		cout << "난 격 ! 데미지 " << sDam << endl;

	}
	return 0;

}

// 스킬이름 데미지 크리확률
int Skill(string sName, int sDam, int sCri)
{
	if (sName == sName1)
	{
		cout << "강타 ! 데미지 " << sDam<< "크리 확률 "<< sCri << endl;


	}
	else if (sName == sName2)
	{
		cout << "난 격 ! 데미지 " << sDam << "크리 확률 " << sCri << endl;

	}
	return 0;
}

// 스킬이름 데미지 크리확률 속성추가 데미지
int Skill(string sName, int sDam, int sCri, int sType)
{
	
	if (sName == sName1)
	{
		cout << "강타 ! 데미지 " << sDam << "크리 확률 " << sCri << " 속성추가 데미지 "<< sType << endl;


	}
	else if (sName == sName2)
	{
		cout << "난 격 ! 데미지 " << sDam << "크리 확률 " << sCri << " 속성추가 데미지 " << sType << endl;

	}
	return 0;
}


// 정수 입력후 각 자리 정수 합 구하는 함수
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


