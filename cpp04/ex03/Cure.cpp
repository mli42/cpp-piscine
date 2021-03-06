/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:48:21 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:48:22 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
	return ;
}

Cure::Cure(Cure const &src) {
	*this = src;
}

Cure::~Cure(void) {
	return ;
}

Cure	&Cure::operator=(Cure const &rhs) {
	if (this == &rhs)
		return (*this);
	AMateria::operator=(rhs);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Cure const &i) {
	(void)i;
//	o << i.;
	return (o);
}

AMateria		*Cure::clone(void) const {
	Cure *copy = new Cure(*this);
	return (copy);
}

void			Cure::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
