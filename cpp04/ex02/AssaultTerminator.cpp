/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:59 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:48:00 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src) {
	std::cout << "* teleports from space *" << std::endl;
	*this = src;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I’ll be back..." << std::endl;
	return ;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, AssaultTerminator const &i) {
	(void)i;
//	o << i.;
	return (o);
}

ISpaceMarine	*AssaultTerminator::clone(void) const {
	AssaultTerminator *copy = new AssaultTerminator(*this);
	return (copy);
}

void			AssaultTerminator::battleCry(void) const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack(void) const {
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack(void) const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
