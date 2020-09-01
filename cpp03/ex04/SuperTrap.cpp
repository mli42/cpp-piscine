#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap(), FragTrap(), NinjaTrap() {
	std::cout << "Default Constructor of SuperTrap called" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : \
		ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5, "SUP3R-TP"), \
		FragTrap(name), NinjaTrap(name) {
	std::cout << "Constructor of SuperTrap called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &src) {
	*this = src;
}

SuperTrap::~SuperTrap(void) {
	std::cout << "Destructor of SuperTrap called" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs) {
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	return (*this);
}

/*
std::ostream	&operator<<(std::ostream &o, SuperTrap const &i) {
	o << "\e[1;96mSC4V-TP\e[m (\e[95m" << i.name << "\e[m)";
	return (o);
}*/

void	SuperTrap::rangedAttack(std::string const &target) const {
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target) const {
	NinjaTrap::meleeAttack(target);
}
