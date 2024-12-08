#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string caliber);
		~Weapon(void);
		const std::string& getType() const;
		void setType(std::string caliber);
};

#endif