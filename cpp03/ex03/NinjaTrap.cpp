#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : \
		ClapTrap(60, 60, 120, 120, 1, "", 60, 5, 0, "NINJ4-TP") {
	std::cout << "Default Constructor of NinjaTrap called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : \
		ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0, "NINJ4-TP") {
	std::cout << "Constructor of NinjaTrap called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src) {
	*this = src;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "Destructor of NinjaTrap called" << std::endl;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs) {
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	return (*this);
}

/*
std::ostream	&operator<<(std::ostream &o, NinjaTrap const &i) {
	o << "\e[1;96mSC4V-TP\e[m (\e[95m" << i.name << "\e[m)";
	return (o);
}*/

void		NinjaTrap::ninjaShoebox(FragTrap &trap) {
	std::cout << *this << ": Hello " << trap << \
		", I see you have a VaultHunter.exe!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &trap) {
	std::cout << *this << ": Hello " << trap << \
		", on what challenge do you want to lose your dignity?" << std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &trap) {
	std::cout << *this << ": Hello " << trap << \
		", goodbye!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &trap) {
	std::cout << *this << ": Hello " << trap << \
		", I cooked these pasta for you, my master 🍝" << std::endl;
}
