#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
private:
	std::string	name;
	static int	zombie_count;
public:
	void	announce(void);
	Zombie(std::string	name); 
	Zombie();
	~Zombie();
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif