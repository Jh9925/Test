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
        cout << " 전투 = z // 도망 = x " << endl;
        char mode;
        cin >> mode;

        switch (mode)
        {
        case 'z':
            // 플레이어가 먼저 공격
            Set::monSlaim.takeDamage(player1.getTotalAttackPower());
            if (monSlaim.getHp() <= 0)
            {
                cout << " 몬스터가 쓰러졌습니다. " << endl;
                return 0;
            }

            // 몬스터의 반격
            player1.takeDamage(monSlaim.getAtk());
            if (player1.getHp() <= 0)
            {
                cout << " 플레이어가 쓰러졌습니다. " << endl;
                return 0;
            }

            // Print info
            player1.printInfo();
            monSlaim.printInfo();

            cout << "===========================================" << endl << endl;
            break;

        case 'x':
            cout << "무사히 도망쳤다! " << endl;
            return 0;

        default:
            cout << " 잘못된 입력입니다. " << endl;
            break;
        }
    }
}
