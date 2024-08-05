#include <iostream>
#include<time.h>
#include "Player.h"
#include "Monster.h"
#include "Equip.h"
#include "Fight.h"
#include "Game.h"

int Fight::fight()
{
    while (true)
    {
        cout << " ���� = z // ���� = x " << endl;
        char mode;
        cin >> mode;

        switch (mode)
        {
        case 'z':
            // �÷��̾ ���� ����
            Set::monSlaim.takeDamage(player1.getTotalAttackPower());
            if (monSlaim.getHp() <= 0)
            {
                cout << " ���Ͱ� ���������ϴ�. " << endl;
                return 0;
            }

            // ������ �ݰ�
            player1.takeDamage(monSlaim.getAtk());
            if (player1.getHp() <= 0)
            {
                cout << " �÷��̾ ���������ϴ�. " << endl;
                return 0;
            }

            // Print info
            player1.printInfo();
            monSlaim.printInfo();

            cout << "===========================================" << endl << endl;
            break;

        case 'x':
            cout << "������ �����ƴ�! " << endl;
            return 0;

        default:
            cout << " �߸��� �Է��Դϴ�. " << endl;
            break;
        }
    }
}
