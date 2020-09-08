/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 10:48:02 by mli               #+#    #+#             */
/*   Updated: 2020/09/08 11:02:26 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat officer("Bob", 2);
	Bureaucrat justBob("Bob the peasant", 149);

	try
	{
		std::cout << officer << std::endl;
		officer.incGrade();
		std::cout << officer << std::endl;
		officer.incGrade();
		std::cout << officer << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "###############################################" << std::endl;
	try
	{
		std::cout << justBob << std::endl;
		justBob.decGrade();
		std::cout << justBob << std::endl;
		justBob.decGrade();
		std::cout << justBob << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}
