/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:52:08 by mli               #+#    #+#             */
/*   Updated: 2020/08/01 20:51:50 by mli              ###   ########.fr       */
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
	std::cout << str;
}

static void	ft_pseachline(std::string str1, std::string str2,
			std::string str3, std::string str4)
{
	std::cout << "|";
	ft_pcontent(str1);
	std::cout << "|";
	ft_pcontent(str2);
	std::cout << "|";
	ft_pcontent(str3);
	std::cout << "|";
	ft_pcontent(str4);
	std::cout << "|" << std::endl;
}

static void ft_updwnborder(void)
{
	std::cout << std::setfill('-') << std::setw(45);
	std::cout << "";
	std::cout << std::endl;
}

void		ft_plist(const Contact book[8], int i)
{
	ft_updwnborder();
	ft_pseachline("Index", "Fist Name", "Last Name", "Nickname");
	while (--i >= 0)
	{
		ft_pseachline(std::to_string(i), book[i].first_name,
				book[i].last_name, book[i].nickname);
	}
	ft_updwnborder();
}
