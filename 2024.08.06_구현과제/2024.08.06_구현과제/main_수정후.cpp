#include <iostream>
#include "Lupy.h"
#include "Zoro.h"
#include "Nami.h"
#include "Aaron.h"

using namespace std;

// �Ʊ� ĳ���͵��� ����
void AttackAll(Lupy* L1, Zoro* Z1, Nami* N1, Aaron* A1);
// �� �ݰ�
void TakeDamageAll(Lupy* L1, Zoro* Z1, Nami* N1, Aaron* A1);

// ���� ���� ���
void PrintStatus(Lupy* L1, Zoro* Z1, Nami* N1, Aaron* A1);


int main() 
{
    // ����
    Lupy* L1 = new Lupy("Lupy", 100, 20, 10);
    Zoro* Z1 = new Zoro("Zoro", 120, 30, 15);
    Nami* N1 = new Nami("Nami", 80, 15, 5);
    Aaron* A1 = new Aaron("Aaron", 200, 10, 10);

    // �̵�
    L1->Move();
    Z1->Move();
    N1->Move();
    cout << endl << endl;
    cout << "========================================" << endl;
    
    // �� ����
    PrintStatus(L1, Z1, N1, A1);

    // ���� ����
    while (true) {
        // ����
        AttackAll(L1, Z1, N1, A1);
                
        // ���� ���������� üũ
        if (A1->getHp() <= 0) {
            cout << "���� ����Ʈ�ȴ�!!! ���� �¸� " << endl;
            break;
        }

        // �� �ݰ�
        TakeDamageAll(L1, Z1, N1, A1);

        // ���ᰡ ���������� üũ
        if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0) {
            cout << "���ᰡ ��������... ���� �й� " << endl;
            break;
        }

        // ���� ���� ���
        PrintStatus(L1, Z1, N1, A1);
    }

    delete L1;
    delete Z1;
    delete N1;
    delete A1;

    return 0;
}
// �Ʊ� ĳ���͵��� ����
void AttackAll(Lupy* L1, Zoro* Z1, Nami* N1, Aaron* A1)
{
    L1->Attack();
    Z1->Attack();
    N1->Attack();
    A1->TakeDamage(L1->getAtk() + Z1->getAtk() + N1->getAtk());
    cout << "========================================" << endl;
    cout << endl << endl;
}

// �� �ݰ�
void TakeDamageAll(Lupy* L1, Zoro* Z1, Nami* N1, Aaron* A1)
{
    A1->Attack();
    L1->TakeDamage(A1->getAtk());
    Z1->TakeDamage(A1->getAtk());
    N1->TakeDamage(A1->getAtk());
}

// ���� ���� ���
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