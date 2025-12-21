#include <RPN.hpp>
#include <cstdlib>

RPN::RPN()
{
	std::cout << "RPN copy assignment operator called" << std::endl;
}

std::stack<char> const &RPN::getExp() const
{
	return (exp);
}

RPN::RPN(RPN &ref) :
exp(ref.exp)
{
	std::cout << "RPN copy constructor" << std::endl;
}

RPN	&RPN::operator=(RPN &ref)
{
	exp = ref.getExp();
	std::cout << "RPN copy assignment operator called" << std::endl;
	return (*this);
}

RPN::~RPN()
{

}
// "0 1 / 2 * 3 + 2 - 5 +"
int	RPN::useStack()
{
	char	ch;
	char	ch2;

	if (exp.empty())
		throw (Error());
	ch = exp.top();
 	exp.pop();
	if (exp.empty() && isdigit(ch))
		return (ch - 48);
	if (exp.empty() || exp.top() != ' ')
		throw (Error());
	exp.pop();
	if (exp.empty() || isdigit(exp.top()) == 0)
		throw (Error());
	ch2 = exp.top();
	exp.pop();
	if (exp.empty() || exp.top() != ' ')
		throw (Error());
	exp.pop();
	if (exp.empty())
		throw (Error());
	switch (ch)
	{
	case '+':
		return ((ch2 - 48) + useStack());
	case '-':
		return (useStack() - (ch2 - 48));
	case '*':
		return ((ch2 - 48) * useStack());
	case '/':
		if (ch2 == '0')
			throw (Error());
		return (useStack() / (ch2 - 48));
	default:
		throw (Error());
	}
}

const char *RPN::Error::what() const throw()
{
	return ("Error");
} 

void RPN::revPolNot(std::string str)
{
	std::stringstream	s(str);


	while (!s.eof())
		exp.push(s.get());
	exp.pop();
	// while (!exp.empty())
	// {
		// std::cout << exp.top();
		// exp.pop();
	// }
	// std::cout << "exp.top()" << std::endl;
	// exit(0);
	try
	{
		std::cout << useStack() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

