#include <iostream>
#include "Player.h"

int main()
{
   
    Player player = Player();
    Player* pPlayer = &player;
    std::cout << pPlayer << std::endl;
    return 0;
}