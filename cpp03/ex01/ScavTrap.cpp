/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:46:06 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:46:07 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : HitPoints(100), MaxHitPoints(100), energy(50), \
	MaxEnergy(50), level(1), MeleeDamage(20), RangedDamage(15), \
	ArmorDamageReduction(3) {
	std::srand(::time(NULL));
	std::cout << "Default Constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : HitPoints(100), MaxHitPoints(100), \
	energy(50), MaxEnergy(50), level(1), name(name), MeleeDamage(20), \
	RangedDamage(15), ArmorDamageReduction(3) {
	std::srand(::time(NULL));
	const static std::string quotes[] = {"Check me out!", \
	"Now I will dominate!", "I'm so sexy!", "Hahahahaha! I'm alive!", \
	"Back for more!", "Here we go again!"};
	const int	alea = std::rand() % sizeof(quotes) / sizeof(*quotes);
	const std::string quote = quotes[alea];

	std::cout << "Constructor of ScavTrap called" << std::endl;
	this->SayQuote(quote);
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	*this = src;
}

ScavTrap::~ScavTrap(void) {
	const static std::string quotes[] = {"I'll die the way I lived: annoying!" \
	,"You can't kill me!", "I'm too pretty to die!", "Robot down!", \
	"No, nononono NO!"};
	const int	alea = std::rand() % sizeof(quotes) / sizeof(*quotes);
	const std::string quote = quotes[alea];

	std::cout << "Destructor of ScavTrap called" << std::endl;
	this->SayQuote(quote);
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
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

std::ostream	&operator<<(std::ostream &o, ScavTrap const &i) {
	o << "\e[1;96mSC4V-TP\e[m (\e[95m" << i.name << "\e[m)";
	return (o);
}

void	ScavTrap::rangedAttack(std::string const &target) const {
	const static std::string quotes[] = {"I'm a tornado of death and bullets!", \
	"Sniped!", "Chk-chk, BOOM!", "Get ready for some ScavTrap face time!", \
	"In yo' FACE!", "I expect you to die!"};
	const int	alea = std::rand() % sizeof(quotes) / sizeof(*quotes);
	const std::string quote = quotes[alea];

	this->SayQuote(quote);
	std::cout << *this << ": attacks " << target \
	<< " at range, causing " << this->RangedDamage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target) const {
	const static std::string quotes[] = {"This is why you do your homework!", \
	"Pain school is now in session.", "Guess who?", "Meet professor punch!", \
	"Ready for the PUNCHline?!"};
	const int	alea = std::rand() % sizeof(quotes) / sizeof(*quotes);
	const std::string quote = quotes[alea];

	this->SayQuote(quote);
	std::cout << *this << ": attacks " << target \
	<< " , causing " << this->MeleeDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	const static std::string quotes[] = {"Why do I even feel pain?!", \
	"Why did they build me out of galvanized flesh?!", "Ow hohoho, that hurts! Yipes!", \
	"My robotic flesh! AAHH!", "Yikes! Ohhoho!", "Woah! Oh! Jeez!", \
	"If only my chassis... weren't made of recycled human body parts! Wahahaha!"};
	const int	alea = std::rand() % sizeof(quotes) / sizeof(*quotes);
	const std::string quote = quotes[alea];

	if (amount > this->ArmorDamageReduction)
		amount -= this->ArmorDamageReduction;
	else
		amount = 0;
	if (this->HitPoints >= amount)
		this->HitPoints -= amount;
	else
		this->HitPoints = 0;
	this->SayQuote(quote);
	std::cout << *this << " is injured! \e[1;91mHP: " \
		<< this->HitPoints << " (-" << amount << ")\e[m" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	const static std::string quotes[] = {"Make my day.", \
		"Gimme your best shot.", "Hit me, baby!", "Ya feeling lucky, punk?"};
	const int	alea = std::rand() % sizeof(quotes) / sizeof(*quotes);
	const std::string quote = quotes[alea];

	if (this->HitPoints + amount > this->MaxHitPoints)
		this->HitPoints = this->MaxHitPoints;
	else
		this->HitPoints += amount;
	if (this->energy + amount > this->MaxEnergy)
		this->energy = this->MaxEnergy;
	else
		this->energy += amount;
	this->SayQuote(quote);
	std::cout << *this << ": Life and Energy have been restored " << "\e[1;92m" \
		<< "HP:" << this->HitPoints << " Energy:" << this->energy \
		<< " (+" << amount << ")" << "\e[m" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target) {
	const static int AttackCost = 25;
	const static std::string challenges[] = {"kart race", "deadly cowboy duel", \
		"cooking duel"};
	const int	alea = std::rand() % sizeof(challenges) / sizeof(*challenges);
	const std::string challenge = challenges[alea];

	if (this->energy >= AttackCost)
	{
		std::cout << *this << " challenges " << target << " at a " \
			<< challenge << "!!" << std::endl;
		this->energy -= AttackCost;
	}
	else
		std::cout << *this << " \e[1;91mEnergy not enough! Need " \
			<< AttackCost - this->energy << " more...\e[m" << std::endl;
}

void	ScavTrap::SayQuote(std::string quote) const {
	std::cout << "\e[1;94mSC4V-TP\e[m (\e[95m" << this->name << "\e[m)" \
		<< ": \e[1;93m\"" << quote << "\"\e[m" << std::endl;
}
