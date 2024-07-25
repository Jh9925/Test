#include<iostream>
#include<string>
#include<time.h>
#include<Windows.h>

//using namespace std;
//
///*
//7_25 ����1.
//���� ���� 5X5
//3�ٿϼ��� ����
//���� ��ȣ�Է½� ���ڷ� �ٲ�� ����Ǹ� ǥ�� ����.
//
//
//���� 2.
//4X4 �����̵� ����
//�������� �ƹ��볪
//
//����Ű�� �Է½� ������ �������� �̵� �迭 ���� �̿�����. ���� ���� ����
//
//*/
//char Arr[25] = {};
//int sel, i = 0;
//
//// ���� �迭 �ȿ� ���� �ֱ�.
//void Vingo() 
//{
//	int num = 0;
//	for (int i = 0; i < 25; i++)
//	{
//		
//		Arr[num] = i;
//		num++;
//	}
//}
//
//// �Է��� �迭�ȿ� �ִ� �ɷ� ���
//
//char pickNum(int pick)
//{
//	return Arr[pick];
//}
//
//
//
//// �۵� ����
//
//void pic()
//{
//	cout << Arr[0] << "		" << Arr[1] << "		" << Arr[2] << "		" << Arr[3] << "		" << Arr[4] << " " << endl << endl;
//	cout << Arr[5] << "		" << Arr[6] << "		" << Arr[7] << "		" << Arr[8] << "		" << Arr[9] << "		" << endl << endl;;
//	cout << Arr[10] << "		" << Arr[11] << "		" << Arr[12] << "		" << Arr[13] << "		" << Arr[14] << "		" << endl << endl;;
//	cout << Arr[15] << "		" << Arr[16] << "		" << Arr[17] << "		" << Arr[18] << "		" << Arr[19] << "		" << endl << endl;;
//	cout << Arr[20] << "		" << Arr[21] << "		" << Arr[22] << "		" << Arr[23] << "		" << Arr[24] << "		" << endl << endl;;
//
//}
//
////void change()
////{
////
////	static_cast<char>(Arr[sel]);
////	Arr[sel] = '*';
////	cout << static_cast<char>(Arr[sel]);
////
////}
//
//
//
//
//
//int main()
//{
//	
//	Vingo();
//	pic();
//	while (i < 25)
//	{
//		cout << " ���� �Է� " << endl << endl;
//		cin >> sel;
//		cout << pickNum(sel) << endl;
//		i++;
//		
//		//change();
//		pic();
//
//	}
//
//
//	return 0;
//}


#include <iostream>
#include <ctime>
#include <windows.h> // Sleep �Լ� ���

const int SIZE_ = 5;

// ���� ī�带 �ʱ�ȭ�մϴ�.
void initializeCard(int card[SIZE_][SIZE_]) {
    // 1���� 75������ ���ڸ� �����Ͽ� �迭�� �����մϴ�.
    int numbers[75];
    for (int i = 0; i < 75; ++i) {
        numbers[i] = i + 1;
    }

    // ���ڸ� �����ϰ� �����ϴ�.
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for (int i = 0; i < 75; ++i) {
        int j = std::rand() % 75;
        std::swap(numbers[i], numbers[j]);
    }

    // ���� ī�忡 ���ڸ� ��ġ�մϴ�.
    int index = 0;
    for (int i = 0; i < SIZE_; ++i) {
        for (int j = 0; j < SIZE_; ++j) {
            card[i][j] = numbers[index++];
        }
    }

    // �߾��� 'Free'�� �����մϴ�.
    card[SIZE_ / 2][SIZE_ / 2] = -1; // -1�� 'Free'�� ��Ÿ���ϴ�.
}

// ���� ī�带 ����մϴ�.
void printCard(const int card[SIZE_][SIZE_]) {
    std::cout << " B   I   N   G   O\n";
    for (int i = 0; i < SIZE_; ++i) {
        for (int j = 0; j < SIZE_; ++j) {
            if (card[i][j] == -1) {
                std::cout << " *  "; // 'Free'�� '*'�� ǥ���մϴ�.
            }
            else if (card[i][j] == -2) {
                std::cout << " *  "; // ��ŷ�� ��ȣ�� '*'�� ǥ���մϴ�.
            }
            else {
                std::cout << card[i][j];
                if (card[i][j] < 10) std::cout << " "; // 1�ڸ� ������ ��� �߰� ����
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

// ��ȣ�� ���� ī�忡 �ִ��� Ȯ���ϰ� ��ŷ�մϴ�.
bool markNumber(int card[SIZE_][SIZE_], int number) {
    for (int i = 0; i < SIZE_; ++i) {
        for (int j = 0; j < SIZE_; ++j) {
            if (card[i][j] == number) {
                card[i][j] = -2; // ��ȣ�� ��ŷ�� ���¸� ��Ÿ���ϴ�.
                return true;
            }
        }
    }
    return false;
}

// ���� �Ϸ�Ǿ����� Ȯ���մϴ�.
bool checkBingo(const int card[SIZE_][SIZE_]) {
    // ���� üũ
    for (int i = 0; i < SIZE_; ++i) {
        bool rowBingo = true;
        for (int j = 0; j < SIZE_; ++j) {
            if (card[i][j] != -2 && !(i == SIZE_ / 2 && j == SIZE_ / 2 && card[i][j] == -1)) {
                rowBingo = false;
                break;
            }
        }
        if (rowBingo) return true;
    }

    // ���� üũ
    for (int j = 0; j < SIZE_; ++j) {
        bool colBingo = true;
        for (int i = 0; i < SIZE_; ++i) {
            if (card[i][j] != -2 && !(i == SIZE_ / 2 && j == SIZE_ / 2 && card[i][j] == -1)) {
                colBingo = false;
                break;
            }
        }
        if (colBingo) return true;
    }

    // �밢�� üũ
    bool diag1Bingo = true;
    bool diag2Bingo = true;
    for (int i = 0; i < SIZE_; ++i) {
        if (card[i][i] != -2 && !(i == SIZE_ / 2 && card[i][i] == -1)) {
            diag1Bingo = false;
        }
        if (card[i][SIZE_ - 1 - i] != -2 && !(i == SIZE_ / 2 && card[i][SIZE_ - 1 - i] == -1)) {
            diag2Bingo = false;
        }
    }
    if (diag1Bingo || diag2Bingo) return true;

    return false;
}

int main() {
    int card[SIZE_][SIZE_];
    initializeCard(card);

    std::cout << "Your Bingo Card:\n";
    printCard(card);

    std::cout << "\nEnter numbers to mark (0 to end):\n";
    int number;
    while (true) {
        std::cin >> number;
        if (number == 0) break;

        if (markNumber(card, number)) {
            std::cout << "Marked number: " << number << std::endl;
        }
        else {
            std::cout << "Number not found on card.\n";
        }

        std::cout << "Current Card:\n";
        printCard(card);

        if (checkBingo(card)) {
            std::cout << "Bingo!\n";
            break;
        }

        // 1�� ��� (���־� ȿ��)
        Sleep(1000);
    }

    return 0;
}