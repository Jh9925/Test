#include <iostream>

using namespace std;

//과제 2. 
//4X4 슬라이드 퍼즐
//시작지점 아무대나
//
//왼쪽키를 입력시 퍼즐이 왼쪽으로 이동 배열 스왑 이용하자.종료 조건 없음


// 퍼즐 판 세팅
void PuzzleSet(int puzzle[4][4])
{
    // 숫자 배열 1개만들기
    int num[16];
    for (int i = 0; i < 16; i++)
    {
        num[i] = i + 1;
    }

    // 퍼즐에 숫자 넣기
    int index = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            puzzle[i][j] = num[index];
            index++;
        }
    }
}

// 퍼즐판 출력
void printPuzzle(int puzzle[4][4])
{
    cout << "슬라이드 퍼즐" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (puzzle[i][j] == -1)
            {
                cout << " *  "; // 마킹된 번호는 '*'로 표시합니다.
            }
            else
            {
                cout << puzzle[i][j];

                if (puzzle[i][j] < 10)
                {
                    cout << " "; // 1자리 숫자의 경우 추가 공백
                }
                cout << "  ";
            }
        }
        cout << endl;
    }
}




//  움직이기!
void moveTile(int puzzle[4][4], char direction)
{

    // 빈칸 위치 찾기
    int empty_i, empty_j;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (puzzle[i][j] == -1)
            {
                empty_i = i;
                empty_j = j;
            }
        }
    }

    // 빈칸 이동
    int new_i = empty_i, new_j = empty_j;

    switch (direction)
    {
    case 'w': // 위로 이동
        new_i = empty_i - 1;
        break;
    case 's': // 아래로 이동
        new_i = empty_i + 1;
        break;
    case 'a': // 왼쪽으로 이동
        new_j = empty_j - 1;
        break;
    case 'd': // 오른쪽으로 이동
        new_j = empty_j + 1;
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return;
    }

    // 범위 체크 및 타일 교환 ( 스왑 )
    if (new_i >= 0 && new_i < 4 && new_j >= 0 && new_j < 4)
    {
        swap(puzzle[empty_i][empty_j], puzzle[new_i][new_j]);
    }
    else
    {
        cout << "이동할 수 없습니다." << endl;
    }
}

int main()
{
    int Puzzle[4][4];
    PuzzleSet(Puzzle);
    Puzzle[3][3] = -1;

    while (true)
    {
        printPuzzle(Puzzle);
        cout << "이동할 방향을 입력하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽, q: 종료): ";
        char direction;
        cin >> direction;

        if (direction == 'q')
        {
            break;
        }

        moveTile(Puzzle, direction);
    }

    return 0;
}