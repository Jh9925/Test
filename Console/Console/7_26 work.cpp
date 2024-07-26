#include <iostream>

using namespace std;

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


// ���� ī�带 �ʱ�ȭ�մϴ�.
void initializeCard(int card[5][5])
{
    // 1���� 25������ ���ڸ� �����Ͽ� �迭�� �����մϴ�.
    int numbers[25];
    for (int i = 0; i < 25; ++i)
    {
        numbers[i] = i + 1;
    }

    // ���� ī�忡 ���ڸ� ��ġ�մϴ�.
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

// ���� ī�带 ����մϴ�.
void printCard(int card[5][5])
{
    cout << "     �� �� ��" << endl << endl;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (card[i][j] == -1)
            {
                cout << " *  "; // ��ŷ�� ��ȣ�� '*'�� ǥ���մϴ�.
            }
            else
            {
                cout << card[i][j];
                
                 if (card[i][j] < 10)
                 {
                     cout << " "; // 1�ڸ� ������ ��� �߰� ����
                 }
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// ��ȣ�� ���� ī�忡 �ִ��� Ȯ���ϰ� ��ŷ�մϴ�.
bool markNumber(int card[5][5], int number)
{
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (card[i][j] == number)// �ݺ������鼭 �Է��� ���ڰ� �ִ� ��ġ ã��
            {
                card[i][j] = -1;     // ������ ���� -1�� �� ����
                return true;
            }
        }
    }
    return false;
}

// ���� �� �� �ϼ��Ǿ����� Ȯ���մϴ�.
int countBingoLines(int card[5][5])
{
    int bingoLines = 0;

    // ���� üũ
    for (int i = 0; i < 5; ++i)
    {
        bool hBingo = true;
        for (int j = 0; j < 5; ++j)
        {
            if (card[i][j] != -1)
            {
                hBingo = false;// ���� �ƴ� ���ڰ� �ִ� ��� hBingo�� false�� �����մϴ�.
                               // �� �̻� ���� ���� �˻��� �ʿ䰡 �����Ƿ� break�� ����Ͽ� ���� ������ �����մϴ�.
                break;
            }
        }
        if (hBingo)
        {
            bingoLines++;
        }
    }

    // ���� üũ
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

    // �밢�� üũ
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
    // ������ 5 x 5
    int card[5][5];
    int number;

    // �迭�� ���� �ֱ�
    initializeCard(card);

    
   // ������ ���
    printCard(card);
    
    while (true)
    {
        cout << endl << "���ڸ� �����ϼ��� : ";
        cin >> number;
        if (markNumber(card, number))
        {
            cout << "������ ���� : " << number << endl << endl;
        }
        else
        {
            cout << "���� ���� �Դϴ�. " << endl << endl;
        }

       
        printCard(card);

        int bingoLines = countBingoLines(card);

        // cout << " ---- " << bingoLines << endl; �׽�Ʈ��
        
        if(bingoLines == 1)
        {
            cout << endl << "����! " << bingoLines << " �� �ϼ�!!!!" << endl << endl;
        }else if(bingoLines == 2)
        {
            cout << endl << "����! " << bingoLines << " �� �ϼ�!!!!" << endl << endl;
        }
        else if (bingoLines >= 3)
        {
            cout << endl << "����! " << bingoLines << " �� �ϼ�!!!!" << endl << endl;
            break;
        }
    }    
}





/*



// ���ڸ� �����ϰ� �����ϴ�.
    std:srand(time(NULL));
    for (int i = 0; i < 25; i++) 
    {
        int j = std::rand() % 25;
        std::swap(numbers[i], numbers[j]); // ����
    }
    
    */