/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:46:09 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:46:10 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		ClapTrap::randinit = 0;

ClapTrap::ClapTrap(void) {
	if (!ClapTrap::randinit && ++ClapTrap::randinit)
		std::srand(::time(NULL));
	std::cout << "Default Constructor of ClapTrap called" << std::endl;
	SayConstructorQuote();
}

ClapTrap::ClapTrap(unsigned int HitPoints, unsigned int MaxHitPoints, \
    unsigned int energy, unsigned int MaxEnergy, unsigned int level, \
    std::string  name, unsigned int MeleeDamage, unsigned int RangedDamage, \
    unsigned int ArmorDamageReduction, std::string const type) : \
	HitPoints(HitPoints), MaxHitPoints(MaxHitPoints), energy(energy), \
	MaxEnergy(MaxEnergy), level(level), name(name), MeleeDamage(MeleeDamage), \
	RangedDamage(RangedDamage), ArmorDamageReduction(ArmorDamageReduction), \
	type(type) {

	if (!ClapTrap::randinit && ++ClapTrap::randinit)
		std::srand(::time(NULL));
	std::cout << "Constructor of ClapTrap called" << std::endl;
	SayConstructorQuote();
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor of ClapTrap called" << std::endl;
	SayDestructorQuote();
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {
	if (this == &rhs)
		return (*this);
	this->HitPoints = rhs.HitPoints;
	this->MaxHitPoints = rhs.MaxHitPoints;
	this->energy = rhs.energy;
	this->MaxEnergy = rhs.MaxEnergy;
	this->level = rhs.level;
	this->name = rhs.name;
	this->MeleeDamage = rhs.MeleeDamage;
	this->RangedDamage = rhs.RangedDamage;
	this->ArmorDamageReduction = rhs.ArmorDamageReduction;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i) {
	o << "\e[1;96m" << i.type << "\e[m (\e[95m" << i.name << "\e[m)";
	return (o);
}

void	ClapTrap::rangedAttack(std::string const &target) const {
	SayRangedAttQuote();
	std::cout << *this << ": attacks " << target \
	<< " at range, causing " << this->RangedDamage << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target) const {
	SayMeleeAttQuote();
	std::cout << *this << ": attacks " << target \
	<< " , causing " << this->MeleeDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount > this->ArmorDamageReduction)
		amount -= this->ArmorDamageReduction;
	else
		amount = 0;
	if (this->HitPoints >= amount)
		this->HitPoints -= amount;
	else
		this->HitPoints = 0;
	SayTakeDamageQuote();
	std::cout << *this << " is injured! \e[1;91mHP: " \
		<< this->HitPoints << " (-" << amount << ")\e[m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->HitPoints + amount > this->MaxHitPoints)
		this->HitPoints = this->MaxHitPoints;
	else
		this->HitPoints += amount;
	if (this->energy + amount > this->MaxEnergy)
		this->energy = this->MaxEnergy;
	else
		this->energy += amount;
	SayBeRepairedQuote();
	std::cout << *this << ": Life and Energy have been restored " << "\e[1;92m" \
		<< "HP:" << this->HitPoints << " Energy:" << this->energy \
		<< " (+" << amount << ")" << "\e[m" << std::endl;
}

void	ClapTrap::SayQuote(std::string quote) const {
	std::cout << "\e[1;94m" << this->type << "\e[m (\e[95m" << this->name << "\e[m)" \
		<< ": \e[1;93m\"" << quote << "\"\e[m" << std::endl;
}

std::string const	ClapTrap::GetRandQuote(const std::string *quotes, \
		unsigned int const arraysize) {
	const int	alea = std::rand() % arraysize / sizeof(*quotes);
	return (quotes[alea]);
}

void	ClapTrap::SayConstructorQuote(void) const {
	const static std::string quotes[] = {"Check me out!", \
	"Now I will dominate!", "I'm so sexy!", "Hahahahaha! I'm alive!", \
	"Back for more!", "Here we go again!"};

	this->SayQuote(ClapTrap::GetRandQuote(quotes, sizeof(quotes)));
}

void	ClapTrap::SayDestructorQuote(void) const {
	const static std::string quotes[] = {"I'm too pretty to die!", \
		"You can't kill me!", "I'll die the way I lived: annoying!", \
		"Robot down!", "No, nononono NO!"};

	this->SayQuote(ClapTrap::GetRandQuote(quotes, sizeof(quotes)));
}

void	ClapTrap::SayRangedAttQuote(void) const {
	const static std::string quotes[] = {"I'm a tornado of death and bullets!", \
	"Sniped!", "Chk-chk, BOOM!", "Get ready for some ClapTrap face time!", \
	"In yo' FACE!", "I expect you to die!"};

	this->SayQuote(ClapTrap::GetRandQuote(quotes, sizeof(quotes)));
}

void	ClapTrap::SayMeleeAttQuote(void) const {
	const static std::string quotes[] = {"This is why you do your homework!", \
	"Pain school is now in session.", "Guess who?", "Meet professor punch!", \
	"Ready for the PUNCHline?!"};

	this->SayQuote(ClapTrap::GetRandQuote(quotes, sizeof(quotes)));
}

void	ClapTrap::SayTakeDamageQuote(void) const {
	const static std::string quotes[] = {"Why do I even feel pain?!", \
	"Why did they build me out of galvanized flesh?!", "Ow hohoho, that hurts! Yipes!", \
	"My robotic flesh! AAHH!", "Yikes! Ohhoho!", "Woah! Oh! Jeez!", \
	"If only my chassis... weren't made of recycled human body parts! Wahahaha!"};

	this->SayQuote(ClapTrap::GetRandQuote(quotes, sizeof(quotes)));
}

void	ClapTrap::SayBeRepairedQuote(void) const {
	const static std::string quotes[] = {"Make my day.", \
	"Gimme your best shot.", "Hit me, baby!", "Ya feeling lucky, punk?"};

	this->SayQuote(ClapTrap::GetRandQuote(quotes, sizeof(quotes)));
}
