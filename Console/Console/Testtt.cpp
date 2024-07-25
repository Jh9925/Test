#include <iostream>
#include <string>
#include <time.h>

using namespace std;

// ī�� ����ü ����
struct Card
{
    char suit;   // ī�� ���� ('��', '��', '��', '?')
    int number;  // ī�� ���� (1���� 13����, A=1, J=11, Q=12, K=13)
    bool used;   // ī�� ��� ���� (true: ����, false: ��� �ȵ�)
};

// ī�� ���� �ִ� ũ��
const int MAX_CARDS = 52;

// ī�� ���� �ʱ�ȭ�ϴ� �Լ�
void initializeDeck(Card deck[]) {
    char suits[] = { '��', '��', '��', '?' };
    int index = 0;

    for (int s = 0; s < 4; ++s)
    {
        for (int num = 1; num <= 13; ++num)
        {
            deck[index].suit = suits[s];
            deck[index].number = num;
            deck[index].used = false;
            index++;

            cout << deck[index].suit << endl;
            cout << deck[index].number << endl;
            cout << deck[index].used << endl;



        }
    }
}