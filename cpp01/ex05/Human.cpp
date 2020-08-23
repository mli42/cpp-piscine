#include "Human.hpp"

Human::Human(void) {
	return ;
}

Human::~Human(void) {
	return ;
}

std::string	Human::identify(void) const {
	return (this->_Brain.identify());
}

const Brain	&Human::getBrain(void) const {
	return (this->_Brain);
}
