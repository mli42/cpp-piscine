/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:48:15 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:48:15 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _xp(0) {
	return ;
}

AMateria::AMateria(std::string const &type) : _xp(0), _type(type) {

}

AMateria::AMateria(AMateria const &src) {
	*this = src;
}

AMateria::~AMateria(void) {
	return ;
}

AMateria	&AMateria::operator=(AMateria const &rhs) {
	if (this == &rhs)
		return (*this);
	this->_xp = rhs._xp;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, AMateria const &i) {
	o << i.getType() << " (" << i.getXP() << ")";
	return (o);
}

std::string const   &AMateria::getType(void) const { return (this->_type); }
unsigned int        AMateria::getXP(void) const { return (this->_xp); }

void        		AMateria::use(ICharacter &target) {
	this->_xp += 10;
	(void)target;
}
