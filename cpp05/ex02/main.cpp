/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 10:48:02 by mli               #+#    #+#             */
/*   Updated: 2020/09/08 16:44:48 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Bureaucrat	supreme("Supreme Bob", 1);
	Bureaucrat	officer("Officer Bob", 140);
	Bureaucrat	justBob("Bob the peasant", 150);
	ShrubberyCreationForm	F182("target_tree");
	RobotomyRequestForm		C182("target_robot");
	PresidentialPardonForm	B182("target_pardon");

	std::cout << "\t\t###############################################" << std::endl;
	std::cout << supreme << justBob << officer;
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << F182;
	justBob.signForm(F182);
	std::cout << F182;
	officer.executeForm(F182);
	std::cout << F182;
	officer.signForm(F182);
	std::cout << F182;
	officer.executeForm(F182);
	supreme.executeForm(F182);
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << (officer = Bureaucrat("", 60));
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << C182;
	justBob.signForm(C182);
	std::cout << C182;
	officer.executeForm(C182);
	std::cout << C182;
	officer.signForm(C182);
	std::cout << C182;
	officer.executeForm(C182);
	supreme.executeForm(C182);
	supreme.executeForm(C182);
	supreme.executeForm(C182);
	supreme.executeForm(C182);
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << (officer = Bureaucrat("", 10));
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << B182;
	justBob.signForm(B182);
	std::cout << B182;
	officer.executeForm(B182);
	std::cout << B182;
	officer.signForm(B182);
	std::cout << B182;
	officer.executeForm(B182);
	supreme.executeForm(B182);
	std::cout << "\t\t###############################################" << std::endl;
	return (0);
}
