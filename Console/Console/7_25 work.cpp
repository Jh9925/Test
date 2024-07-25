#include<iostream>
#include<string>
#include<time.h>
#include<Windows.h>

using namespace std;



/*과제 1.

카드게임 만들기

예를 들어서 만약 다음과 같은 카드가 나왔다면 (출력)

ex) 
아래와 같이 보여지는 카드는 컴퓨터가 낸다고 가정함.
♧7	♤8  ♡9

사이에 카드 숫자가 들어가면 이김  배팅
숫자가 같아도 짐 or 배팅액만 소진
범위 밖이면 배팅액 2배 차감 
자유 선정,.

조건. 
한번 사용한 카드는 버려야 함. (사용하지 않는것 뿐.)
안쓰는 거다. 배열로 하면 한번 접근한 배열은 다시 안접근

종료조건 
17판 돌리면 자동으로 끝나야함 / 3장의 카드를 한턴마다 소비하므로
소지금이 만원이 있다면 최소 배팅금액이 있고 소지금이 최소배팅금액보다 작아지면 종료



♧7 가 나왔다면 두번다시 ♧7는 사용하지 않는다.
 A=1, J= 11, Q = 12, K = 13

 */
// 카드 구조체 만들기
struct Card
{
	string mark; // 카드무늬
	int num;	// 카드 번호
	// bool used;	// 카드 사용 여부   이거말고 다른거로
};

// 총 카드의 갯수 52 장
// 카드들을 52개의 배열에 넣는 함수 card[52];
void resetCard(Card card[]);



// 사용 가능한 카드 중에서 한장을 뽑는 함수.
Card drawCard(Card card[], bool usedCard[]);


// 알파벳 카드들 숫자가 아닌 알파벳으로 출력하기 위한 조건문 함수

string cardJQKA(int num);

// 글자색 넣기 위한 함수
void TextColor(int font, int backGround);


// 게임 구동부
void playGame();


// 메인 함수
int main()
{
	
	cout << " 카드 게임 " << endl << endl;
	
	playGame();

	return 0;


}

// 색 넣기 위한 함수
void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);

}


// 총 카드의 갯수 52 장
// 카드들을 52개의 배열에 넣는 함수 card[52];
void resetCard(Card card[])
{
	string marks[4] = { "♧", "♤", "♡", "◇" };
	int index = 0;
	for (int m = 0; m < 4; m++)
	{
		for (int i = 1; i < 14; i++)
		{
			card[index].mark = marks[m];
			card[index].num = i;
			// card[index].used = false;  이거말고 다른거로
			index++;
		}
	}
}


// 사용 가능한 카드 중에서 한장을 뽑는 함수.
Card drawCard(Card card[], bool usedCard[])
{
	int index = rand() % 52; // 52장중에 1장 랜덤 뽑기

	// 사용하지 않은 카드가 나올때까지 반복 돌리기
	while (usedCard[index])
	{
		index = rand() % 52;
	}
	usedCard[index] = true; // 다시 뽑을때 안나오게 true 로 바꾸기
	return card[index]; // 뽑은 카드 출력
}

// 알파벳 카드들 숫자가 아닌 알파벳으로 출력하기 위한 조건문 함수
string cardJQKA(int num)
{
	switch (num)
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
		return to_string(num); // 나머지 숫자들
		break;
	}

}



void playGame()
{
	srand(time(NULL));// 랜덤함수

	int round = 0;
	int numUsedCard = 0;
	int money = 10000; // 초기 소지 금액
	int minBet = 1000; // 최소 배팅 금액
	int bet;

	Card deck[52]; // 52개 카드 선언
	bool usedcard[52] = { false }; // 아직 사용하지 않은 카드 false 선언
	resetCard(deck); // 카드 52개 만들기

	while (round < 17 && money >= minBet && numUsedCard < 51) // 
	{
		round++;
		TextColor(12, 3);
		cout << "=-=-=-=-=-= " << round << " 라운드 =-=-=-=-=-=" << endl;
		TextColor(15, 0);

		// 배팅금액 입력
		TextColor(10, 0);
		cout << "배팅할 금액을 입력하세요! " << endl;
		cout << "(최소 배팅 금액 : " << minBet << " , 현재 소지금 : " << money << ") : ";
		TextColor(15, 0);
		cin >> bet;

		// 최소금액보다 높은지 확인
		while (bet < minBet || bet > money)
		{
			TextColor(12, 15);
			cout << "배팅할 금액을 다시 입력하세요 : ";
			cout << "(최소 배팅 금액 : " << minBet << ", 현재 소지금 : " << money << ") : ";
			TextColor(15, 0);
			cin >> bet;
		}

		// 컴퓨터 카드 2장 뽑기
		Card comCard_1 = drawCard(deck, usedcard);
		Card comCard_2 = drawCard(deck, usedcard);

		// 컴 뽑은 카드
		cout << "컴퓨터가 뽑은 카드 : " << comCard_1.mark << cardJQKA(comCard_1.num);
		cout << ", " << comCard_2.mark << cardJQKA(comCard_2.num) << endl;

		// 플레이어 1장 뽑기
		Card player_1 = drawCard(deck, usedcard);

		// 플레이어 뽑은 카드
		cout << "플레이어가 뽑은 카드 : " << player_1.mark << cardJQKA(player_1.num) << endl << endl;

		// 게임 조건 확인
		if ((player_1.num > min(comCard_1.num, comCard_2.num)) &&
			(player_1.num < max(comCard_1.num, comCard_2.num)))
		{
			TextColor(9, 0);
			cout << "이겼습니다!!! " << endl << endl ;
			TextColor(15, 0);
			money += bet;  // 배팅액만큼 획득
		}
		else {
			TextColor(12, 0);
			cout << "졌습니다..." << endl << endl;
			TextColor(15, 0);
			money -= bet * 2;  // 배팅액의 2배 잃음
		}

		cout << "현재 소지금 : " << money << endl << endl;
		numUsedCard += 3;
		cout <<  " numUsedCard  : " << numUsedCard << endl;

	}
	// 종료 조건
	if (money < minBet)
	{
		cout << "소지금이 부족하여 게임이 종료됩니다." << endl;
	}
	else if (numUsedCard >= 51)
	{
		cout << "카드가 모두 사용되어 게임이 종료됩니다." << endl;
	}
	else {
		// cout << "17판이 모두 종료되었습니다." << endl;
	}

}