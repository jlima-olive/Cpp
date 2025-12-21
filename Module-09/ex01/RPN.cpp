#include <RPN.hpp>

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

void RPN::revPolNot(std::string str)
{
	std::stringstream	s(str);
	char				ch;

	s >> ch;
	std::cout << ch << std::endl;
	exp.push(ch);
	while (!s.eof())
		s >> ch;
	while (!exp.empty())
	{
		std::cout << exp.top() << ' ';
		exp.pop();
		if (exp.empty())
			return ;
		std::cout << exp.top() << ' ';
		exp.pop();
		if (exp.empty())
			return ;
		std::cout << exp.top() << ' ' << std::endl;
		exp.pop();
		if (exp.empty())
			return ;
	}
	
}

