#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string player_name;
        Weapon *weapon;
	public:
		HumanB(std::string player2);
		~HumanB(void);
		void setWeapon(Weapon& newWeapon);
        void attack() const;
};

#endif