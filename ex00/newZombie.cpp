#include "Zombie.hpp"

Zombie* newZombie( std::string name)
{
    Zombie* ganados = new Zombie(name);
    return (ganados);
}