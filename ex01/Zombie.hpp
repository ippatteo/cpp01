#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		~Zombie(void);
		void announce();
		void set_name(std::string ganado_name);
};

Zombie* zombieHorde( int N, std::string name);
#endif