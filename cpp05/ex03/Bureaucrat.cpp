/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:49:22 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:49:23 by mli              ###   ########.fr       */
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
unsigned short int	Bureaucrat::getGrade(void) const { return (this->_grade); }

void				Bureaucrat::incGrade(void) {
	if (this->_grade-- == 1)
		throw Bureaucrat::GradeTooHighException();
}

void				Bureaucrat::decGrade(void) {
	if (this->_grade++ == 150)
		throw Bureaucrat::GradeTooLowException();
}

void				Bureaucrat::signForm(Form &form) const {
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot sign " \
			<< form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " signs " << form.getName() << std::endl;
}

void				Bureaucrat::executeForm(Form const &form) const {
	try
	{
		form.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot execute " \
			<< form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " executes " << form.getName() << std::endl;
}
