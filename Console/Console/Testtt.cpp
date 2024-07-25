#include <iostream>
#include <string>
#include <time.h>

using namespace std;

// 카드 구조체 정의
struct Card
{
    char suit;   // 카드 무늬 ('♧', '♤', '♡', '?')
    int number;  // 카드 숫자 (1부터 13까지, A=1, J=11, Q=12, K=13)
    bool used;   // 카드 사용 여부 (true: 사용됨, false: 사용 안됨)
};

// 카드 덱의 최대 크기
const int MAX_CARDS = 52;

// 카드 덱을 초기화하는 함수
void initializeDeck(Card deck[]) {
    char suits[] = { '♧', '♤', '♡', '?' };
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