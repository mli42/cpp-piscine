#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	return ;
}

FragTrap::FragTrap(std::string name) : name(name), HitPoints(100), \
	MaxHitPoints(100), energy(100), MaxEnergy(100), level(1), MeleeDamage(30), \
	RangedDamage(20), ArmorDamageReduction(5) {
	std::cout << "Constructor with name called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
}

FragTrap::~FragTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	if (this != &rhs)
	{
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, FragTrap const &i) {
	(void)i;
//	o << i.;
	return (o);
}

void	FragTrap::rangedAttack(std::string const &target) const {
	std::cout << "FR4G-TP: " << this->name << " attacks " << target \
	<< " at range, causing " << this->RangedDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target) const {
	std::cout << "FR4G-TP: " << this->name << " attacks " << target \
	<< " , causing " << this->MeleeDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (amount > this->ArmorDamageReduction)
		amount -= this->ArmorDamageReduction;
	else
		amount = 0;
	if (this->HitPoints >= amount)
		this->HitPoints -= amount;
	else
		this->HitPoints = 0;
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (this->HitPoints + amount > this->MaxHitPoints)
		this->HitPoints = this->MaxHitPoints;
	else
		this->HitPoints += amount;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	const static int AttackCost = 25;

	if (this->energy >= AttackCost)
	{
		this->energy -= AttackCost;
		; // Do attack
	}
	else
		std::cout << "Sbir! I run out of energy!" << std::endl;
}
