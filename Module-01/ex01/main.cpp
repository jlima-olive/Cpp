#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	Zombie  *zombies;
    int     num = 10;

    zombies = zombieHorde(num, "name");
    delete[] zombies;
}
