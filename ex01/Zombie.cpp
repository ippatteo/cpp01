#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "ahì està, matalo!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Leon: *headshot*\nGanado " << name << ": *dies whispering ''Lord..Saddler''*" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiizzzZ..." << std::endl;
}

void Zombie::set_name(std::string ganado_name)
{
	name = ganado_name;
	return;
}