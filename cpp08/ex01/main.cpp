/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:05:13 by mli               #+#    #+#             */
/*   Updated: 2020/09/13 21:06:07 by mli              ###   ########.fr       */
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

	std::cout << "-------------------- TEST ---------------------" << std::endl;

	getShortSpan(test);
	getLongSpan(test);
	test.addNumber(5);
	getShortSpan(test);
	getLongSpan(test);
	test.addNumber(3);
	getLongSpan(test);
	getShortSpan(test);
	std::cout << "------------------ - TEST ---------------------" << std::endl;
	test.addNumber(-4);
	getLongSpan(test);
	getShortSpan(test);

	std::cout << "-------------------- BOB ----------------------" << std::endl;

	bob.addNumber(3);
	bob.addNumber(5);
	getLongSpan(bob);
	getShortSpan(bob);
	bob.addNumber(-4);
	try
	{
		bob.addNumber(2);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception RAISED ! " << e.what() << std::endl;
	}
	std::cout << "------------------ - BOB ----------------------" << std::endl;
	getLongSpan(bob);
	getShortSpan(bob);

	std::cout << "-------------------- 10 000 -------------------" << std::endl;
	span bigspan(10010);
	std::deque<int> tmp;
	for (int i = 0; i < 5000; i++)
	{
		tmp.push_back(i - 7000);
		tmp.push_front(100 + i);
	}
	bigspan.add(tmp.begin(), tmp.end());
	getLongSpan(bigspan);
	getShortSpan(bigspan);
	try
	{
		bigspan.add(tmp.begin(), tmp.begin() + 11);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception RAISED ! " << e.what() << std::endl;
	}
}
