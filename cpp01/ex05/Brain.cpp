/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:22:43 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 12:22:44 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	return ;
}

Brain::~Brain(void) {
	return ;
}

std::string Brain::identify(void) const {
	std::ostringstream ostr;

	ostr << this;

	return (ostr.str());
}
