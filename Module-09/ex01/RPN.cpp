#include <RPN.hpp>
#include <cstdlib>

RPN::RPN()
{
	std::cout << "RPN copy assignment operator called" << std::endl;
}

//RPN::RPN(RPN &ref) :
//digit(ref.digit),
//symb(ref.symb)
//{
	//std::cout << "RPN copy constructor" << std::endl;
//}

RPN::RPN(RPN &ref) :
st(ref.st)
{
	std::cout << "RPN copy constructor" << std::endl;
}

std::stack<int> const &RPN::getSt() const
{
	return (st);
}

RPN	&RPN::operator=(RPN &ref)
{
	st = ref.getSt();
	std::cout << "RPN copy assignment operator called" << std::endl;
	return (*this);
}

RPN::~RPN()
{

}
// "0 1 / 2 * 3 + 2 - 5 +"

const char *RPN::Error::what() const throw()
{
	return ("Error");
} 
#include <stdlib.h>

void RPN::revPolNot(std::string str)
{
	int d1;
	int d2;

	try
	{
		for (std::string::iterator it = str.begin(); it != str.end(); it++)
		{
			while (*it == ' ')
				it++;
			if (it == str.end())
				break;
			if (isdigit(*it))
				st.push(*it - 48);
			else
			{
				if (st.size() < 2)
					throw (Error());
				d1 = st.top();
				st.pop();
				d2 = st.top();
				st.pop();
				switch (*it)
				{
					case '+':
						st.push(d2 + d1);
						break;
					case '-':
						st.push(d2 - d1);
						break;
					case '*':
						st.push(d2 * d1);
						break;
					case '/':
						if (d1 == '0')
							throw (Error());
						st.push(d2 / d1);
						break;
					default:
						throw (Error());
				}
			}
		}
		int	print = st.top();
		st.pop();
		if (st.empty())
			std::cout << print << std::endl;
		else
			throw (Error());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

