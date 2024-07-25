#include<iostream>
using namespace std;

int main()
{

	//char c = 'a';
	//// '\0'
	//char h[4] = "ㅁ";
	//// 문자열 마지막에 무조건 널\0 문자가 들어감


	//// 문자 배열
	//char str[] = "Hello World";
	//cout << str << endl;
	//// 마지막 널문자 까지 12
	//cout << sizeof(str) << endl;



	char str[50];

	// 문자열 복사.
	strcpy_s(str, "Hello World");
	cout << str << endl;

	// 문자열 길이 출력
	cout << strlen(str) << endl;

	char str1[] = "Hello";

	for (int i = 0; str1[i] != '\0'; ++i)
	{
		cout << "문자" << i << ": "<< str1[i] << endl;
	}

	 // strcat_s    문자열을 붙이는 함수   연결시켜준다.

	/*char str3[50] = "Hello, ";
	char str4[] = "world ";

	strcat_s(str3, str4);
	cout << str3 << endl;*/


	char str11[] = "Hello";
	char str22[] = "Hello";
	char str33[] = "world";

	// 두개의 문자열을 비교해준다. strcmp 0 이면 두 문자열 동일  문자가 다르면 두문자의 아스키값의 차이를 리턴  문자열에 끝에 도달하면 비교를 종료
	int result1 = strcmp(str11, str22);
	int result2 = strcmp(str11, str33);

	cout << "str11, str22 결과 :" << result1 << endl; // 0	-> 두 문자열이 동일
 	cout << "str11, str33 결과 :" << result2 << endl; // -1	-> 첫번째문자열이 작거나 뒤에 있을때 음수 






}