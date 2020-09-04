#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src) {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = src;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh..." << std::endl;
	return ;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, TacticalMarine const &i) {
	(void)i;
//	o << i.;
	return (o);
}

ISpaceMarine	*TacticalMarine::clone(void) const {
	TacticalMarine *copy = new TacticalMarine(*this);
	return (copy);
}

void			TacticalMarine::battleCry(void) const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack(void) const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack(void) const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}
