#include "Zombie.hpp"

int main()
{
   Zombie* ganados = zombieHorde(20, "jose");
   delete [] ganados;
    return 0;
}