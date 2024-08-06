#include "Player.h"

Player::Player(const string& n, const int h)
	: Unit(n,h)// <- 부모생성자 호툴해서 집어넣기.

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
	// 맞는거 구현
}
