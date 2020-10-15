/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:17:43 by mli               #+#    #+#             */
/*   Updated: 2020/10/15 16:40:06 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
void	ft_find(T const &container, int needle)
{
	std::cout << "Search " << needle << ": ";
	try
	{
		easyfind(container, needle);
		std::cout << "Found! ✅";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " ❌";
	}
	std::cout << std::endl;
}

template<typename T>
void	ft_print(T const &container)
{
	typename T::const_iterator it, ite = container.end();
	std::cout << "Content:" << std::endl;
	for (it = container.begin(); it != ite; it++)
		std::cout << "- " << *it << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
}

int		main(void)
{
	std::cout << "-------------------- LIST ---------------------" << std::endl;
	std::list<int>		lst;
	for (int i = 0; i < 10; i++)
		lst.push_back(i);
	ft_print(lst);
	ft_find(lst, 3);
	ft_find(lst, 20);
	std::cout << "-------------------- VECT ---------------------" << std::endl;
	std::vector<int>	vect(6, 10);
	ft_print(vect);
	ft_find(vect, 3);
	ft_find(vect, 10);
	ft_find(vect, 20);
	std::cout << "-------------------- DEQUE --------------------" << std::endl;
	std::deque<int>	deck(3, 10);
	ft_print(deck);
	ft_find(deck, 3);
	ft_find(deck, 10);
	ft_find(deck, 20);
	std::cout << "-----------------------------------------------" << std::endl;
}
