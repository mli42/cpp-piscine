/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 10:48:02 by mli               #+#    #+#             */
/*   Updated: 2020/09/09 11:46:39 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Bureaucrat	supreme("Supreme Bob", 1);
	Bureaucrat	officer("Officer Bob", 140);
	Bureaucrat	justBob("Bob the peasant", 150);
	Intern		someRandomIntern;
	Form		*Forms[3];

	Forms[0] = someRandomIntern.makeForm("Unknown type", "RandomTarget");
	Forms[0] = someRandomIntern.makeForm("shrubbery creation", "TargetTree");
	Forms[1] = someRandomIntern.makeForm("robotomy request", "TargetRobot");
	Forms[2] = someRandomIntern.makeForm("presidential pardon", "TargetPardon");

	std::cout << "\t\t###############################################" << std::endl;
	std::cout << supreme << justBob << officer;
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << *Forms[0];
	justBob.signForm(*Forms[0]);
	std::cout << *Forms[0];
	officer.executeForm(*Forms[0]);
	std::cout << *Forms[0];
	officer.signForm(*Forms[0]);
	std::cout << *Forms[0];
	officer.executeForm(*Forms[0]);
	supreme.executeForm(*Forms[0]);
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << (officer = Bureaucrat("", 60));
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << *Forms[1];
	justBob.signForm(*Forms[1]);
	std::cout << *Forms[1];
	officer.executeForm(*Forms[1]);
	std::cout << *Forms[1];
	officer.signForm(*Forms[1]);
	std::cout << *Forms[1];
	officer.executeForm(*Forms[1]);
	supreme.executeForm(*Forms[1]);
	supreme.executeForm(*Forms[1]);
	supreme.executeForm(*Forms[1]);
	supreme.executeForm(*Forms[1]);
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << (officer = Bureaucrat("", 10));
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << *Forms[2];
	justBob.signForm(*Forms[2]);
	std::cout << *Forms[2];
	officer.executeForm(*Forms[2]);
	std::cout << *Forms[2];
	officer.signForm(*Forms[2]);
	std::cout << *Forms[2];
	officer.executeForm(*Forms[2]);
	supreme.executeForm(*Forms[2]);
	std::cout << "\t\t###############################################" << std::endl;
	for (int i = 0; i < 3; i++)
		delete Forms[i];
	return (0);
}
