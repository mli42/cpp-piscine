#include "Zombie.hpp"

Zombie::Zombie(void) {
	return ;
}

Zombie::Zombie(std::string name, std::string type) : name(name), type(type) {
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "\e[91m";
	std::cout << "/!\\ " << this->name << " (" << this->type << ") " << "passed away...\n";
	std::cout << "\e[m";
}

void Zombie::advert(void) {
	std::cout << "\e[96m";
	std::cout << "<" << this->name << " (" << this->type << ")>" << " Braiiiiiiinnnssss ...\n";
	std::cout << "\e[m";
}
