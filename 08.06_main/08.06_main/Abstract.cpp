/*
※ 순수 가상함수
virtual void Move()const = 0;
클래스 내에서 선언만 하고 구현안함.


*/
#include "Player.h"
int main()
{
	Player* p = new Player(" ", 200);
	p->Attack();
	p->TakeDamage(10);
	delete p;

}


/*
조사
1. OOP 특성조사 -> 파일로 제출할것.(pdf 로)

2. 상호참조 오류해결을 위해 클래스 전방선언

3. 추상클래스를 활용한 3가지 캐릭터 클래스 구현하기.
- 기본스텟, 움직이는 함수, 공격하는 함수, 피격 함수 
	기타 등등


*/