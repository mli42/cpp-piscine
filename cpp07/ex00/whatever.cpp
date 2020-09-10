/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:24:46 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 17:01:33 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp = b;

	b = a;
	a = tmp;
}

template<typename T>
T const	&min(T const &a, T const &b) { return (a < b ? a : b); }

template<typename T>
T const	&max(T const &a, T const &b) { return (a > b ? a : b); }

template<typename T>
void	DispSwap(T &a, T &b)
{
	std::cout << "###############################################" << std::endl;
	std::cout << "Swaps	a:" << a << "\tb:" << b << std::endl; 
	swap(a, b);
	std::cout << "Swaped	a:" << a << "\tb:" << b << std::endl; 
	std::cout << "###############################################" << std::endl;
}

template<typename T>
void	DispCmp(T const &a, T const &b, T const &(*fct)(T const &, T const &), \
		std::string fct_type)
{
	T const &tmp = fct(a, b);
	std::cout << "###############################################" << std::endl;
	std::cout << fct_type << " with a:" << a << " b:" << b << " ==> " \
		<< tmp << std::endl;
	std::cout << "Addresses are..." << std::endl;
	std::cout << "- a:\t" << &a << std::endl;
	std::cout << "- b:\t" << &b << std::endl;
	std::cout << "- tmp:\t" << &tmp << std::endl;
	std::cout << "###############################################" << std::endl;
}

int		main(void)
{
	int a = 24; int b = 42;
	int equal_ONE = 30; int equal_TWO = 30;
	std::string str[2] = {"First string", "Second string"};

	DispSwap(a, b);
	DispSwap(str[0], str[1]);
	DispSwap<std::string>(str[0], str[1]);

	DispCmp(a, b, min, "min");
	DispCmp(a, b, max, "max");

	DispCmp(equal_ONE, equal_TWO, max, "max");
	DispCmp(equal_ONE, equal_TWO, min, "min");
	return (0);
}
