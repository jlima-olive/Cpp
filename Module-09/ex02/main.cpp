#include <PmergeMe.hpp>
#include <cstdlib>

int	jacobsthal(unsigned int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (jacobsthal(n - 1) + 2 * jacobsthal(n - 2));
}

int main (int ac, char **av)
{
	if (ac < 2)
		return (1);
	try
	{
		std::cout << jacobsthal(8) << std::endl;
		exit(0);
		PmergeMe (av + 1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
