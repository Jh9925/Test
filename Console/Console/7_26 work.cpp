#include<iostream>
#include<string>
#include<time.h>
#include<Windows.h>

//using namespace std;
//
///*
//7_25 과제1.
//빙고 게임 5X5
//3줄완성시 종료
//각항 번호입력시 문자로 바뀌고 빙고되면 표시 까지.
//
//
//과제 2.
//4X4 슬라이드 퍼즐
//시작지점 아무대나
//
//왼쪽키를 입력시 퍼즐이 왼쪽으로 이동 배열 스왑 이용하자. 종료 조건 없음
//
//*/
//char Arr[25] = {};
//int sel, i = 0;
//
//// 빙고 배열 안에 숫자 넣기.
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
//// 입력을 배열안에 있는 걸로 출력
//
//char pickNum(int pick)
//{
//	return Arr[pick];
//}
//
//
//
//// 작동 구현
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
//		cout << " 숫자 입력 " << endl << endl;
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
#include <windows.h> // Sleep 함수 사용

const int SIZE_ = 5;

// 빙고 카드를 초기화합니다.
void initializeCard(int card[SIZE_][SIZE_]) {
    // 1부터 75까지의 숫자를 생성하여 배열에 저장합니다.
    int numbers[75];
    for (int i = 0; i < 75; ++i) {
        numbers[i] = i + 1;
    }

    // 숫자를 랜덤하게 섞습니다.
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for (int i = 0; i < 75; ++i) {
        int j = std::rand() % 75;
        std::swap(numbers[i], numbers[j]);
    }

    // 빙고 카드에 숫자를 배치합니다.
    int index = 0;
    for (int i = 0; i < SIZE_; ++i) {
        for (int j = 0; j < SIZE_; ++j) {
            card[i][j] = numbers[index++];
        }
    }

    // 중앙은 'Free'로 설정합니다.
    card[SIZE_ / 2][SIZE_ / 2] = -1; // -1은 'Free'를 나타냅니다.
}

// 빙고 카드를 출력합니다.
void printCard(const int card[SIZE_][SIZE_]) {
    std::cout << " B   I   N   G   O\n";
    for (int i = 0; i < SIZE_; ++i) {
        for (int j = 0; j < SIZE_; ++j) {
            if (card[i][j] == -1) {
                std::cout << " *  "; // 'Free'는 '*'로 표시합니다.
            }
            else if (card[i][j] == -2) {
                std::cout << " *  "; // 마킹된 번호는 '*'로 표시합니다.
            }
            else {
                std::cout << card[i][j];
                if (card[i][j] < 10) std::cout << " "; // 1자리 숫자의 경우 추가 공백
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

// 번호가 빙고 카드에 있는지 확인하고 마킹합니다.
bool markNumber(int card[SIZE_][SIZE_], int number) {
    for (int i = 0; i < SIZE_; ++i) {
        for (int j = 0; j < SIZE_; ++j) {
            if (card[i][j] == number) {
                card[i][j] = -2; // 번호가 마킹된 상태를 나타냅니다.
                return true;
            }
        }
    }
    return false;
}

// 빙고가 완료되었는지 확인합니다.
bool checkBingo(const int card[SIZE_][SIZE_]) {
    // 가로 체크
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

    // 세로 체크
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

    // 대각선 체크
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

        // 1초 대기 (비주얼 효과)
        Sleep(1000);
    }

    return 0;
}