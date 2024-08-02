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
        cout << name << " - ü��: " << hp << ", ���ݷ�: " << atk << ", ����: " << def << endl;
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
        cout << "�÷��̾ " << (amount - attributesPlayer.getDef()) << " ���ظ� �Ծ����ϴ�." << endl << endl;
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
        cout << "���Ͱ� " << (amount - attributesMonster.getDef()) << " ���ظ� �Ծ����ϴ�." << endl << endl;
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
    cout << "�÷��̾� �̸��� �Է��ϼ���: ";
    cin >> playerName;
    cout << "�÷��̾� ü��, ���ݷ�, ������ �Է��ϼ��� (��: 100 20 5): ";
    cin >> playerHp >> playerAtk >> playerDef;

    Player player1(playerName, playerHp, playerAtk, playerDef);

    string monsterName;
    int monsterHp, monsterAtk, monsterDef;
    cout << "���� �̸��� �Է��ϼ���: ";
    cin >> monsterName;
    cout << "���� ü��, ���ݷ�, ������ �Է��ϼ��� (��: 50 10 5): ";
    cin >> monsterHp >> monsterAtk >> monsterDef;

    Monster mon1(monsterName, monsterHp, monsterAtk, monsterDef);

    while (true) 
    {
        cout << " ���� = z // ���� = x " << endl;
        char mode;
        cin >> mode;

        switch (mode) 
        {
        case 'z':
            // �÷��̾ ���� ����
            mon1.takeDamage(player1.getAttackPower());
            if (mon1.getHp() <= 0) 
            {
                cout << " ���Ͱ� ���������ϴ�. " << endl;
                return 0;
            }

            // ������ �ݰ�
            player1.takeDamage(mon1.getAttackPower());
            if (player1.getHp() <= 0) 
            {
                cout << " �÷��̾ ���������ϴ�. " << endl;
                return 0;
            }

            // Print info
            player1.printInfo();
            mon1.printInfo();

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

    return 0;
}