/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:33:11 by mli               #+#    #+#             */
/*   Updated: 2020/08/01 17:51:34 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

int	Contact::_ContactNb = 0;

int	Contact::getContactNb(void) {
	return (Contact::_ContactNb);
}

void	Contact::incContactNb(void) {
	Contact::_ContactNb++;
	return ;
}
