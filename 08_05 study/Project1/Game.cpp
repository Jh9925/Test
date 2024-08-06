#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


using std::cout;
//Game::Game()
//{
//    srand(static_cast<unsigned int>(time(0)));
//
//    // 몬스터 셋팅 
//    // 1. 초록슬라임
//    Monster monSlaim("GreenSlaim", 10 + 21, rand() % 7 + 1, rand() % 2 + 1);
//    // 2. 주황버섯
//    Monster monOrangeMush("OrangeMush", 10 + 31, rand() % 10 + 1, rand() % 3 + 1);
//    // 3. 돼지
//    Monster monPig("Pig", 10 + 16, rand() % 5 + 1, rand() % 4 + 5);
//}


int Game::start()
{
    
    //  랜덤
    srand(time(NULL));

    //// 몬스터 셋팅 여기서 안함
    //// 1. 초록슬라임
    //Monster monSlaim("GreenSlaim", 10 + 21, rand() % 7 + 1, rand() % 2 + 1);
    //// 2. 주황버섯
    //Monster monOrangeMush("OrangeMush", 10 + 31, rand() % 10 + 1, rand() % 3 + 1);
    //// 3. 돼지
    //Monster monPig("Pig", 10 + 16, rand() % 5 + 1, rand() % 4 + 5);


    string playerName;
    cout << "플레이어 이름을 입력하세요: ";
    cin >> playerName;

    // 초기 장비
    Equip startEquip(" 시작의갑옷 ", rand() % 3 + 10, rand() % 2 + 5);
    Player player(playerName, 100, startEquip.e_atk, startEquip.e_def);
    int* re = nullptr;
    re = &player.hp;


    // 치트
    if (playerName == "admin")
    {
        player.equipWeapon(100);
        cout << " ★admin 무기 장착★ " << endl;
        player.printInfo();
    }

    // 랜덤 적 조우
    
    while (i<100)
    {
        // 몬스터 셋팅 
        // 1. 초록슬라임
        Monster monSlaim("GreenSlaim", rand() % 10 + 21, rand() % 7 + 11, rand() % 2 + 1);
        // 2. 주황버섯
        Monster monOrangeMush("OrangeMush", rand() % 10 + 31, rand() % 10 + 11, rand() % 3 + 1);
        // 3. 돼지
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
            cout << " 슬라임을 만났다!!! " << endl << endl;
            TextColor(15, 0);
            while (true)
            {
                cout << " 전투 = z // 도망 = x " << endl;
                char mode;
                cin >> mode;

                switch (mode)
                {
                case 'z':

                    monSlaim.takeDamage(player.getTotalAttackPower());
                    if (monSlaim.getHp() <= 0)
                    {
                        cout << " 몬스터가 쓰러졌습니다. " << endl;
                        //return 0;
                        j++;
                        break;
                        
                    }

                    // 몬스터의 반격
                    player.takeDamage(monSlaim.getAtk());
                    if (player.getHp() <= 0)
                    {
                        TextColor(12, 0);
                        cout << " 플레이어가 쓰러졌습니다. " << endl;
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
                    cout << "무사히 도망쳤다! " << endl;
                    j++;
                    break;
                    

                default:
                    cout << " 잘못된 입력입니다. " << endl;
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
            cout << " 주황버섯을 만났다!!! " << endl << endl;
            TextColor(15, 0);
            while (true)
            {
                cout << " 전투 = z // 도망 = x " << endl;
                char mode;
                cin >> mode;

                switch (mode)
                {
                case 'z':

                    monOrangeMush.takeDamage(player.getTotalAttackPower());
                    if (monOrangeMush.getHp() <= 0)
                    {
                        cout << " 몬스터가 쓰러졌습니다. " << endl;
                        //return 0;
                        j++;
                        break;
                        
                    }

                    // 몬스터의 반격
                    player.takeDamage(monOrangeMush.getAtk());
                    if (player.getHp() <= 0)
                    {
                        TextColor(12, 0);
                        cout << " 플레이어가 쓰러졌습니다. " << endl;
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
                    cout << "무사히 도망쳤다! " << endl;
                    j++;
                    break;
                  
                default:
                    cout << " 잘못된 입력입니다. " << endl;
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
            cout << " 돼지를 만났다!!! " << endl << endl;
            TextColor(15, 0);
            while (true)
            {
                cout << " 전투 = z // 도망 = x " << endl;
                char mode;
                cin >> mode;

                switch (mode)
                {
                case 'z':

                    monPig.takeDamage(player.getTotalAttackPower());
                    if (monPig.getHp() <= 0)
                    {
                        cout << " 몬스터가 쓰러졌습니다. " << endl;
                        //return 0;
                        j++;
                        break;
                    }

                    // 몬스터의 반격
                    player.takeDamage(monPig.getAtk());
                    if (player.getHp() <= 0)
                    {
                        TextColor(12, 0);
                        cout << " 플레이어가 쓰러졌습니다. " << endl;
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
                    cout << "무사히 도망쳤다! " << endl;
                    j++;
                    break;

                default:
                    cout << " 잘못된 입력입니다. " << endl;
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
                // 최대 체력일시 회복하지않고 바로 진행하기.
                break;
            }
            else
            {
                TextColor(10, 0);
                cout << "===========================================" << endl;
                cout << "===========================================" << endl;
                cout << " 회복의 샘 이다! " << endl << endl;
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
        //    cout << " 전투 = z // 도망 = x " << endl;
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
        //            cout << " 몬스터가 쓰러졌습니다. " << endl;
        //            //return 0;
        //            break;
        //        }
        //
        //        // 몬스터의 반격
        //        player.takeDamage(monSlaim.getAtk());
        //        if (player.getHp() <= 0)
        //        {
        //            cout << " 플레이어가 쓰러졌습니다. " << endl;
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
        //        cout << "무사히 도망쳤다! " << endl;
        //       
        //        break;
        //
        //    default:
        //        cout << " 잘못된 입력입니다. " << endl;
        //        break;
        //    }
        //    
        //}
        // 제일 밖 반복문 제어
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
//    cout << "플레이어 이름을 입력하세요: ";
//    cin >> playerName;
//
//    // 초기 장비
//    Equip startEquip(" 시작의갑옷 ", rand() % 3 + 10, rand() % 2 + 5);
//    Player player(playerName, 100, startEquip.e_atk, startEquip.e_def);
//
//    // 치트
//    if (playerName == "admin")
//    {
//        player.equipWeapon(100);
//        cout << " ★admin 무기 장착★ " << endl;
//        player.printInfo();
//    }
//
//    return player;
//}



//void Game::battle(Player& player, Monster& monster)
//{
//    // 플레이어가 먼저 공격
//    monster.takeDamage(player.getTotalAttackPower());
//    if (monster.getHp() <= 0)
//    {
//        cout << " 몬스터가 쓰러졌습니다. " << endl;
//        return;
//    }
//
//    // 몬스터의 반격
//    player.takeDamage(monster.getAtk());
//}

