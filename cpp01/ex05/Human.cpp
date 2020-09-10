/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:22:51 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 12:22:52 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
	return ;
}

Human::~Human(void) {
	return ;
}

std::string	Human::identify(void) const {
	return (this->_Brain.identify());
}

const Brain	&Human::getBrain(void) const {
	return (this->_Brain);
}
