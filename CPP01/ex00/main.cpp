#include "Zombie.hpp"

int main()
{
    Zombie max("Max(Stack)");
    max.announce();
    Zombie *zombie = newZombie("Mike(Heap)");
    zombie->announce();
    Zombie *zombie1 = newZombie("MikeBrother(Heap)");
    zombie1->announce();
    delete zombie;
    delete zombie1;
    randomChump("Julia(Stack)");
    return (0);
};