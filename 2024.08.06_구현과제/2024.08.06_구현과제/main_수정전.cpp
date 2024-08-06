

/*3. 추상클래스를 활용한 3가지 캐릭터 클래스 구현하기.
- 기본스텟, 움직이는 함수, 공격하는 함수, 피격 함수
기타 등등
*/

#include "Lupy.h"
#include "Zoro.h"
#include "Nami.h"
#include "Aaron.h"

int main()
{
	Lupy* L1 = new Lupy("Lupy", 100, 20, 10);
	Zoro* Z1 = new Zoro("Zoro", 120, 30, 15);
	Nami* N1 = new Nami("Nami", 80, 15, 5);
	Aaron* A1 = new Aaron("Aaron", 200, 10, 10);

	//이동
	L1->Move();
	Z1->Move();
	N1->Move();
	cout << endl<<endl;
	cout << "========================================" << endl;
	cout << endl << endl;
	
	// 적 만남
	L1->PrintInfo();
	Z1->PrintInfo();
	N1->PrintInfo();
	A1->PrintInfo();
	cout << endl << endl;
	cout << "========================================" << endl;
	cout << endl << endl;

	// 전투
	while (true)
	{
		//===================================================================
		// 공격
		L1->Attack();
		Z1->Attack();
		N1->Attack();
		A1->TakeDamage(L1->getAtk() + Z1->getAtk() + N1->getAtk());

		if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0)
		{
			cout << "동료가 쓰러졌다...  전투 패배 " << endl;
			break;
		}
		if (A1->getHp() <= 0)
		{
			cout << "적을 쓰러트렸다!!!  전투 승리 " << endl;
			break;
		}
		//===================================================================
		//적 반격

		A1->Attack();
		L1->TakeDamage(A1->getAtk());

		cout << endl << endl;
		L1->PrintInfo();
		Z1->PrintInfo();
		N1->PrintInfo();
		A1->PrintInfo();
		cout << "========================================" << endl;
		cout << endl << endl;

		if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0)
		{
			cout << "동료가 쓰러졌다...  전투 패배 " << endl;
			break;
		}
		if (A1->getHp() <= 0)
		{
			cout << "적을 쓰러트렸다!!!  전투 승리 " << endl;
			break;
		}
		//===================================================================

		// 공격
		L1->Attack();
		Z1->Attack();
		N1->Attack();
		A1->TakeDamage(L1->getAtk() + Z1->getAtk() + N1->getAtk());

		
		if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0)
		{
			cout << "동료가 쓰러졌다...  전투 패배 " << endl;
			break;
		}
		if (A1->getHp() <= 0)
		{
			cout << "적을 쓰러트렸다!!!  전투 승리 " << endl;
			break;
		}
		//===================================================================
		//적 반격
		A1->Attack();
		Z1->TakeDamage(A1->getAtk());

		cout << endl << endl;
		L1->PrintInfo();
		Z1->PrintInfo();
		N1->PrintInfo();
		A1->PrintInfo();
		cout << "========================================" << endl;
		cout << endl << endl;
		
		if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0)
		{
			cout << "동료가 쓰러졌다...  전투 패배 " << endl;
			break;
		}
		if (A1->getHp() <= 0)
		{
			cout << "적을 쓰러트렸다!!!  전투 승리 " << endl;
			break;
		}
		
		//===================================================================

		// 공격
		L1->Attack();
		Z1->Attack();
		N1->Attack();
		A1->TakeDamage(L1->getAtk() + Z1->getAtk() + N1->getAtk());

		if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0)
		{
			cout << "동료가 쓰러졌다...  전투 패배 " << endl;
			break;
		}
		if (A1->getHp() <= 0)
		{
			cout << "적을 쓰러트렸다!!!  전투 승리 " << endl;
			break;
		}
		//===================================================================
		//적 반격

		A1->Attack();
		N1->TakeDamage(A1->getAtk());

		cout << endl << endl;
		L1->PrintInfo();
		Z1->PrintInfo();
		N1->PrintInfo();
		A1->PrintInfo();
		cout << "========================================" << endl;
		cout << endl << endl;

		if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0)
		{
			cout << "동료가 쓰러졌다...  전투 패배 " << endl;
			break;
		}
		if (A1->getHp() <= 0)
		{
			cout << "적을 쓰러트렸다!!!  전투 승리 " << endl;
			break;
		}
		//===================================================================
	}

	// 초기화
	delete L1;
	delete Z1;
	delete N1;
	delete A1;

	return 0;



}


