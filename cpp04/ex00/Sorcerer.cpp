/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:24 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:24 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
	std::cout << "Instanciate Sorcerer without parameters /!\\" << std::endl;
	return ;
}

Sorcerer::Sorcerer(std::string const name, std::string const title) : \
		_name(name), _title(title) {
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
	*this = src;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", " << this->_title \
		<< ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i) {
	o << "I am " << i.getName() << ", " \
		<< i.getTitle() << ", and I like ponies!" << std::endl;
	return (o);
}

std::string Sorcerer::getName(void) const {
	return (this->_name);
}

void		Sorcerer::setName(std::string name) {
	this->_name = name;
}

std::string Sorcerer::getTitle(void) const {
	return (this->_title);
}

void		 Sorcerer::setTitle(std::string title) {
	this->_title = title;
}

void		Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
}
