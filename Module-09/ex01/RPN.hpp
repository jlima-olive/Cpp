#ifndef RPN_HPP
# define RPN_HPP
# include <stack>
# include <iostream>
# include <sstream>

class RPN
{
private:
	std::stack<char> exp;
public:
	RPN();
	RPN(RPN &ref);
	RPN	&operator=(RPN &ref);
	~RPN();
	std::stack<char> const &getExp() const;
	void revPolNot(std::string str);
};

#endif