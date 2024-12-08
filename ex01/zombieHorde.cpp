#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie* ganados;
    if (N > i)
        ganados = new Zombie[N];
    else
    {
        std::cout << "invalid number of plagas!" << std::endl;
        return 0;
    }
    while (i < N)
    {
        ganados[i].set_name(name);
        ganados[i++].announce();
    }
    return (ganados);
}