#include<iostream>
using namespace std;


/*
▶ 사용자정의 자료형

- 사용자가 필요의 의해서 정의를 내려 쓴다.
ㄴ 구조체, 공용체, 열거형, 클래스가 있다.


*/

#pragma region C_enum
/*
1. 열거형
 - 관련된 상수들을 하나의 그룹으로 묶는다. 
 - 코드의 가독성을 높이고 의미있는 이름을 부여할수 있다.
 - 암시적 형변환 가능

 */
 // 기본 선언 방법 중복안됨...
enum Color { Red, Green, White };
//            0     1      2

// 명시적인 값을 할당.
enum Direction { Left, Right =2 , Up, Down};
// 직접적으로 할당하지 않으면 0부터 자동으로 할당.
// 직접할당하는 경우 이후의 값들은 +1씩 자동 할당
#pragma endregion







int main()
{
	
	Color color = Red;

	if (color)
	{
		cout << " 빨강 " << endl;

	}
	else if (color == Green)
	{
		cout << " 녹색 " << endl;
	}


	Direction key = Left;

	switch (key)
	{
	case Left:
		cout << " 왼쪽으로 이동 " << endl;
		break;

	case Right:
		cout << " 오른쪽으로 이동 " << endl;
		break;

	case Up:
		break;

	case Down:
		break;

	default:
		break;
	}

	// 된다.!
	int red = Red;





}