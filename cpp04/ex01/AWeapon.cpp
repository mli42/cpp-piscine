/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:32 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:33 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) {
	;
}

AWeapon::AWeapon(AWeapon const &src) {
	*this = src;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : \
		_name(name), _apcost(apcost), _damage(damage) {
	;
}

AWeapon::~AWeapon(void) {
	;
}

AWeapon	&AWeapon::operator=(AWeapon const &rhs) {
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, AWeapon const &i) {
	(void)i;
//	o << i.;
	return (o);
}

std::string		AWeapon::getName(void) const { return (this->_name); }
int				AWeapon::getAPCost(void) const { return (this->_apcost); }
int				AWeapon::getDamage(void) const { return (this->_damage); }
