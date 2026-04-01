#ifndef RPN_HPP
# define RPN_HPP
# include <stack>
# include <iostream>
# include <sstream>

class RPN
{
private:
	std::stack<int> st;
	int	useStack();
public:
	RPN();
	RPN(RPN &ref);
	RPN	&operator=(RPN &ref);
	~RPN();
	std::stack<int> const &getSt() const;

	void revPolNot(std::string str);
	class Error : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif