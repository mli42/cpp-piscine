#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
	*this = src;
}

MateriaSource::~MateriaSource(void) {
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, MateriaSource const &i) {
	(void)i;
//	o << i.;
	return (o);
}

void learnMateria(AMateria *m) {
}

AMateria* createMateria(std::string const &type) {
}
