#include <iostream>
#include <vector>
#include <utility>

#ifndef PLAYER_H
#define PLAYER_H    

class Player
{
    int lives;
    int wins;
    int points;
    std::vector<std::pair<int, std::string> > hand;

    public:
        Player();
};

#endif      