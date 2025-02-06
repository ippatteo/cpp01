#include "HumanA.hpp"

HumanA::HumanA(std::string player1, Weapon &pl1_weap) : player_name(player1), player1_weapon(pl1_weap)
{

}

HumanA::~HumanA()
{
    std::cout << "player 1 died" << std::endl;
}

void HumanA::attack() const
{
    std::cout << player_name << " attacks with " << player1_weapon.getType() <<std::endl;
}