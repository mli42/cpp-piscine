/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 10:48:02 by mli               #+#    #+#             */
/*   Updated: 2020/09/08 16:06:13 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void)
{
	Bureaucrat	supreme("Supreme Bob", 5);
	Bureaucrat	officer("Officer Bob", 140);
	Bureaucrat	justBob("Bob the peasant", 150);
	ShrubberyCreationForm	F182("target");

	std::cout << F182;
	justBob.signForm(F182);
	std::cout << F182;
	officer.executeForm(F182);
	std::cout << F182;
	officer.signForm(F182);
	std::cout << F182;
	officer.executeForm(F182);
	supreme.executeForm(F182);
	return (0);
}
