#include <PmergeMe.hpp>

int main (int ac, char **av)
{
	if (ac < 2)
		return (1);
	try
	{
		std::cout << jacobsthal(8) << std::endl;
		// exit(0);
		PmergeMe (av + 1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
