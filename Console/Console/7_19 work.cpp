#include<iostream>
#include<time.h>
#include<Windows.h>

using namespace std;

void main()
{

	srand(time(NULL));

	// ���� ���� �� �����

	int player= 0, com, i = 0, result ;

	com = rand() % 3;
	//ġƮ
	if ( com == 0 )
	{
		cout << "��ǻ�Ͱ� ���� : ����" << endl;
	}
	else if (com == 1)
	{
		cout << "��ǻ�Ͱ� ���� : ����" << endl;
	}
	else if (com == 2)
	{
		cout << "��ǻ�Ͱ� ���� : ��" << endl;
	}

	/*while (i<5)
	{

	
		cout << " ���������� ����: 0 = ����, 1 = ����, 2 = �� " << endl;
		cin >> player;
		Sleep(700);
		
		
		
		if (player > 2 || player < 0)
		{
			cout << "�߸� ���˽��ϴ�. " << endl;
			cout << endl;
			cout << endl; 

			goto EXIT_1;

		}


		if (com == 0)
		{
			cout << "��ǻ�� : ����" << endl;
		}
		else if (com == 1)
		{
			cout << "��ǻ�� : ����" << endl;
		}
		else if ( com == 2)
		{
			cout << "��ǻ�� : ��" << endl;
		}

		cout << endl;

		if (player == 0)
		{
			cout << "�÷��̾� : ����" << endl;
		}
		else if (player == 1)
		{
			cout << "�÷��̾� : ����" << endl;
		}
		else if (player == 2 )
		{
			cout << "�÷��̾� : ��" << endl;
		}


		result = player - com;
		
		if (result == -1 )
		{
			cout << " �����ϴ�. " << endl;
			Sleep(300);

			cout << endl;
			cout << endl;
		}
		else if (result == 1)
		{
			cout << " �̰���ϴ�.!! " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}
		else if (result == -2)
		{
			cout << " �̰���ϴ�.!! " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}
		else if (result == 2)
		{
			cout << " �����ϴ�. " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}
		else
		{
			cout << " �����ϴ�. " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}
	
	EXIT_1:
		i++;

	}*/

	
	// ���� 2 goto �Ⱦ���
	
	while (i<5)
	{
		cout << " ���������� ����: 0 = ����, 1 = ����, 2 = �� " << endl;
		cin >> player;
		Sleep(700);

		
		if (player == 0)
		{
			cout << "�÷��̾� : ����" << endl;
		}
		else if (player == 1)
		{
			cout << "�÷��̾� : ����" << endl;
		}
		else if (player == 2)
		{
			cout << "�÷��̾� : ��" << endl;
		}
		else 
		{
			cout << "�߸� ���˽��ϴ�. " << endl;
			break;
			cout << endl;
			cout << endl;
			//goto EXIT_1;
		}


		if (com == 0)
		{
			cout << "��ǻ�� : ����" << endl;
		}
		else if (com == 1)
		{
			cout << "��ǻ�� : ����" << endl;
		}
		else if ( com == 2)
		{
			cout << "��ǻ�� : ��" << endl;
		}

		cout << endl;

		
		result = player - com;

		if (result == -1 )
		{
			cout << " �����ϴ�. " << endl;
			Sleep(300);

			cout << endl;
			cout << endl;
		}
		else if (result == 1)
		{
			cout << " �̰���ϴ�.!! " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}
		else if (result == -2)
		{
			cout << " �̰���ϴ�.!! " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}
		else if (result == 2)
		{
			cout << " �����ϴ�. " << endl;
			Sleep(300); 
			cout << endl;
			cout << endl;
		}
		else
		{ 
			cout << " �����ϴ�. " << endl;
			Sleep(300);
			cout << endl;
			cout << endl;
		}

	//EXIT_1:
		i++;

	}
	 
	// �ϼ� ��±�
//int mon;
//
//for (int i = 0; i < 5; i += 1)
//{
//	cout << '\n';
//	cout << "�ϼ��� �˰���� ���� �Է��ϼ���. " << endl;
//	cout << '\n';
//	cin >> mon;
//	cout << '\n';
//	Sleep(500);
//
//	switch (mon)
//	{
//	
//	case 2:
//		cout << "28�� Ȥ�� 29�ϱ��� �ֽ��ϴ�. " << endl;
//		cout << '\n';
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		cout << "30�� ���� �ֽ��ϴ�. " << endl;
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
//		cout << "31�� ���� �ֽ��ϴ�. " << endl;
//		cout << '\n';
//		break;
//
//	default:
//		cout << "�߸� �Է� �ϼ̽��ϴ�. " << endl;
//		cout << '\n';
//		break;
//	}
//}
//
//system("cls");

















}