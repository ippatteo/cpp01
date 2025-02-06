#include "HumanB.hpp"

HumanB::HumanB(std::string player2)
{
    player_name = player2;

}

HumanB::~HumanB()
{
    std::cout << "player 2 died" << std::endl;
}
void HumanB::setWeapon(Weapon &newWeapon)
{
   weapon = &newWeapon;
}
void HumanB::attack() const
{
    std::cout << player_name << " attacks with " << weapon->getType() <<std::endl;
}