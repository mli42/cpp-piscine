/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:49:15 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:49:15 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : \
		Form("RobotomyRequestForm", 72, 45, target) {
	static unsigned short int i = 0;

	if (i == 0)
	{
		std::srand(std::time(NULL));
		i++;
	}
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
}

void			RobotomyRequestForm::action(std::string const &target) const {
	std::cout << "*drilling noises*" << std::endl;
	std::cout << target << " being robotomized... " << \
		(std::rand() % 2 ? ">> SUCCESS <<" : "FAILURE") << std::endl;
}
