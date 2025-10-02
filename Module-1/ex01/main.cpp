#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	Zombie  *zombies;
    int     num = 10;

    zombies = zombieHorde(num, "name");
    for (int i = 0; i < num; i++)
        zombies[i].announce();
    delete[] zombies;
}
