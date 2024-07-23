
#include<iostream>
#include<time.h>
#include<Windows.h>

using namespace std;

// 가위바위보 만들기 ver.2


int player, com, myMoney = 10000, bet, i=0;

int ResultGame(int com, int player);
void TextColor(int font, int backGround);

int deGame(int x, int y);
int winGame(int x, int y);
int drowGame(int x, int y);

//string redText(string str);
//string yelText(string str);
//string blueText(string str);

int game1();




void main() 
{

	game1();
	
}


int game1()
{
	// 컴퓨터가 낼것 랜덤
	srand(time(NULL));
	com = rand() % 3;
	while (i < 5 && myMoney > 0)
	{
	switch (com)
	{
	case 0:
		cout << "컴퓨터가 낼것 : 가위" << endl;
		break;
	case 1:
		cout << "컴퓨터가 낼것 : 바위" << endl;
		break;
	case 2:
		cout << "컴퓨터가 낼것 : 보" << endl;
		break;
		default:
		break;
	}
	
EXIT_2:
	cout << endl;
		cout << " 가위바위보 게임: 0 = 가위, 1 = 바위, 2 = 보 // 내가 가진돈 ";
		TextColor(10, 0);
		cout << myMoney;
		TextColor(15, 0);
		cout << " // 배팅(최소 1000)" << endl;
		cout << " 낼것 : | 배팅 : " << endl;
		cin >> player;
		cin >> bet;
		Sleep(700);
		if (myMoney < bet)
		{
			cout << " 돈이 모자랍니다." << endl;
			goto EXIT_2;
		}
		else if (bet < 1000)
		{
			cout << " 배팅금액은 최소 1000원부터 입니다." << endl;
			goto EXIT_2;
		}
				
		cout <<"베팅 " << bet << endl;

		switch (player)
		{
		case 0:
			cout << "플레이어 : 가위" << endl;
			cout << endl;
			break;
		case 1:
			cout << "플레이어 : 바위" << endl;
			cout << endl;
			break;
		case 2:
			cout << "플레이어 : 보" << endl;
			cout << endl;
			break;

		default:cout << "잘못 내셧습니다. " << endl;
			cout << endl;
			
			goto EXIT_1;
			break;
		}

		switch (com)
		{
		case 0:
			cout << "컴퓨터 : 가위" << endl;
			break;
		case 1:
			cout << "컴퓨터 : 바위" << endl;
			break;
		case 2:
			cout << "컴퓨터 : 보" << endl;
			break;

		default:
			break;
		}



		switch (ResultGame(com, player))
		{
		case -1:
			myMoney = deGame(myMoney, bet);
			cout << " 졌습니다. " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
			break;

		case 1: 
			myMoney = winGame(myMoney, bet);
			cout << " 이겼습니다.!! " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
			break;

		case -2:
			myMoney = winGame(myMoney, bet);
			cout << " 이겼습니다.!! " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
			break;

		case 2:
			myMoney = deGame(myMoney, bet);
			cout << " 졌습니다. " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
			break;

		default:
			myMoney = drowGame(myMoney, bet);
			cout << " 비겼습니다. " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
			break;
		}

		// 마이너스는 너무하잖아..
		if (myMoney < 0)
		{
			myMoney = 0;
			TextColor(12, 0);
			cout << "남은 돈: " << myMoney << endl;
			TextColor(15, 0);
			cout << endl;
			break;
		}
		else if (myMoney > 0 && myMoney < 10000)
		{
			TextColor(14, 0);
			cout << "남은 돈: " << myMoney << endl;
			TextColor(15, 0);
			cout << endl;
		}
		else
		{
			TextColor(11, 0);
			cout << "남은 돈: " << myMoney << endl;
			TextColor(15, 0);
			cout << endl;
		}

		
		

	EXIT_1:
		i++;
		
		
	}

	return 0;
}

int ResultGame (int com, int player)
{
	return player - com;
 
}

// x = myMoney , y = bet
// 진 게임

int deGame(int x, int y)
{
	return  x - y * 7;
	 
}
// 이긴 게임
int winGame(int x, int y)
{
	return  x - y + y * 3;

	
}
// 비긴 게임
int drowGame(int x, int y)
{
	return  x - y + y * 5;
	
}

//string redText(string str)
//{
//	TextColor(12, 0);
//	return string("남은 돈:");
//}
//
//string yelText(string str)
//{
//	return string();
//}
//
//string blueText(string str)
//{
//	return string();
//}


void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);

}
