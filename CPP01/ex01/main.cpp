#include "Zombie.hpp"

int main()
{
    int N = 5;

    Zombie* zombie = zombieHorde(N, "Lili");
    for (int i = 0; i < N; i++)
        zombie[i].announce();
    delete [] zombie;
    return (0);
}
