/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:52:08 by mli               #+#    #+#             */
/*   Updated: 2020/08/01 16:21:35 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AwesomePhoneBook.hpp"

static void	ft_pcontent(std::string str)
{
	if (str.length() <= 10)
		std::cout << std::setfill(' ') << std::setw(10);
	else
	{
		str.resize(9);
		str.push_back('.');
	}
	std::cout << str << std::endl;
}

static void	ft_pseachline(std::string str1, std::string str2,
			std::string str3, std::string str4)
{
	ft_pcontent(str1);
	std::cout << "|";
	ft_pcontent(str2);
	std::cout << "|";
	ft_pcontent(str3);
	std::cout << "|";
	ft_pcontent(str4);
	std::cout << std::endl;
}

void	ft_plist(const PhoneBook (&book)[8])
{
	int i;

	if ((i = PhoneBook::getContactNb()) == 0)
	{
		std::cout << "Your Awesome PhoneBook is empty..." << std::endl;
		return ;
	}
	ft_pseachline("Index", "Fist Name", "Last Name", "Pseudo");
	while (--i != 0)
	{
		ft_pseachline(std::to_string(i), "Fist Name", "Name", "Pseudo");
	}
	(void)book;
}
