/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:46:16 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:46:16 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : \
		ClapTrap(100, 100, 50, 50, 1, "", 20, 15, 3, "SC4V-TP") {
	std::cout << "Default Constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : \
		ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3, "SC4V-TP") {
	std::cout << "Constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	*this = src;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Destructor of ScavTrap called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	return (*this);
}

/*
std::ostream	&operator<<(std::ostream &o, ScavTrap const &i) {
	o << "\e[1;96mSC4V-TP\e[m (\e[95m" << i.name << "\e[m)";
	return (o);
}*/

void	ScavTrap::challengeNewcomer(std::string const &target) {
	const static int AttackCost = 25;
	const static std::string challenges[] = {"kart race", "cooking duel", \
		"deadly cowboy duel"};

	if (this->energy >= AttackCost)
	{
		std::cout << *this << " challenges " << target << " at a " \
			<< GetRandQuote(challenges, sizeof(challenges)) << "!!" << std::endl;
		this->energy -= AttackCost;
	}
	else
		std::cout << *this << " \e[1;91mEnergy not enough! Need " \
			<< AttackCost - this->energy << " more...\e[m" << std::endl;
}
