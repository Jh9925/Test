#include <iostream>


using namespace std;

class PuzzleGame
{
private:
    int size;
    // pulzle[][];      <- 이건 정적 배열선언 
    int** puzzle;   //  <- 이건 2차원 동적 배열선언
    int empty_i, empty_j;

public:
    PuzzleGame(int n) : size(n)
    {
        puzzle = new int* [size];
        for (int i = 0; i < size; ++i)
        {
            puzzle[i] = new int[size];
        }
        PuzzleSet();
    }

    ~PuzzleGame()
    {
        for (int i = 0; i < size; ++i)
        {
            delete[] puzzle[i];
        }
        delete[] puzzle;
    }

    void PuzzleSet()
    {
        int num = 1;
        for (int i = 0; i < size; ++i)
        {
            for (int j = 0; j < size; ++j)
            {
                puzzle[i][j] = num++;
            }
        }
        puzzle[size - 1][size - 1] = -1; // 빈칸을 -1로 설정
        empty_i = size - 1;
        empty_j = size - 1;
    }

    void printPuzzle()
    {
        cout << "슬라이드 퍼즐" << endl;
        for (int i = 0; i < size; ++i)
        {
            for (int j = 0; j < size; ++j)
            {
                if (puzzle[i][j] == -1)
                {
                    cout << " *  "; // 마킹된 번호는 '*'로 표시
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

    void moveTile(char direction)
    {
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
        if (new_i >= 0 && new_i < size && new_j >= 0 && new_j < size)
        {
            swap(puzzle[empty_i][empty_j], puzzle[new_i][new_j]);
            empty_i = new_i;
            empty_j = new_j;
        }
        else
        {
            cout << "이동할 수 없습니다." << endl;
        }
    }
};

int main()
{
    int size = 4;
    // 객체를 생성하며 생성자로 인수전달
    PuzzleGame Game1(size);

    while (true)
    {
        Game1.printPuzzle();
        cout << "이동할 방향을 입력하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽): ";
        char direction;
        cin >> direction;

        Game1.moveTile(direction);
    }

    return 0;
}