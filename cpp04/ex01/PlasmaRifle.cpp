/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:41 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:42 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) {
	*this = src;
}

PlasmaRifle::~PlasmaRifle(void) {
	return ;
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &rhs) {
	if (this == &rhs)
		return (*this);
	AWeapon::operator=(rhs);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, PlasmaRifle const &i) {
	(void)i;
//	o << i.;
	return (o);
}

void			PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
