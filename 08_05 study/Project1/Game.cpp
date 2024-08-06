#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


using std::cout;
//Game::Game()
//{
//    srand(static_cast<unsigned int>(time(0)));
//
//    // ���� ���� 
//    // 1. �ʷϽ�����
//    Monster monSlaim("GreenSlaim", 10 + 21, rand() % 7 + 1, rand() % 2 + 1);
//    // 2. ��Ȳ����
//    Monster monOrangeMush("OrangeMush", 10 + 31, rand() % 10 + 1, rand() % 3 + 1);
//    // 3. ����
//    Monster monPig("Pig", 10 + 16, rand() % 5 + 1, rand() % 4 + 5);
//}


int Game::start()
{
    
    //  ����
    srand(time(NULL));

    //// ���� ���� ���⼭ ����
    //// 1. �ʷϽ�����
    //Monster monSlaim("GreenSlaim", 10 + 21, rand() % 7 + 1, rand() % 2 + 1);
    //// 2. ��Ȳ����
    //Monster monOrangeMush("OrangeMush", 10 + 31, rand() % 10 + 1, rand() % 3 + 1);
    //// 3. ����
    //Monster monPig("Pig", 10 + 16, rand() % 5 + 1, rand() % 4 + 5);


    string playerName;
    cout << "�÷��̾� �̸��� �Է��ϼ���: ";
    cin >> playerName;

    // �ʱ� ���
    Equip startEquip(" �����ǰ��� ", rand() % 3 + 10, rand() % 2 + 5);
    Player player(playerName, 100, startEquip.e_atk, startEquip.e_def);
    int* re = nullptr;
    re = &player.hp;


    // ġƮ
    if (playerName == "admin")
    {
        player.equipWeapon(100);
        cout << " ��admin ���� ������ " << endl;
        player.printInfo();
    }

    // ���� �� ����
    
    while (i<100)
    {
        // ���� ���� 
        // 1. �ʷϽ�����
        Monster monSlaim("GreenSlaim", rand() % 10 + 21, rand() % 7 + 11, rand() % 2 + 1);
        // 2. ��Ȳ����
        Monster monOrangeMush("OrangeMush", rand() % 10 + 31, rand() % 10 + 11, rand() % 3 + 1);
        // 3. ����
        Monster monPig("Pig", rand() % 10 + 16, rand() % 5 + 11, rand() % 4 + 5);




        int pass = rand() % 4;
        //int pass = 3;
        j = 0;
        switch (pass)
        {
        case 0:
            j = 0;
            TextColor(11, 0);
            cout << "===========================================" << endl;
            cout << "===========================================" << endl;
            cout << " �������� ������!!! " << endl << endl;
            TextColor(15, 0);
            while (true)
            {
                cout << " ���� = z // ���� = x " << endl;
                char mode;
                cin >> mode;

                switch (mode)
                {
                case 'z':

                    monSlaim.takeDamage(player.getTotalAttackPower());
                    if (monSlaim.getHp() <= 0)
                    {
                        cout << " ���Ͱ� ���������ϴ�. " << endl;
                        //return 0;
                        j++;
                        break;
                        
                    }

                    // ������ �ݰ�
                    player.takeDamage(monSlaim.getAtk());
                    if (player.getHp() <= 0)
                    {
                        TextColor(12, 0);
                        cout << " �÷��̾ ���������ϴ�. " << endl;
                        TextColor(15, 0);
                        j++;
                        return 0;
                        break;
                    }

                    // Print info
                    player.printInfo();
                    monSlaim.printInfo();

                    cout << "===========================================" << endl << endl;

                    break;

                case 'x':
                    cout << "������ �����ƴ�! " << endl;
                    j++;
                    break;
                    

                default:
                    cout << " �߸��� �Է��Դϴ�. " << endl;
                    j++;
                    break;
                   
                }
                if (j > 0)
                {
                    break;
                }
            } 
           

        case 1:
            j = 0;
            TextColor(14, 0);
            cout << "===========================================" << endl;
            cout << "===========================================" << endl;
            cout << " ��Ȳ������ ������!!! " << endl << endl;
            TextColor(15, 0);
            while (true)
            {
                cout << " ���� = z // ���� = x " << endl;
                char mode;
                cin >> mode;

                switch (mode)
                {
                case 'z':

                    monOrangeMush.takeDamage(player.getTotalAttackPower());
                    if (monOrangeMush.getHp() <= 0)
                    {
                        cout << " ���Ͱ� ���������ϴ�. " << endl;
                        //return 0;
                        j++;
                        break;
                        
                    }

                    // ������ �ݰ�
                    player.takeDamage(monOrangeMush.getAtk());
                    if (player.getHp() <= 0)
                    {
                        TextColor(12, 0);
                        cout << " �÷��̾ ���������ϴ�. " << endl;
                        TextColor(15, 0);
                        j++;
                        return 0;
                        break;
                        
                    }

                    // Print info
                    player.printInfo();
                    monOrangeMush.printInfo();

                    cout << "===========================================" << endl << endl;

                    break;

                case 'x':
                    cout << "������ �����ƴ�! " << endl;
                    j++;
                    break;
                  
                default:
                    cout << " �߸��� �Է��Դϴ�. " << endl;
                    j++;
                    break;
                    
                }
                if (j > 0)
                {
                    break;
                }
            } 
            

        case 2:
            j = 0;
            TextColor(13, 0);
            cout << "===========================================" << endl;
            cout << "===========================================" << endl;
            cout << " ������ ������!!! " << endl << endl;
            TextColor(15, 0);
            while (true)
            {
                cout << " ���� = z // ���� = x " << endl;
                char mode;
                cin >> mode;

                switch (mode)
                {
                case 'z':

                    monPig.takeDamage(player.getTotalAttackPower());
                    if (monPig.getHp() <= 0)
                    {
                        cout << " ���Ͱ� ���������ϴ�. " << endl;
                        //return 0;
                        j++;
                        break;
                    }

                    // ������ �ݰ�
                    player.takeDamage(monPig.getAtk());
                    if (player.getHp() <= 0)
                    {
                        TextColor(12, 0);
                        cout << " �÷��̾ ���������ϴ�. " << endl;
                        TextColor(15, 0);
                        j++;
                        return 0;
                        break;
                    }

                    // Print info
                    player.printInfo();
                    monPig.printInfo();

                    cout << "===========================================" << endl << endl;

                    break;

                case 'x':
                    cout << "������ �����ƴ�! " << endl;
                    j++;
                    break;

                default:
                    cout << " �߸��� �Է��Դϴ�. " << endl;
                    j++;
                    break;
                }
                if (j > 0)
                {
                    break;
                }
            } 
            

        default:
            if (*re == 100) 
            {
                // �ִ� ü���Ͻ� ȸ�������ʰ� �ٷ� �����ϱ�.
                break;
            }
            else
            {
                TextColor(10, 0);
                cout << "===========================================" << endl;
                cout << "===========================================" << endl;
                cout << " ȸ���� �� �̴�! " << endl << endl;
                cout << "===========================================" << endl;
                cout << "===========================================" << endl;
                TextColor(15, 0);
                *re = 100;
                player.printInfo();
                break;
            }
        }

        //while (true)
        //{
        //    cout << " ���� = z // ���� = x " << endl;
        //    char mode;
        //    cin >> mode;
        //
        //    switch (mode)
        //    {
        //    case 'z':
        //
        //        monSlaim.takeDamage(player.getTotalAttackPower());
        //        if (monSlaim.getHp() <= 0)
        //        {
        //            cout << " ���Ͱ� ���������ϴ�. " << endl;
        //            //return 0;
        //            break;
        //        }
        //
        //        // ������ �ݰ�
        //        player.takeDamage(monSlaim.getAtk());
        //        if (player.getHp() <= 0)
        //        {
        //            cout << " �÷��̾ ���������ϴ�. " << endl;
        //            return 0;
        //            break;
        //        }
        //
        //        // Print info
        //        player.printInfo();
        //        monSlaim.printInfo();
        //
        //        cout << "===========================================" << endl << endl;
        //        
        //        break;
        //
        //    case 'x':
        //        cout << "������ �����ƴ�! " << endl;
        //       
        //        break;
        //
        //    default:
        //        cout << " �߸��� �Է��Դϴ�. " << endl;
        //        break;
        //    }
        //    
        //}
        // ���� �� �ݺ��� ����
        i++;
        
    }
    return 0;
}

void Game::TextColor(int font, int backGround)
{
     int Color = font + backGround * 16;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}



//Player Game::createPlayer()
//{
//    string playerName;
//    cout << "�÷��̾� �̸��� �Է��ϼ���: ";
//    cin >> playerName;
//
//    // �ʱ� ���
//    Equip startEquip(" �����ǰ��� ", rand() % 3 + 10, rand() % 2 + 5);
//    Player player(playerName, 100, startEquip.e_atk, startEquip.e_def);
//
//    // ġƮ
//    if (playerName == "admin")
//    {
//        player.equipWeapon(100);
//        cout << " ��admin ���� ������ " << endl;
//        player.printInfo();
//    }
//
//    return player;
//}



//void Game::battle(Player& player, Monster& monster)
//{
//    // �÷��̾ ���� ����
//    monster.takeDamage(player.getTotalAttackPower());
//    if (monster.getHp() <= 0)
//    {
//        cout << " ���Ͱ� ���������ϴ�. " << endl;
//        return;
//    }
//
//    // ������ �ݰ�
//    player.takeDamage(monster.getAtk());
//}

