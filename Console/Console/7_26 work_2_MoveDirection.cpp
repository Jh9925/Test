#include <iostream>

using namespace std;

//���� 2. 
//4X4 �����̵� ����
//�������� �ƹ��볪
//
//����Ű�� �Է½� ������ �������� �̵� �迭 ���� �̿�����.���� ���� ����


// ���� �� ����
void PuzzleSet(int puzzle[4][4])
{
    // ���� �迭 1�������
    int num[16];
    for (int i = 0; i < 16; i++)
    {
        num[i] = i + 1;
    }

    // ���� ���� �ֱ�
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

// ������ ���
void printPuzzle(int puzzle[4][4])
{
    cout << "�����̵� ����" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (puzzle[i][j] == -1)
            {
                cout << " *  "; // ��ŷ�� ��ȣ�� '*'�� ǥ���մϴ�.
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




//  �����̱�!
void moveTile(int puzzle[4][4], char direction)
{

    // ��ĭ ��ġ ã��
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

    // ��ĭ �̵�
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
    if (new_i >= 0 && new_i < 4 && new_j >= 0 && new_j < 4)
    {
        swap(puzzle[empty_i][empty_j], puzzle[new_i][new_j]);
    }
    else
    {
        cout << "�̵��� �� �����ϴ�." << endl;
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
        cout << "�̵��� ������ �Է��ϼ��� (w: ��, s: �Ʒ�, a: ����, d: ������, q: ����): ";
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