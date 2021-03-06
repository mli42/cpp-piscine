/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:48:35 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:48:36 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	bzero(&this->_source, sizeof(this->_source));
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
	bzero(&this->_source, sizeof(this->_source));
	*this = src;
}

MateriaSource::~MateriaSource(void) {
	this->EmptySource();
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs) {
	if (this == &rhs)
		return (*this);
	this->EmptySource();
	for (int i = 0; i < 4; i++)
		this->_source[i] = rhs._source[i];
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, MateriaSource const &i) {
	(void)i;
//	o << i.;
	return (o);
}

void		MateriaSource::learnMateria(AMateria *m) {
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL)
		{
			if (this->_source[i]->getType() == m->getType())
				break ;
		}
		else
		{
			this->_source[i] = m;
			return ;
		}
	}
	delete m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (this->_source[i]->getType() == type)
			return (this->_source[i]->clone());
	return (NULL);
}

void		MateriaSource::EmptySource(void) {
	for (int i = 0; i < 4; i++)
	{
		delete this->_source[i];
		this->_source[i] = NULL;
	}
}
