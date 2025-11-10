#include "Contact.hpp"

class PhoneBook
{
private: 
	Contact ctt[8];
	int		calls;
public:
	PhoneBook();
	void	add();
	void search();
};
