#include <iostream>

using namespace std;

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


// 빙고 카드를 초기화합니다.
void initializeCard(int card[5][5])
{
    // 1부터 25까지의 숫자를 생성하여 배열에 저장합니다.
    int numbers[25];
    for (int i = 0; i < 25; ++i)
    {
        numbers[i] = i + 1;
    }

    // 빙고 카드에 숫자를 배치합니다.
    int index = 0;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            card[i][j] = numbers[index];
            index++;
        }
    }
}

// 빙고 카드를 출력합니다.
void printCard(int card[5][5])
{
    cout << "     빙 고 판" << endl << endl;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (card[i][j] == -1)
            {
                cout << " *  "; // 마킹된 번호는 '*'로 표시합니다.
            }
            else
            {
                cout << card[i][j];
                
                 if (card[i][j] < 10)
                 {
                     cout << " "; // 1자리 숫자의 경우 추가 공백
                 }
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// 번호가 빙고 카드에 있는지 확인하고 마킹합니다.
bool markNumber(int card[5][5], int number)
{
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (card[i][j] == number)// 반복돌리면서 입력한 숫자가 있는 위치 찾기
            {
                card[i][j] = -1;     // 선택한 숫자 -1로 값 변경
                return true;
            }
        }
    }
    return false;
}

// 빙고가 몇 줄 완성되었는지 확인합니다.
int countBingoLines(int card[5][5])
{
    int bingoLines = 0;

    // 가로 체크
    for (int i = 0; i < 5; ++i)
    {
        bool hBingo = true;
        for (int j = 0; j < 5; ++j)
        {
            if (card[i][j] != -1)
            {
                hBingo = false;// 빙고가 아닌 숫자가 있는 경우 hBingo를 false로 설정합니다.
                               // 더 이상 현재 행을 검사할 필요가 없으므로 break를 사용하여 내부 루프를 종료합니다.
                break;
            }
        }
        if (hBingo)
        {
            bingoLines++;
        }
    }

    // 세로 체크
    for (int j = 0; j < 5; ++j)
    {
        bool vBingo = true;
        for (int i = 0; i < 5; ++i)
        {
            if (card[i][j] != -1)
            {
                vBingo = false;
                break;
            }
        }
        if (vBingo)
        {
            bingoLines++;
        }
    }

    // 대각선 체크
    bool diag1Bingo = true;
    bool diag2Bingo = true;
    for (int i = 0; i < 5; ++i)
    {
        if (card[i][i] != -1)
        {
            diag1Bingo = false;
        }
        if (card[i][5 - 1 - i] != -1)  //  (0, 4), (1, 3), (2, 2), (3, 1), (4, 0) 
        {
            diag2Bingo = false;
        }
    }
    if (diag1Bingo)
    {
        bingoLines++;
    }
    if (diag2Bingo)
    {
        bingoLines++;
    }
    return bingoLines;
}

int main()
{
    // 빙고판 5 x 5
    int card[5][5];
    int number;

    // 배열에 숫자 넣기
    initializeCard(card);

    
   // 빙고판 출력
    printCard(card);
    
    while (true)
    {
        cout << endl << "숫자를 선택하세요 : ";
        cin >> number;
        if (markNumber(card, number))
        {
            cout << "선택한 숫자 : " << number << endl << endl;
        }
        else
        {
            cout << "없는 숫자 입니다. " << endl << endl;
        }

       
        printCard(card);

        int bingoLines = countBingoLines(card);

        // cout << " ---- " << bingoLines << endl; 테스트용
        
        if(bingoLines == 1)
        {
            cout << endl << "빙고! " << bingoLines << " 줄 완성!!!!" << endl << endl;
        }else if(bingoLines == 2)
        {
            cout << endl << "빙고! " << bingoLines << " 줄 완성!!!!" << endl << endl;
        }
        else if (bingoLines >= 3)
        {
            cout << endl << "빙고! " << bingoLines << " 줄 완성!!!!" << endl << endl;
            break;
        }
    }    
}





/*



// 숫자를 랜덤하게 섞습니다.
    std:srand(time(NULL));
    for (int i = 0; i < 25; i++) 
    {
        int j = std::rand() % 25;
        std::swap(numbers[i], numbers[j]); // 스왑
    }
    
    */