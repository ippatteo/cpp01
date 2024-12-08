#include "Zombie.hpp"

void randomChump( std::string name)
{
   Zombie ganados(name);
   ganados.announce();
   return;
}