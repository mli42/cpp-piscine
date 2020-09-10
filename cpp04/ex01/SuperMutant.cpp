/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:52 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:54 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src) {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	*this = src;
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, SuperMutant const &i) {
	(void)i;
//	o << i.;
	return (o);
}

void		SuperMutant::takeDamage(int hit) {
	Enemy::takeDamage(hit - 3);
}
