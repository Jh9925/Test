
#include<iostream>
#include<time.h>
#include<Windows.h>

using namespace std;

// ���������� ����� ver.2


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
	// ��ǻ�Ͱ� ���� ����
	srand(time(NULL));
	com = rand() % 3;
	while (i < 5 && myMoney > 0)
	{
	switch (com)
	{
	case 0:
		cout << "��ǻ�Ͱ� ���� : ����" << endl;
		break;
	case 1:
		cout << "��ǻ�Ͱ� ���� : ����" << endl;
		break;
	case 2:
		cout << "��ǻ�Ͱ� ���� : ��" << endl;
		break;
		default:
		break;
	}
	
EXIT_2:
	cout << endl;
		cout << " ���������� ����: 0 = ����, 1 = ����, 2 = �� // ���� ������ ";
		TextColor(10, 0);
		cout << myMoney;
		TextColor(15, 0);
		cout << " // ����(�ּ� 1000)" << endl;
		cout << " ���� : | ���� : " << endl;
		cin >> player;
		cin >> bet;
		Sleep(700);
		if (myMoney < bet)
		{
			cout << " ���� ���ڶ��ϴ�." << endl;
			goto EXIT_2;
		}
		else if (bet < 1000)
		{
			cout << " ���ñݾ��� �ּ� 1000������ �Դϴ�." << endl;
			goto EXIT_2;
		}
				
		cout <<"���� " << bet << endl;

		switch (player)
		{
		case 0:
			cout << "�÷��̾� : ����" << endl;
			cout << endl;
			break;
		case 1:
			cout << "�÷��̾� : ����" << endl;
			cout << endl;
			break;
		case 2:
			cout << "�÷��̾� : ��" << endl;
			cout << endl;
			break;

		default:cout << "�߸� ���˽��ϴ�. " << endl;
			cout << endl;
			
			goto EXIT_1;
			break;
		}

		switch (com)
		{
		case 0:
			cout << "��ǻ�� : ����" << endl;
			break;
		case 1:
			cout << "��ǻ�� : ����" << endl;
			break;
		case 2:
			cout << "��ǻ�� : ��" << endl;
			break;

		default:
			break;
		}



		switch (ResultGame(com, player))
		{
		case -1:
			myMoney = deGame(myMoney, bet);
			cout << " �����ϴ�. " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
			break;

		case 1: 
			myMoney = winGame(myMoney, bet);
			cout << " �̰���ϴ�.!! " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
			break;

		case -2:
			myMoney = winGame(myMoney, bet);
			cout << " �̰���ϴ�.!! " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
			break;

		case 2:
			myMoney = deGame(myMoney, bet);
			cout << " �����ϴ�. " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
			break;

		default:
			myMoney = drowGame(myMoney, bet);
			cout << " �����ϴ�. " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
			break;
		}

		// ���̳ʽ��� �ʹ����ݾ�..
		if (myMoney < 0)
		{
			myMoney = 0;
			TextColor(12, 0);
			cout << "���� ��: " << myMoney << endl;
			TextColor(15, 0);
			cout << endl;
			break;
		}
		else if (myMoney > 0 && myMoney < 10000)
		{
			TextColor(14, 0);
			cout << "���� ��: " << myMoney << endl;
			TextColor(15, 0);
			cout << endl;
		}
		else
		{
			TextColor(11, 0);
			cout << "���� ��: " << myMoney << endl;
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
// �� ����

int deGame(int x, int y)
{
	return  x - y * 7;
	 
}
// �̱� ����
int winGame(int x, int y)
{
	return  x - y + y * 3;

	
}
// ��� ����
int drowGame(int x, int y)
{
	return  x - y + y * 5;
	
}

//string redText(string str)
//{
//	TextColor(12, 0);
//	return string("���� ��:");
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
