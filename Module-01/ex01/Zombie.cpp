#include <iostream>
#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string	name) : name(name)
{
	announce();
}

Zombie::Zombie()
{
	name = "Zombie";
	// name.append(std::to_string((zombie_count)));
    zombie_count++;
	announce();
}
Zombie::~Zombie()
{
	std::cout << name << ": Dead. Again. Bleh..." << std::endl;
    zombie_count--;
}
void	Zombie::set_name(std::string name){ this->name = name;}

int Zombie::zombie_count = 0;
