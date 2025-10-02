#include <iostream>
#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string	name) : name(name) {/*  std::cout << "initialized"; */}
Zombie::Zombie()
{
	name = "Zombie";
	name.append(std::to_string((zombie_count)));
    zombie_count++;
	/*  std::cout << "initialized"; */
}
Zombie::~Zombie()
{
	std::cout << name << ": Dead. Again. Bleh..." << std::endl;
}
void	Zombie::givename(std::string name){ this->name = name;}

int Zombie::zombie_count = 0;
