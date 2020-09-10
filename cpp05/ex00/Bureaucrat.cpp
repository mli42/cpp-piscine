/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:48:52 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:48:53 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned short int const grade) : \
		_name(name), _grade(grade) {
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
	*this = src;
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs) {
	if (this == &rhs)
		return (*this);
	this->_grade = rhs._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i) {
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return (o);
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Bureaucrat Grade Too Low");
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Bureaucrat Grade Too High");
}

std::string const	Bureaucrat::getName(void) const { return (this->_name); }
int					Bureaucrat::getGrade(void) const { return (this->_grade); }

void				Bureaucrat::incGrade(void) {
	if (this->_grade-- == 1)
		throw Bureaucrat::GradeTooHighException();
}

void				Bureaucrat::decGrade(void) {
	if (this->_grade++ == 150)
		throw Bureaucrat::GradeTooLowException();
}
