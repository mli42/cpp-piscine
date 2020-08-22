#include "Zombie.hpp"

Zombie::Zombie(void) {
	;
}

Zombie::~Zombie(void) {
	std::cout << "\e[91m";
	std::cout << "/!\\ " << this->name << " (" << this->type << ") " << "passed away...\n";
	std::cout << "\e[m";
}

void Zombie::announce(void) {
	std::cout << "\e[96m";
	std::cout << "<" << this->name << " (" << this->type << ")>" << " Braiiiiiiinnnssss ...\n";
	std::cout << "\e[m";
}
