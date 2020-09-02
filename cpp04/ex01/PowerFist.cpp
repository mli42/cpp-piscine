#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {
	return ;
}

PowerFist::PowerFist(PowerFist const &src) {
	*this = src;
}

PowerFist::~PowerFist(void) {
	return ;
}

PowerFist	&PowerFist::operator=(PowerFist const &rhs) {
	if (this == &rhs)
		return (*this);
	AWeapon::operator=(rhs);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, PowerFist const &i) {
	(void)i;
//	o << i.;
	return (o);
}

void			PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
