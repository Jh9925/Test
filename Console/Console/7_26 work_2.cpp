#include <iostream>

using namespace std;

// 퍼즐 판 세팅
void PUZZLE(int puzzle[4][4])
{
	// 숫자 배열 1개만들기
	int num[16];
	for (int i = 0; i < 16; i++)
	{
		num[i] = i +1 ;
	}
	
	// 퍼즐에 숫자 넣기
	int index =0 ;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			puzzle[i][j] = num[index];
			index++;
		}
	}
}

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



/*

void moveTile(int puzzle[4][4], char direction)
{
    int empty_i, empty_j;

    // 빈칸 위치 찾기
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

    // 범위 체크 및 타일 교환
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
    int puzzle[4][4];
    PUZZLE(puzzle);
    puzzle[3][3] = -1;

    while (true)
    {
        printPuzzle(puzzle);
        cout << "이동할 방향을 입력하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽, q: 종료): ";
        char direction;
        cin >> direction;

        if (direction == 'q')
        {
            break;
        }

        moveTile(puzzle, direction);
    }

    return 0;
}
설명
PUZZLE 함수: 퍼즐 배열을 초기화합니다.
printPuzzle 함수: 현재 퍼즐 상태를 출력합니다.
moveTile 함수: 사용자 입력에 따라 빈칸을 이동시킵니다.
빈칸의 위치를 찾고, 사용자가 입력한 방향에 따라 빈칸을 이동합니다.
이동할 수 없는 경우 메시지를 출력합니다.
main 함수:
퍼즐을 초기화하고 빈칸을 설정합니다.
사용자로부터 입력을 받아 빈칸을 이동시키며 퍼즐을 업데이트합니다.
'q'를 입력하면 게임을 종료합니다.
이 코드는 퍼즐을 초기화하고, 사용자 입력에 따라 퍼즐을 조작하여 빈칸을 이동시키며 퍼즐 상태를 업데이트합니다.




*/








int main()
{
	int puzzle[4][4];
	PUZZLE(puzzle);
	puzzle[3][3] = -1;
	printPuzzle(puzzle);


}


