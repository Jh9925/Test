#include "Player.h"

Player::Player(const string& n, const int h)
	: Unit(n,h)// <- �θ������ ȣ���ؼ� ����ֱ�.

{

}

Player::~Player()
{

}

void Player::Attack() const
{
	std::cout << "qweqwew" << std::endl;
}

void Player::TakeDamage(int damage)
{
	// �´°� ����
}
