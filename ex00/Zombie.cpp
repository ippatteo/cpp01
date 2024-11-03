# include "Zombie.hpp"

Zombie::Zombie(std:: name_ganados) : name(name_ganados)
{
	std::cout << "gloria a las Plagas!" << std:endl;
}

Zombie::~Zombie()
{
	std::cout << "Lord..Saddler" << std:endl;
}

void Zombie::announce()
{
	std::cout << Zombie::name << std:endl;

}