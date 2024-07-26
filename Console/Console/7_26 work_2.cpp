#include <iostream>

using namespace std;

// ���� �� ����
void PUZZLE(int puzzle[4][4])
{
	// ���� �迭 1�������
	int num[16];
	for (int i = 0; i < 16; i++)
	{
		num[i] = i +1 ;
	}
	
	// ���� ���� �ֱ�
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



/*

void moveTile(int puzzle[4][4], char direction)
{
    int empty_i, empty_j;

    // ��ĭ ��ġ ã��
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

    // ���� üũ �� Ÿ�� ��ȯ
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
    int puzzle[4][4];
    PUZZLE(puzzle);
    puzzle[3][3] = -1;

    while (true)
    {
        printPuzzle(puzzle);
        cout << "�̵��� ������ �Է��ϼ��� (w: ��, s: �Ʒ�, a: ����, d: ������, q: ����): ";
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
����
PUZZLE �Լ�: ���� �迭�� �ʱ�ȭ�մϴ�.
printPuzzle �Լ�: ���� ���� ���¸� ����մϴ�.
moveTile �Լ�: ����� �Է¿� ���� ��ĭ�� �̵���ŵ�ϴ�.
��ĭ�� ��ġ�� ã��, ����ڰ� �Է��� ���⿡ ���� ��ĭ�� �̵��մϴ�.
�̵��� �� ���� ��� �޽����� ����մϴ�.
main �Լ�:
������ �ʱ�ȭ�ϰ� ��ĭ�� �����մϴ�.
����ڷκ��� �Է��� �޾� ��ĭ�� �̵���Ű�� ������ ������Ʈ�մϴ�.
'q'�� �Է��ϸ� ������ �����մϴ�.
�� �ڵ�� ������ �ʱ�ȭ�ϰ�, ����� �Է¿� ���� ������ �����Ͽ� ��ĭ�� �̵���Ű�� ���� ���¸� ������Ʈ�մϴ�.




*/








int main()
{
	int puzzle[4][4];
	PUZZLE(puzzle);
	puzzle[3][3] = -1;
	printPuzzle(puzzle);


}


