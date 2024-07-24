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
	// 문자열을 다루는 String
	// 끝에 널문자가 들어가지 않는다.
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
	cout << " 문자열의 길이 " << str.length() << endl;
	//                              size()

}

void StringCopy(const string src)
{
	string dest = src;
	cout << "복사된 문자열 " << dest << endl;
}

void StringConnection()
{
	string str1 = "Hello, ";
	string str2 = "Hello";
	str1 += str2; // 문자열을 연결
	// 스트링 클래스내부에서 연산자가 오버로딩 되어있기 때문에 작동한다.
	cout << "연결된 문자열" << str1 << endl;
}

void StringCompara()
{
	// 비교
	string str1 = "Hello, ";
	string str2 = "Hello, ";
	string str3 = "world";
	if (str1 == str2) cout << "문자열이 같다" << endl;
	if (str1 < str3) cout << "str1 이 str3보다 앞에 있음" << endl;

}

void StringSubstr()
{
	// 원본문자열의 특정시작위치에서부터 지정한 위치만큼 출력. world 만 나옴.
	string str = "Hello, World";
	string subStr = str.substr(7, 5);
	cout << "문자열 : " << subStr << endl;

}

void StringReplace()
{
	// 문자열의 특정위치에서 지정된 부분을 다른문자로 대체
	string str = "Hello, World";
	str.replace(7, 5, "C++");
	cout << "문자열 : " << str << endl;
}

void StringErase()
{
	// 시작위치와 길이를 받고 지워준다.
	string str = "Hello, World";
	str.erase(5, 7);
	cout << "문자열 : " << str << endl;

	// str.erase();   다지운다.

}

// 구조체나 클래스는 & 붙이자
// 안정성을 보장하기 위해 const 붙이는게 좋다.

void StringCopy()
{
	string str = "Hello world";
	string dest = str; // 복사
	cout << "복사된 문자열 " << dest << endl;

}
