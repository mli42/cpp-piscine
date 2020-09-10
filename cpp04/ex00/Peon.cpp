/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:21 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:21 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) {
	return ;
}

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src) {
	*this = src;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon	&Peon::operator=(Peon const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

/*
std::ostream	&operator<<(std::ostream &o, Peon const &i) {
	(void)i;
//	o << i.;
	return (o);
}*/

void			Peon::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a pink pony!" \
		<< std::endl;
}
