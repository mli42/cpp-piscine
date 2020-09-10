/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:48:27 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:48:29 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	return ;
}

Ice::Ice(Ice const &src) {
	*this = src;
}

Ice::~Ice(void) {
	return ;
}

Ice	&Ice::operator=(Ice const &rhs) {
	if (this == &rhs)
		return (*this);
	AMateria::operator=(rhs);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Ice const &i) {
	(void)i;
//	o << i.;
	return (o);
}

AMateria		*Ice::clone(void) const {
	Ice *copy = new Ice(*this);
	return (copy);
}

void			Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" \
		<< std::endl;
}
