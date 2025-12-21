#include <RPN.hpp>

int main (int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "No expression input" << std::endl, 1);
	RPN poslishmath;

	std::cout << *(av + 1) << std::endl;
	poslishmath.revPolNot(*(av + 1));
}
