#include "Brain.hpp"

Brain::Brain(void) {
	return ;
}

Brain::~Brain(void) {
	return ;
}

std::string Brain::identify(void) const {
	std::ostringstream ostr;

	ostr << this;

	return (ostr.str());
}
