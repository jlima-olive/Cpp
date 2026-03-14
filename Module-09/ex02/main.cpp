#include <PmergeMe.hpp>

int main (int ac, char **av)
{
	if (ac < 2)
		return (1);
	try
	{
		PmergeMe (av + 1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
