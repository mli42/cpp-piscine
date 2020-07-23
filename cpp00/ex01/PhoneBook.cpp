/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:33:11 by mli               #+#    #+#             */
/*   Updated: 2020/07/23 23:52:16 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

int	PhoneBook::_ContactNb = 0;

int	PhoneBook::getContactNb(void) {
	return (PhoneBook::_ContactNb);
}

void	PhoneBook::incContactNb(void) {
	PhoneBook::_ContactNb++;
	return ;
}
