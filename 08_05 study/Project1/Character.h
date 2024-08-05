#pragma once


#include <string>
using namespace std;

class Character
{
public:
    Character(const string& name, int hp, int atk, int def);

    // Getter methods
    int getHp() const;
    int getAtk() const;
    int getDef() const;
    string getName() const;

    // Setter methods
    void reduceHp(int amount);

    // Print information �������� �̵�
    //void printInfo() const;


    string name;
    int hp;
    int atk;
    int def;
};
