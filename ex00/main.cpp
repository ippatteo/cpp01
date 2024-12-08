#include "Zombie.hpp"

int main()
{
    Zombie* ganado = newZombie("Dr. Salvador");
    randomChump("Jose");
    delete ganado;
    return 0;
}