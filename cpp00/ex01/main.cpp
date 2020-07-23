/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 00:43:46 by mli               #+#    #+#             */
/*   Updated: 2020/07/23 23:59:36 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

void	ft_add(PhoneBook book[8])
{
	if (PhoneBook::getContactNb() >= 8)
	{
		std::cout << "Too many contacts; Your Awesome PhoneBook is full please exit...\n";
		return ;
	}
	PhoneBook &new_contact = book[PhoneBook::getContactNb()];
	PhoneBook::incContactNb();
	std::cout << "Should add\n";
	(void)book;
	(void)new_contact;
}

void	ft_search(PhoneBook book[8])
{
	std::cout << "Should search\n";
	(void)book;
}

void	ft_ask(void)
{
	std::cout << "\e[93m[PhoneBook]\e[m Want to \e[91mADD\e[m, \e[91mSEARCH\e[m " \
		"or \e[91mEXIT\e[m ? > ";
}

int		main(void)
{
	std::string	input;
	PhoneBook book[8];

	ft_ask();
	while (std::getline(std::cin, input) && input != "EXIT")
	{
		if (input == "ADD")
			ft_add(book);
		else if (input == "SEARCH")
			ft_search(book);
		ft_ask();
	}
	if (input == "")
		std::cout << "\n";
	std::cout << "\n\t\tSee you next time !\n\n";
	return (0);
}
