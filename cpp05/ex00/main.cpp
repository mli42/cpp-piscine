/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 10:48:02 by mli               #+#    #+#             */
/*   Updated: 2020/09/08 13:31:19 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat officer("Bob", 2);
	Bureaucrat justBob("Bob the peasant", 149);

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
	return (0);
}
