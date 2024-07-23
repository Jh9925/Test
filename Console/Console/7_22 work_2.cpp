#include<iostream>
#include<time.h>
#include<Windows.h>

using namespace std;


// 함수를 연습해보자.


//string GetStringFunc(string strA, string strB);
//string OutputStringFunc(string strA);
//int cheakingString(string strA, string strB);
//
//
//string song_1(string strA, string strB);
//string song_2(string strA, string strB);
//string song_3(string strA, string strB);
//
//void main()
//{
//
//	/*int sResultA;
//	string sResultB = GetStringFunc("좋네", "좋아");
//	OutputStringFunc(sResultB);
//
//	sResultA = cheakingString(" 과제가 너무 재밌다.", " 과제가 너무 재밌다.");
//
//
//	cout << GetStringFunc("좋네", "좋아") << endl;
//
//	cout << sResultB << endl;
//
//	cout << OutputStringFunc(sResultB) << endl;
//
//	cout << cheakingString(" 과제가 너무 재밌다.", " 과제가 너무 재밌다.") << endl;*/
//
//	string sing_1 = song_1("동해물과 백두산이", "마르고 닳도록");
//	string sing_2 = song_2("하느님이 보우하사", "우리나라 만세.");
//
//	for (int i =0; i <5 ; i+=1 )
//	{
//
//		cout << OutputStringFunc(sing_1) << endl;
//		cout << OutputStringFunc(sing_2) << endl;
//		cout << '\n';
//	}
//
//
//}
//
//
//
//string OutputStringFunc(string str)
//{
//	return  str;
//}
//
//string GetStringFunc(string strA, string strB)
//{
//	
//	return strA + strB;
//	
//}
//
//int cheakingString(string strA, string strB)
//{
//	//같으면 1 / 다르면 0
//	return strA == strB;
//}
//
//string song_1(string strA, string strB)
//{
//	return strA + strB;
//	
//}
//
//string song_2(string strA, string strB)
//{
//	return strA + strB;
//	
//}
//
//string song_3(string strA, string strB)
//{
//	return strA + strB;
//}


//-이번주
//도전 과제1.문자열 관련 테스트
//
//- 펄어비스
//
//<주의 사항>
//C++언어로 풀어야 하고 빈칸을 알맞게 채워 넣으시오.
//C 런타임 라이브러리 / STL 등 기타 라이브러리 함수를 사용하면 안됩니다.
//특히 STL string를 사용시 바로 탈락
//그리고 해당 방법에 대해 왜 그렇게 작성했는지 짧은 주석을 넣어 주세요.
//
//문제.주어진 문자열을 단어 단위로 순서를 뒤집어서 출력하시오.
//<예>
//입력 값 : "Hello World this is Pearl Abyss"
//반환 값 : "Pearl Abyss is this World Hello"
//
//< 조건 >
//입력 문자열은 앞뒤 공백이 없다고 가정
//모든 단어는 공백 한 칸으로 구분된다고 가정
//
//void ReverseWords(char* output, int outputArraySize, const char* input)
//{
//
//
//	// 채우기
//
//}

// 작성이 끝나면 시간복잡도를 계산하는 수식 별도로 함수구현 동작방식과 왜 그렇게 했는지 작성했는지 기술






#include <iostream>

int main()
{
    cin >> 
    
    
    
    /*char s1[6] = "Hello";
    char s2[6] = "world";
    char s3[6] = "this";
    char s4[6] = "is";
    char s5[12] = "Pearl Abyss";*/

    printf("%s\n", s1);     // Hello: %s로 문자열 출력
    
    char s1[6];
    char s2[6];
    char s3[5];
    char s4[3];
    char s5[12];



    printf("문자열을 입력하세요: ");
    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);
    scanf("%s", s4);
    scanf("%s", s5);


    printf("%s\n, %s\n, %s\n, %s\n,%s\n", s5, s4,s3,s2,s1);



    return 0;
}