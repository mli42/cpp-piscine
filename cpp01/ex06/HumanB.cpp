#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void) const {
	std::cout << this->name << " attacks with his " << this->weapon->getType() \
		<< std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}
