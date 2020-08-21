#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type) {
	return ;
}

Zombie::~Zombie(void) {
	return ;
}

void Zombie::advert(void) {
	std::cout << "<" << this->name << " (" << this->type << ")>" << " Braiiiiiiinnnssss ...\n";
}
