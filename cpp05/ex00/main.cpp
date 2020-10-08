/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 10:48:02 by mli               #+#    #+#             */
/*   Updated: 2020/10/08 15:08:52 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat officer("Bob", 2);
	Bureaucrat justBob("Bob the peasant", 149);

	std::cout << "###############################################" << std::endl;
	std::cout << "###############################################" << std::endl;
	try
	{
		Bureaucrat tmp("Tmp", 1);
		std::cout << tmp;
		Bureaucrat tmp1("Tmp1", 0);
		std::cout << tmp1;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "###############################################" << std::endl;
	std::cout << "###############################################" << std::endl;
	try
	{
		Bureaucrat tmp("Tmp", 150);
		std::cout << tmp;
		Bureaucrat tmp1("Tmp1", 151);
		std::cout << tmp1;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "###############################################" << std::endl;
	std::cout << "###############################################" << std::endl;
	try
	{
		std::cout << officer;
		officer.incGrade();
		std::cout << officer;
		officer.incGrade();
		std::cout << officer;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "###############################################" << std::endl;
	std::cout << "###############################################" << std::endl;
	try
	{
		std::cout << justBob;
		justBob.decGrade();
		std::cout << justBob;
		justBob.decGrade();
		std::cout << justBob;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "###############################################" << std::endl;
	std::cout << "###############################################" << std::endl;
	return (0);
}
