#include "Player.h"

Player::Player()
{
    lives = 3;
    points = 0;
    wins = 0;
    hand.push_back(std::make_pair(1, "hearts"));
}