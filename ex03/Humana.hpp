#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "weapon.hpp"

class HumanA
{
	private:
		std::string player_name;
        Weapon& player1_weapon;
	public:
		HumanA(std::string player1, Weapon& pl1_weap);
		~HumanA(void);
        void attack() const;
};

#endif