/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:46:38 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:46:39 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : \
		ClapTrap(100, 100, 100, 100, 1, "", 30, 20, 5, "FR4G-TP") {
	std::cout << "Default Constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : \
		ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5, "FR4G-TP") {
	std::cout << "Constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
}

FragTrap::~FragTrap(void) {
	std::cout << "Destructor of FragTrap called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	return (*this);
}

/*
std::ostream	&operator<<(std::ostream &o, FragTrap const &i) {
	o << "\e[1;96mFR4G-TP\e[m (\e[95m" << i.name << "\e[m)";
	return (o);
}*/

void	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	const static int AttackCost = 25;
	const static std::string attacks[] = {"farts on", "points his gun on", \
		"sings with his *best* voice for", "cooked a poisoned meal for", \
		"runs away from"};

	if (this->energy >= AttackCost)
	{
		std::cout << *this << " " << GetRandQuote(attacks, sizeof(attacks)) \
			<< " " << target << " and it's unexepectedly very effective..." \
			<< std::endl;
		this->energy -= AttackCost;
	}
	else
		std::cout << *this << " \e[1;91mEnergy not enough! Need " \
			<< AttackCost - this->energy << " more...\e[m" << std::endl;
}
