#include <BitcoinExchange.hpp>

int main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "" << std::endl;
	BitcoinExchange input("data.csv");
	input.useDataBase("invalid_input.txt");
}