/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 10:48:02 by mli               #+#    #+#             */
/*   Updated: 2020/10/11 19:22:40 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat	officer("Officer Bob", 5);
	Bureaucrat	justBob("Bob the peasant", 130);
	Form		F182("F182", 50, 50);

	try
	{
		Form("A31", 0, 50);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
		std::cout << "###########################################" << std::endl;
	}

	std::cout << F182;
	justBob.signForm(F182);
	std::cout << F182;
	officer.signForm(F182);
	std::cout << F182;
	return (0);
}
