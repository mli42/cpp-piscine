/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:48:18 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:48:19 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	return ;
}

Character::Character(std::string const name) : _name(name) {
	bzero(&this->_inventory, sizeof(this->_inventory));
}

Character::Character(Character const &src) {
	bzero(&this->_inventory, sizeof(this->_inventory));
	*this = src;
}

Character::~Character(void) {
	this->DestroyCharacter();
}

Character	&Character::operator=(Character const &rhs) {
	if (this == &rhs)
		return (*this);
	this->DestroyCharacter();
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = rhs._inventory[i];
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Character const &i) {
	o << i.getName();
	return (o);
}

std::string const	&Character::getName(void) const { return (this->_name); }

void	Character::equip(AMateria *m) {
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx >= 4)
		return ;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4)
		return ;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}

void	Character::DestroyCharacter(void) {
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
}
