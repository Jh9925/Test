#include<iostream>
#include<time.h>
#include<Windows.h>

using namespace std;

void main()
{

	srand(time(NULL));

	// 가위 바위 보 만들기

	int player= 0, com, i = 0, result ;

	com = rand() % 3;
	//치트
	if ( com == 0 )
	{
		cout << "컴퓨터가 낼것 : 가위" << endl;
	}
	else if (com == 1)
	{
		cout << "컴퓨터가 낼것 : 바위" << endl;
	}
	else if (com == 2)
	{
		cout << "컴퓨터가 낼것 : 보" << endl;
	}

	/*while (i<5)
	{

	
		cout << " 가위바위보 게임: 0 = 가위, 1 = 바위, 2 = 보 " << endl;
		cin >> player;
		Sleep(700);
		
		
		
		if (player > 2 || player < 0)
		{
			cout << "잘못 내셧습니다. " << endl;
			cout << endl;
			cout << endl; 

			goto EXIT_1;

		}


		if (com == 0)
		{
			cout << "컴퓨터 : 가위" << endl;
		}
		else if (com == 1)
		{
			cout << "컴퓨터 : 바위" << endl;
		}
		else if ( com == 2)
		{
			cout << "컴퓨터 : 보" << endl;
		}

		cout << endl;

		if (player == 0)
		{
			cout << "플레이어 : 가위" << endl;
		}
		else if (player == 1)
		{
			cout << "플레이어 : 바위" << endl;
		}
		else if (player == 2 )
		{
			cout << "플레이어 : 보" << endl;
		}


		result = player - com;
		
		if (result == -1 )
		{
			cout << " 졌습니다. " << endl;
			Sleep(300);

			cout << endl;
			cout << endl;
		}
		else if (result == 1)
		{
			cout << " 이겼습니다.!! " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}
		else if (result == -2)
		{
			cout << " 이겼습니다.!! " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}
		else if (result == 2)
		{
			cout << " 졌습니다. " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}
		else
		{
			cout << " 비겼습니다. " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}
	
	EXIT_1:
		i++;

	}*/

	
	// 버전 2 goto 안쓰고
	
	while (i<5)
	{
		cout << " 가위바위보 게임: 0 = 가위, 1 = 바위, 2 = 보 " << endl;
		cin >> player;
		Sleep(700);

		
		if (player == 0)
		{
			cout << "플레이어 : 가위" << endl;
		}
		else if (player == 1)
		{
			cout << "플레이어 : 바위" << endl;
		}
		else if (player == 2)
		{
			cout << "플레이어 : 보" << endl;
		}
		else 
		{
			cout << "잘못 내셧습니다. " << endl;
			break;
			cout << endl;
			cout << endl;
			//goto EXIT_1;
		}


		if (com == 0)
		{
			cout << "컴퓨터 : 가위" << endl;
		}
		else if (com == 1)
		{
			cout << "컴퓨터 : 바위" << endl;
		}
		else if ( com == 2)
		{
			cout << "컴퓨터 : 보" << endl;
		}

		cout << endl;

		
		result = player - com;

		if (result == -1 )
		{
			cout << " 졌습니다. " << endl;
			Sleep(300);

			cout << endl;
			cout << endl;
		}
		else if (result == 1)
		{
			cout << " 이겼습니다.!! " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}
		else if (result == -2)
		{
			cout << " 이겼습니다.!! " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}
		else if (result == 2)
		{
			cout << " 졌습니다. " << endl;
			Sleep(300); 
			cout << endl;
			cout << endl;
		}
		else
		{ 
			cout << " 비겼습니다. " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}

	//EXIT_1:
		i++;

	}
	 
	// 일수 출력기
//int mon;
//
//for (int i = 0; i < 5; i += 1)
//{
//	cout << '\n';
//	cout << "일수를 알고싶은 달을 입력하세요. " << endl;
//	cout << '\n';
//	cin >> mon;
//	cout << '\n';
//	Sleep(500);
//
//	switch (mon)
//	{
//	
//	case 2:
//		cout << "28일 혹은 29일까지 있습니다. " << endl;
//		cout << '\n';
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		cout << "30일 까지 있습니다. " << endl;
//		cout << '\n';
//		break;
//
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		cout << "31일 까지 있습니다. " << endl;
//		cout << '\n';
//		break;
//
//	default:
//		cout << "잘못 입력 하셨습니다. " << endl;
//		cout << '\n';
//		break;
//	}
//}
//
//system("cls");

















}