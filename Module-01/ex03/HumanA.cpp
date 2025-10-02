#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

HumanA::HumanA(std::string name, Weapon &weapon)
 : name(name)
 , weapon(weapon)
{
}

HumanA::~HumanA()   {}
