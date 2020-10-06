/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 21:53:51 by mli               #+#    #+#             */
/*   Updated: 2020/10/06 10:37:48 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	memoryLeak()
{
	std::string		*panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}

int		main(void)
{
	memoryLeak();
	std::cout << "Done.\n";
}
