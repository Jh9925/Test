
#include<iostream>
using namespace std;






#pragma region enumClass
/*
 enum clss
- ���� �̸��� ������ ����� �ٸ� �������� �浹���� �ʴ´�.
- Ÿ���� �������� ������ �ִ�.  // �Ͻ��� ����ȯ X

- ��������� �ڽŸ��� ������ �ִ�.
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

	// ���� ������ ��Ȯ�ϰ� ����� �Ѵ�.
	Color color = Color::RED;
	//:: ������ �˷��ִ� �� / �� ����ȿ� �־�!
	

	// Ÿ���� �������� �����ϱ� ���� �Ͻ������� �������� ������� �ʴ´�.
	// int c = Color::RED;
	// ����� ����ȯ
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

// ���
/*
enum�� ������ ����� ���� �������� �ش��Ѵ�.  �Ϲ����� ����ȯ ��� -> Ÿ�Կ� ���� �������� ����.
enumClass�� ������ ��ü�� �������� �ش���. -> �������� ������ ( :: )�� �ʿ�.  �Ϲ����� ����ȯ�� ������� �ʴ´�. -> Ÿ�Կ� ���� �������� �����Ѵ�.


*/
