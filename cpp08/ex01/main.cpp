/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:05:13 by mli               #+#    #+#             */
/*   Updated: 2020/09/13 14:21:38 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void	getShortSpan(const span &sp)
{
	try
	{
		std::cout << "ShortestSpan: " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	getLongSpan(const span &sp)
{
	try
	{
		std::cout << "LongestSpan: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int		main(void)
{
	span test(3);
	span bob(3);

//	std::deque<int> qwe(3, 10);
//	std::deque<int>::iterator it = qwe.end() - 1;
//	std::cout << qwe.end() - qwe.begin() << std::endl;

	getShortSpan(test);
	getLongSpan(test);
	test.addNumber(5);
	getShortSpan(test);
	getLongSpan(test);
	test.addNumber(3);
	getLongSpan(test);
	getShortSpan(test);

	bob.addNumber(3);
	bob.addNumber(5);
	getLongSpan(bob);
	getShortSpan(bob);
}
