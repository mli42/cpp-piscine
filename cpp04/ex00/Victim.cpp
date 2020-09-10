/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:26 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:27 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <string>

Victim::Victim(void) : _name("NAME") {
	std::cout << "Default Constructor of Victim called" << std::endl;
}

Victim::Victim(std::string const name) : _name(name) {
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &src) {
	*this = src;
}

Victim::~Victim(void) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim	&Victim::operator=(Victim const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Victim const &i) {
	o << "I'm " << i.getName() << " and I like otters!" << std::endl;
	return (o);
}

std::string		Victim::getName(void) const {
	return (this->_name);
}

void			Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep!" \
		<< std::endl;
}
