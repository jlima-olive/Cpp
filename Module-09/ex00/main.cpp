#include <BitcoinExchange.hpp>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
	BitcoinExchange input("data.csv");
	input.useDataBase(*(av + 1));
}