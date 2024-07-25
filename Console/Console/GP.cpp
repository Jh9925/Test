#include<iostream>
#include<string>
#include<time.h>

using namespace std;

// 카드 구조체 정의
struct Card 
{
    string mark;   // 카드 무늬 ('♧', '♤', '♡', '♢')
    int number;  // 카드 숫자 (1부터 13까지, A=1, J=11, Q=12, K=13)
    bool used;   // 카드 사용 여부 (true: 사용됨, false: 사용 안됨)
};

// 카드 덱의 최대 크기
const int MAX_CARDS = 52;

// 카드 덱을 초기화하는 함수
void initializeDeck(Card card[]) {
    string marks[4] = { "♧", "♤", "♡", "◇"};
    int index = 0;

    for (int s = 0; s < 4; s++) 
    {
        for (int num = 1; num <= 13; num++)
        {
            card[index].mark = marks[s];
            card[index].number = num;
            card[index].used = false;
            // index++;
           
            cout << endl;
            cout << card[index].mark<<" "<< marks[s] << endl;
            cout << card[index].number << " " << num << endl;
           // cout << deck[index].used << endl;
            index++;


        }
    }
}

// 사용 가능한 카드 중에서 랜덤하게 한 장을 뽑는 함수
Card drawCard(Card card[], bool usedCards[])
{
    int index = rand() % MAX_CARDS;  // 0부터 MAX_CARDS-1 사이의 랜덤한 인덱스를 생성합니다.

    // 사용된 카드가 아닌 동안 반복하여 랜덤한 인덱스를 선택합니다.
    while (usedCards[index])
    {
        index = rand() % MAX_CARDS;  // 이미 사용된 카드라면 새로운 랜덤 인덱스를 선택합니다.
    }

    usedCards[index] = true;  // 선택된 인덱스의 카드를 사용된 상태로 표시합니다.
    return card[index];  // 선택된 카드를 반환합니다.
}


string cardNumberToString(int number) 
{
    switch (number) 
    {
    case 1:
        return "A";
    case 11:
        return "J";
    case 12:
        return "Q";
    case 13:
        return "K";
    default:
        return to_string(number);  // 숫자 그대로 출력
    }
}




// 게임 플레이 함수
void playGame() 
{
    Card deck[MAX_CARDS]; // deck [52] 선언
    bool usedCards[MAX_CARDS] = { false }; // 사용된 카드를 관리하기 위한 배열
    initializeDeck(deck); // deck [52]
    srand(time(NULL));
    int round = 0;
    int numUsedCards = 0;
    int money = 10000; // 초기 소지금    
    int minBet = 1000; // 최소 배팅금액

    while (round < 17 && money >= minBet && numUsedCards < MAX_CARDS)
    {
        round++;
        cout << "=== Round " << round << " ===" << endl;
        
        // 사용자에게 배팅 금액 입력 받기
        int userBet;
        cout << "배팅할 금액을 입력하세요 (최소 " << minBet << " 이상, 현재 소지금: " << money << "): ";
        cin >> userBet;

        // 입력 받은 배팅 금액 유효성 검사
        while (userBet < minBet || userBet > money) {
            cout << "배팅 금액은 최소 " << minBet << " 이상이어야 하며, 소지금 이내에서 입력해야 합니다." << endl;
            cout << "배팅할 금액을 다시 입력하세요: ";
            cin >> userBet;
        }

        // 컴퓨터의 카드 두 장 뽑기
        Card computerCard1 = drawCard(deck, usedCards);
        Card computerCard2 = drawCard(deck, usedCards);

        // 컴퓨터가 뽑은 카드 출력
        cout << "컴퓨터의 카드: " << computerCard1.mark << cardNumberToString(computerCard1.number) << ", " << computerCard2.mark << cardNumberToString(computerCard2.number) << endl;

        // 사용자의 카드 뽑기
        Card userCard = drawCard(deck, usedCards);
        cout << "사용자의 카드: " << userCard.mark << cardNumberToString(userCard.number) << endl;

        // 숫자가 사이에 있는지 확인
        if ((userCard.number > min(computerCard1.number, computerCard2.number)) &&
            (userCard.number < max(computerCard1.number, computerCard2.number))) 
        {
            cout << "사이에 카드가 있어서 이겼습니다!" << endl;
            money += userBet;  // 배팅액을 획득
        }
        else {
            cout << "사이에 카드가 없어서 배팅액의 2배가 차감됩니다." << endl;
            money -= userBet * 2;  // 배팅액의 2배 차감
        }

        cout << "현재 소지금: " << money << endl << endl;
        numUsedCards++;
    }

    if (money < minBet) {
        cout << "소지금이 부족하여 게임이 종료됩니다." << endl;
    }
    else if (numUsedCards >= MAX_CARDS) {
        cout << "카드가 모두 사용되어 게임이 종료됩니다." << endl;
    }
    else {
        cout << "17판이 모두 종료되었습니다." << endl;
    }
}

int main() 
{
   

    cout << "게임을 시작합니다. 최소 배팅 금액은 1000 원입니다." << endl << endl;
    playGame();

    return 0;
}


