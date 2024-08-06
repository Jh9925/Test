#include <iostream>
#include "Lupy.h"
#include "Zoro.h"
#include "Nami.h"
#include "Aaron.h"

using namespace std;

// 아군 캐릭터들의 공격
void AttackAll(Lupy* L1, Zoro* Z1, Nami* N1, Aaron* A1);
// 적 반격
void TakeDamageAll(Lupy* L1, Zoro* Z1, Nami* N1, Aaron* A1);

// 전투 상태 출력
void PrintStatus(Lupy* L1, Zoro* Z1, Nami* N1, Aaron* A1);


int main() 
{
    // 스텟
    Lupy* L1 = new Lupy("Lupy", 100, 20, 10);
    Zoro* Z1 = new Zoro("Zoro", 120, 30, 15);
    Nami* N1 = new Nami("Nami", 80, 15, 5);
    Aaron* A1 = new Aaron("Aaron", 200, 10, 10);

    // 이동
    L1->Move();
    Z1->Move();
    N1->Move();
    cout << endl << endl;
    cout << "========================================" << endl;
    
    // 적 만남
    PrintStatus(L1, Z1, N1, A1);

    // 전투 루프
    while (true) {
        // 공격
        AttackAll(L1, Z1, N1, A1);
                
        // 적이 쓰러졌는지 체크
        if (A1->getHp() <= 0) {
            cout << "적을 쓰러트렸다!!! 전투 승리 " << endl;
            break;
        }

        // 적 반격
        TakeDamageAll(L1, Z1, N1, A1);

        // 동료가 쓰러졌는지 체크
        if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0) {
            cout << "동료가 쓰러졌다... 전투 패배 " << endl;
            break;
        }

        // 전투 상태 출력
        PrintStatus(L1, Z1, N1, A1);
    }

    delete L1;
    delete Z1;
    delete N1;
    delete A1;

    return 0;
}
// 아군 캐릭터들의 공격
void AttackAll(Lupy* L1, Zoro* Z1, Nami* N1, Aaron* A1)
{
    L1->Attack();
    Z1->Attack();
    N1->Attack();
    A1->TakeDamage(L1->getAtk() + Z1->getAtk() + N1->getAtk());
    cout << "========================================" << endl;
    cout << endl << endl;
}

// 적 반격
void TakeDamageAll(Lupy* L1, Zoro* Z1, Nami* N1, Aaron* A1)
{
    A1->Attack();
    L1->TakeDamage(A1->getAtk());
    Z1->TakeDamage(A1->getAtk());
    N1->TakeDamage(A1->getAtk());
}

// 전투 상태 출력
void PrintStatus(Lupy* L1, Zoro* Z1, Nami* N1, Aaron* A1)
{
    cout << endl << endl;
    L1->PrintInfo();
    Z1->PrintInfo();
    N1->PrintInfo();
    A1->PrintInfo();
    cout << "========================================" << endl;
    cout << endl << endl;
}