#include "Character.hpp"

Character::Character(void) {
	return ;
}

Character::Character(std::string const &name) : \
		_name(name), _apcount(40), _cweapon(NULL) {
	return ;
}

Character::Character(Character const &src) {
	*this = src;
}

Character::~Character(void) {
	return ;
}

Character	&Character::operator=(Character const &rhs) {
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_apcount = rhs._apcount;
	this->_cweapon = rhs._cweapon;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Character const &i) {
	o << i.getName() << " has " << i.getAPCount() << " AP and ";
	if (i.getWeapon())
		o << "wields a " << i.getWeapon()->getName();
	else
		o << "is unarmed";
	o << std::endl;
	return (o);
}

void		Character::recoverAP(void) {
	if (this->_apcount + 10 <= 40)
		this->_apcount += 10;
	else
		this->_apcount = 40;
}

void		Character::attack(Enemy *&enemy) {
	if (!enemy)
		std::cout << "Enemy already dead or never existed!" << std::endl;
	if (!this->_cweapon || !enemy || this->_cweapon->getAPCost() > this->_apcount)
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() \
		<< " with a " << this->_cweapon->getName() << std::endl;
	this->_apcount -= this->_cweapon->getAPCost();
	this->_cweapon->attack();
	enemy->takeDamage(this->_cweapon->getDamage());
	if (enemy->getHP() <= 0)
	{
		delete enemy;
		enemy = NULL;
	}
}

void			Character::equip(AWeapon *weapon) { this->_cweapon = weapon; }
int				Character::getAPCount(void) const { return (this->_apcount); }
AWeapon const	*Character::getWeapon(void) const { return (this->_cweapon); }
std::string		Character::getName(void) const { return (this->_name); }
