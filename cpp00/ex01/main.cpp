/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 00:43:46 by mli               #+#    #+#             */
/*   Updated: 2020/08/01 23:09:42 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AwesomePhoneBook.hpp"

static void	ft_add(Contact book[8])
{
	int i = Contact::getContactNb();
	if (i >= 8)
	{
		std::cout << "Too many contacts; Your Awesome PhoneBook is full...\n";
		return ;
	}
	Contact::incContactNb();
	book[i].fill();
}

static void	ft_search(Contact book[8])
{
	int i;
	int choosen = -1;
	int cinfail;

	if ((i = Contact::getContactNb()) == 0)
	{
		std::cout << "Your AwesomePhoneBook is empty..." << std::endl;
		return ;
	}
	ft_plist(book, i);
	while ((choosen < 0 || choosen >= i || cinfail) && !std::cin.eof())
	{
		std::cout << "Which one do you want to see ? "; std::cin >> choosen;
		if ((cinfail = std::cin.fail()))
		{
			if (!std::cin.eof())
				std::cout << "An integer moron...\n";
			std::cin.clear();
			std::cin.ignore();
		}
	}
	std::cin.clear();
	std::cin.ignore();
	if (!((choosen < 0 || choosen >= i || cinfail) && !std::cin.eof()))
		ft_pContact(book[choosen]);
}

static void	ft_ask(void)
{
	std::cout << "\e[93m[PhoneBook]\e[m Want to \e[91mADD\e[m, \e[91mSEARCH\e[m " \
		"or \e[91mEXIT\e[m ? > ";
}

static void	ft_exit(void)
{
	if (std::cin.eof())
		std::cout << "\n";
	std::cout << "\n\t\tSee you next time !\n\n";
}

int		main(void)
{
	std::string	input;
	Contact book[8];

	ft_ask();
	while (std::getline(std::cin, input) && input != "EXIT")
	{
		if (input == "ADD")
			ft_add(book);
		else if (input == "SEARCH")
			ft_search(book);
		if (!std::cin.eof() && !std::cin.fail())
			ft_ask();
	}
	ft_exit();
	return (0);
}
