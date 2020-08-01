/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:33:11 by mli               #+#    #+#             */
/*   Updated: 2020/08/01 19:04:12 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
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

void	Contact::fill(void) {
	std::cout << "Fill your new Contact ! :" << std::endl;

	std::cout << "Fist Name ? "; std::getline(std::cin, this->first_name);
	std::cout << "Last Name ? "; std::getline(std::cin, this->last_name);
	std::cout << "Nickname ? "; std::getline(std::cin, this->nickname);
	std::cout << "Login ? "; std::getline(std::cin, this->login);
	std::cout << "Postal Address ? "; std::getline(std::cin, this->postal_address);
	std::cout << "Email Address ? "; std::getline(std::cin, this->email_address);
	std::cout << "Phone Number ? "; std::getline(std::cin, this->phone_number);
	std::cout << "Birthday date ? "; std::getline(std::cin, this->birthday_date);
	std::cout << "Favorite Meal ? "; std::getline(std::cin, this->favorite_meal);
	std::cout << "Underwear Color ? "; std::getline(std::cin, this->underwear_color);
	std::cout << "Darkest Secret ? "; std::getline(std::cin, this->darkest_secret);
}
