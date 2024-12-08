#include "Zombie.hpp"

Zombie::Zombie(std::string name_ganados) : name(name_ganados)
{
	std::cout << "Gloria a las Plagas! Ganado " << name << " nacìo" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Leon: *headshot*\nGanado " << name << ": *dies whispering ''Lord..Saddler''*" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiizzzZ..." << std::endl;
}