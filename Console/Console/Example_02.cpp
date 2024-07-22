#include<iostream>
#include<time.h>


//편하다  -> 무겁다.
using namespace std;

//using  지시자: 지정된 네임 스페이스의 모든 명칭을 이 선언이 있는 영역을 가져와 소속 지정없이 사용하겠다.



using std::cin;
using std::cout;
using std::endl;



namespace A
{
	namespace B
	{
		namespace C
		{
			int EnemyAtt;  // 폐쇄성 캡슐화

		}

	}

}

namespace ABC = A::B::C;



#pragma region 자료형 + 변수 선언
/*
▶ 자료형 
- 변수의 종류를 의미하며 기초 자료형 (Data type) 이다.

● 변수란?

- 변할수 있는 데이터, 숫자
- 컴퓨터로 하여금 값을 저장할수 있는 메모리 공간에 붙는 이름
- 변수를 이용하면 특정값을 저장후 해당값을 이용한 여러가지 연산이 가능하다. ( 혹은 처리할수 있다.)



▶자료형의 종류 (C/C++)

- 정수형 (소수점이 없는 수를 표현하기 위한 자료형)
- 실수형 (소수전이 존재하는 수를 표현하기위한 자료형)
- 문자형 (문자를 표현하기위한 자료형)
- 논리형 (참 / 거짓)

● 자료형의 종류 (정수형)
 
- short		(2바이트) 

- int		(4바이트) 43억
!!!★!!! 
- long		(4 ~ 8바이트) 확장성 고려 32 비트일때 4  /  64일때 8

- longlong	(8바이트)

● 실수형

- float		약 (4바이트) 8자리 0.0000000
- double	약 (8바이트) 14자리에서16자리

※ decimal	(16바이트)
  사용하지말자..
  소숫점 29자리

● 문자형

- char (1바이트)
	

● 논리형

- bool	(1바이트)  ->  0 (거짓) / 1 (참) 을 나타냄
ㄴ bool 자료형은 정수가 와야할 위치에 오게되면 각각 1과 0으로 반환이 될뿐 각각 정수를 의미하는게 아니다.



- 기본적으로 c 언어는 논리형에 해당하는 참/ 거짓이라는 자료형이 별도로 존재하지 않았다.
ㄴ 그렇기 때문에 정수 0을 거짓 1 / 0을 제외한 정수는 참으로 인지 하였다.
ㄴ 현재는 C언어에도 boolㅈ료형이 존재하니 햇갈리지 말자.

- C++ 로 넘어 오면서 참 또는 거짓을 나타내는 키워드를 추가했고 이제 true / flase 이다.

-그리고 C / C++ 자료형은 기본적으로 음수를 표현하는 것이 가능하지만 경우에 따라서 음수를 표현하지 않는 대신에 양수를 
 좀더 크게 표현하는 방법이 있다. (signed (음) / unsigned (양))


 ▶ 자료형의 크기

 1. 정수형

  자료형 타입				 크기					범위
  short						2바이트				-32768~32767
  unsighedshort				2바이트				0 ~ 65535
  int						4바이트				-21억 ~ 21억
  unsighedint				4바이트				약 43억
  long						4바이트 (32)			-21억 ~ 21억


 2. 실수형
 floar						4바이트				소수점을 담는다.
 double						8바이트				소수점을 담는다.


 3. 문자형
 char						1바이트				정수를 담는다. (문자)
 unsiginedchar				1바이트				양의 정수를 담는다. (문자)


 4. 논리형
 bool						1바이트				0 거짓 1 참


 ▶ 변수 선언
 - 변수 선언이란?
 ㄴ 값을 저장할수 있는 메모리 공간에 이름을 정의하는걸 뜻한다.

 EX : 기본 형식 -> 변수 형태(종류) 변수명
 ㄴ int number;

 EX : int number = 20;
 ㄴ 변수의 선언으로 인해서 number 라는 이름으로 메모리 공간이 할당됨.
 ㄴ int number=20; 은 단순히 number 에 20을 저장하는게 아닌 number 가 의마하는 공간에 20을 넣어라 라는 의미가 된다.








*/

#pragma endregion


void main()
{
	
	/*cout << endl;
	//효율적이다.
	
	std::cout << std::endl;
	//개발자가 고통받음...

	//int num;
	//int num; // 둘다 메모리 할당은 되지만... 안됨

	int EnemyAtt;

	A::B::C::EnemyAtt;
	ABC::EnemyAtt
	*/


	int TestNumA = true;
	int TestNumB = false;
	int TestReasuit = TestNumA + TestNumB;

	//1 나옴
	cout << "booleran" << TestReasuit << endl;

	cout << endl;




	//변수 초기화 -> 다양한 방법 존재    정답은 없다.

	//A
	//선언이후 할당
	int Num0;  // 메모리 선언후 개발자가 확인할수 있는 1틱을 벌수 있음
	Num0 = 10;


	//변수 초기화      
	//B				선언과 함께 값 초기화
	int Num1 = 3;
	int Num2 = 6;
	

	int Total;
	int Num3;
	int Num4;
	int Num5;
	int Num6, Num7, Num8;
	Num6 = Num7 = Num8 = 100;

	// sizeof() : 키워드의 한 종류로 변수 또는 자료형의 크기를 계산하는것이 가능하다.
	cout << "정수 사이즈 " << sizeof(4400000) << endl;
	cout << "정수 사이즈 " << sizeof(2) << endl;
	cout << "true 사이즈 " << sizeof(true) << endl;
	cout << "false 사이즈 " << sizeof(false) << endl;


	cout << endl;



	//입력
	int nValue = 0;
	
	//C++
	cout << "숫자입력" << endl;
	cin >> nValue;

	cout << "내가 입력한 숫자" << nValue << endl;

	cout << endl;

	//C
	printf("정수입력: ");
	scanf_s( "%d", &nValue);

	cout << endl;



	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;

	cout << "C++ Short " << ValueA << ", " << sizeof(ValueA) << endl;
	cout << "C++ int " << ValueB << ", " << sizeof(ValueB) << endl;
	cout << "C++ long " << ValueC << ", " << sizeof(ValueC) << endl;
	cout << "C++ long long " << ValueD << ", " << sizeof(ValueD) << endl;



	printf("C언어 short: %d,  %d  \n", ValueA, sizeof(ValueA));

	printf("C언어 int: %d,  %d  \n", ValueB, sizeof(ValueB));

	printf("C언어 long: %ld,  %ld  \n", ValueC, sizeof(ValueC));

	printf("C언어 long long: %lld,  %lld  \n", ValueD, sizeof(ValueD));




	/*
	
	▶ 변수 표기법

	1. 헝가리안
	
	- 예전 절차지행적인 방식으로 코딩을 할때 많이 사용된 표기법
	ㄴ 이변수가 어떤 변수인지 알기 위하여 서로 약속하듯이 앞에 그 변수 형태가 뜻하는 약자를 붙인다.

	EX : 
	int num			<->		nNum; 
	float ValueA	<->		fValueA;
	double ValueA	<->		dbValueA;
	char ValueA		<->		chValueA;
	bool ValueA		<->		bValueA;

	- 현재 네이티브 코딩방식에서는 거의 채용되지 않는다.   언리얼에서 사용
		ㄴ 객체지향을 사용하기 때문



	2. 카멜식

	- 객체지향적인 방식의 코딩으로 전환이 되면서 가독성을 챙긴 표기법

	EX
	int playerselectiotnum		<->		playerSelectiotNum


	3. 파스칼 케이스 

	- 첫문자 대문자  언리얼의 기본 표기법
	EX
	int playerselectiotnum		<->		PlayerSelectiotNum


	4. 스네이크

	int playerselectiotnum		<->		Player_Selectiot_Num


	5.  레스   사용하지 말자

	int playerselectiotnum		<->		PlSelN

	



	● 변수 이름의 특징

	- 기본적으로 변수의 이름은 알파벳, 숫자, _로 구성된다.
	- C언어는 대소문자를 구분하며 Num 과 num은 다른변수이다.

	a. 변수의 이름은 숫자로 시작될수 없다.
	b. 키워드 역시 변수 이름으로 사용할수 없다.
	c. 이름 사이에 공백이 삽입 될 수 없다.

	int Num100;
	int Num101;
	int _Num102;
	
	int 6Num;
	int Num lock;
	int bool;
		
	*/


	

	//랜덤시드 초기화
	srand(time(NULL));

	int numR;

	//0, 1, 2, 3, 4,
	numR = rand() % 5;    //rand() 불완전 난수
	cout << numR << endl;

	//RAND_MAX


	int weaponA = 0;



	//20 ~ 25
	weaponA = rand() % 6+20;
	cout << " 무기 공격력: " << weaponA << endl;






}