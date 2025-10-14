#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;

    randomChump("joao");
    zombie = newZombie("guy1");
    delete (zombie);
    zombie = newZombie("guy2");
    delete (zombie);
}
