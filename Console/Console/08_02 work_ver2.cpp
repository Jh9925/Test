#include <iostream>


using namespace std;

class PuzzleGame
{
private:
    int size;
    // pulzle[][];      <- �̰� ���� �迭���� 
    int** puzzle;   //  <- �̰� 2���� ���� �迭����
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
        puzzle[size - 1][size - 1] = -1; // ��ĭ�� -1�� ����
        empty_i = size - 1;
        empty_j = size - 1;
    }

    void printPuzzle()
    {
        cout << "�����̵� ����" << endl;
        for (int i = 0; i < size; ++i)
        {
            for (int j = 0; j < size; ++j)
            {
                if (puzzle[i][j] == -1)
                {
                    cout << " *  "; // ��ŷ�� ��ȣ�� '*'�� ǥ��
                }
                else
                {
                    cout << puzzle[i][j];
                    if (puzzle[i][j] < 10)
                    {
                        cout << " "; // 1�ڸ� ������ ��� �߰� ����
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
        case 'w': // ���� �̵�
            new_i = empty_i - 1;
            break;
        case 's': // �Ʒ��� �̵�
            new_i = empty_i + 1;
            break;
        case 'a': // �������� �̵�
            new_j = empty_j - 1;
            break;
        case 'd': // ���������� �̵�
            new_j = empty_j + 1;
            break;
        default:
            cout << "�߸��� �Է��Դϴ�." << endl;
            return;
        }

        // ���� üũ �� Ÿ�� ��ȯ ( ���� )
        if (new_i >= 0 && new_i < size && new_j >= 0 && new_j < size)
        {
            swap(puzzle[empty_i][empty_j], puzzle[new_i][new_j]);
            empty_i = new_i;
            empty_j = new_j;
        }
        else
        {
            cout << "�̵��� �� �����ϴ�." << endl;
        }
    }
};

int main()
{
    int size = 4;
    // ��ü�� �����ϸ� �����ڷ� �μ�����
    PuzzleGame Game1(size);

    while (true)
    {
        Game1.printPuzzle();
        cout << "�̵��� ������ �Է��ϼ��� (w: ��, s: �Ʒ�, a: ����, d: ������): ";
        char direction;
        cin >> direction;

        Game1.moveTile(direction);
    }

    return 0;
}