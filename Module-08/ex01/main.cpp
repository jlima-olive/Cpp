#include <Span.hpp>

int main()
{
	std::vector<int> arr;

	for (int ind = 0; ind < 20; ind++)
		arr.push_back(ind);

	Span sp = Span(20);
	std::vector<int>::iterator it = arr.begin();
	sp.insert(it, arr.size());
//
	sp.addNumber(20);
	//sp.addNumber(3);
	//sp.addNumber(17);
	//sp.addNumber(9);
	//sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
