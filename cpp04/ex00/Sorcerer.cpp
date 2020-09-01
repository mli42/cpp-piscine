#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
	std::cout << "Instanciate Sorcerer without parameters /!\\" << std::endl;
	return ;
}

Sorcerer::Sorcerer(std::string const name, std::string const title) : \
		_name(name), _title(title) {
	std::cout << name << ", " << title \
		<< ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
	*this = src;
}

Sorcerer::~Sorcerer(void) {
	return ;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i) {
	o << "I am " << i.getName() << ", " \
		<< i.getTitle() << ", and I like ponies!" << std::endl;
	return (o);
}
