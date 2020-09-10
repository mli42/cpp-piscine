/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:49 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:50 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src) {
	std::cout << "* click click click *" << std::endl;
	*this = src;
}

RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &rhs) {
	if (this == &rhs)
		return (*this);
	Enemy::operator=(rhs);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, RadScorpion const &i) {
	(void)i;
//	o << i.;
	return (o);
}
