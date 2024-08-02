#include <iostream>

using namespace std;

class CharacterAttributes 
{
public:
    CharacterAttributes(const string& name, int hp, int atk, int def)
        : name(name), hp(hp), atk(atk), def(def) {}

    // Getter methods
    int getHp() const { return hp; }
    int getAtk() const { return atk; }
    int getDef() const { return def; }
    string getName() const { return name; }

    // Setter methods
    void reduceHp(int amount) 
    {
        if ((amount - def) > 0) 
        {
            hp -= (amount - def);
            if (hp < 0) hp = 0;
        }
        else 
        {
            cout << " MISS " << endl;
        }
    }

    // Print information
    void printInfo() const 
    {
        cout << name << " - 체력: " << hp << ", 공격력: " << atk << ", 방어력: " << def << endl;
    }

private:
    string name;
    int hp;
    int atk;
    int def;
};

class Player 
{
public:
    Player(const string& name, int hp, int atk, int def) : attributesPlayer(name, hp, atk, def)
    {
        attributesPlayer.printInfo();
    }

    // Getter for HP
    int getHp() const
    { 
        return attributesPlayer.getHp();
    }

    // Reduce HP when attacked
    void takeDamage(int amount) 
    {
        attributesPlayer.reduceHp(amount);
        cout << "플레이어가 " << (amount - attributesPlayer.getDef()) << " 피해를 입었습니다." << endl << endl;
    }

    // Print player info
    void printInfo() const
    { 
        attributesPlayer.printInfo();
    }

    // Getter for Attack Power
    int getAttackPower() const
    {
        return attributesPlayer.getAtk();
    }

private:
    CharacterAttributes attributesPlayer;
};

class Monster 
{
public:
    Monster(const string& name, int hp, int atk, int def) : attributesMonster(name, hp, atk, def)
    {
        attributesMonster.printInfo();
    }

    // Getter for HP
    int getHp() const 
    { 
        return attributesMonster.getHp();
    }

    // Reduce HP when attacked
    void takeDamage(int amount) 
    {
        attributesMonster.reduceHp(amount);
        cout << "몬스터가 " << (amount - attributesMonster.getDef()) << " 피해를 입었습니다." << endl << endl;
    }

    // Print monster info
    void printInfo() const 
    { 
        attributesMonster.printInfo();
    }

    // Getter for Attack Power
    int getAttackPower() const
    { 
        return attributesMonster.getAtk();
    }

private:
    CharacterAttributes attributesMonster;
};

int main() 
{
    string playerName;
    int playerHp, playerAtk, playerDef;
    cout << "플레이어 이름을 입력하세요: ";
    cin >> playerName;
    cout << "플레이어 체력, 공격력, 방어력을 입력하세요 (예: 100 20 5): ";
    cin >> playerHp >> playerAtk >> playerDef;

    Player player1(playerName, playerHp, playerAtk, playerDef);

    string monsterName;
    int monsterHp, monsterAtk, monsterDef;
    cout << "몬스터 이름을 입력하세요: ";
    cin >> monsterName;
    cout << "몬스터 체력, 공격력, 방어력을 입력하세요 (예: 50 10 5): ";
    cin >> monsterHp >> monsterAtk >> monsterDef;

    Monster mon1(monsterName, monsterHp, monsterAtk, monsterDef);

    while (true) 
    {
        cout << " 전투 = z // 도망 = x " << endl;
        char mode;
        cin >> mode;

        switch (mode) 
        {
        case 'z':
            // 플레이어가 먼저 공격
            mon1.takeDamage(player1.getAttackPower());
            if (mon1.getHp() <= 0) 
            {
                cout << " 몬스터가 쓰러졌습니다. " << endl;
                return 0;
            }

            // 몬스터의 반격
            player1.takeDamage(mon1.getAttackPower());
            if (player1.getHp() <= 0) 
            {
                cout << " 플레이어가 쓰러졌습니다. " << endl;
                return 0;
            }

            // Print info
            player1.printInfo();
            mon1.printInfo();

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

    return 0;
}