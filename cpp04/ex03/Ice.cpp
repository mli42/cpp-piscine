#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	return ;
}

Ice::Ice(Ice const &src) {
	*this = src;
}

Ice::~Ice(void) {
	return ;
}

Ice	&Ice::operator=(Ice const &rhs) {
	if (this == &rhs)
		return (*this);
	AMateria::operator=(rhs);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Ice const &i) {
	(void)i;
//	o << i.;
	return (o);
}

AMateria		*Ice::clone(void) const {
	Ice *copy = new Ice(*this);
	return (copy);
}

void			AMateria::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" \
		<< std::endl;
}
