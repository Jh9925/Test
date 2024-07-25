
#include<iostream>
using namespace std;






#pragma region enumClass
/*
 enum clss
- 같은 이름의 열거형 상수가 다른 열거형과 충돌하지 않는다.
- 타입의 안정성을 가질수 있다.  // 암시적 형변환 X

- 스코프라는 자신만의 영역이 있다.
*/

enum class Color
{
	RED, GREEN, WHITE
	
};

enum class SkillType
{
	Fire, Ice, Lighting

};

void UseSkill(SkillType Skill);


#pragma endregion

int main()
{

	// 범위 지정을 명확하게 해줘야 한다.
	Color color = Color::RED;
	//:: 범위를 알려주는 애 / 나 여기안에 있어!
	

	// 타입의 안정성을 보장하기 위해 암시적으로 형변한을 허용하지 않는다.
	// int c = Color::RED;
	// 명시적 형변환
	int a = static_cast<int>(Color::RED);



}

void UseSkill(SkillType Skill)
{
	switch (Skill)
	{
	case SkillType::Fire:
		break;
	case SkillType::Ice:
		break;
	case SkillType::Lighting:
		break;
	default:
		break;
	}
}

// 요약
/*
enum은 열거형 상수가 전역 스코프에 해당한다.  암묵적인 형변환 허용 -> 타입에 대한 안정성이 낮다.
enumClass는 열거형 자체의 스코프의 해당함. -> 범위지정 연산자 ( :: )가 필요.  암묵적인 형변환을 허용하지 않는다. -> 타입에 대한 안정성을 보장한다.


*/
