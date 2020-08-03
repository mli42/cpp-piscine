/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 22:58:42 by mli               #+#    #+#             */
/*   Updated: 2020/08/03 23:12:49 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheStack(int const age, int const nbLegs, bool const freckles,
		std::string const name)
{
	Pony newPony(age, nbLegs, freckles, name);

	newPony.age++;
}

void	ponyOnTheHeap(int const age, int const nbLegs, bool const freckles,
		std::string const name)
{
	Pony *newPonyHeap = new Pony(age, nbLegs, freckles, name);

	newPonyHeap->age++;
	delete newPonyHeap;
}

int		main(void)
{
	ponyOnTheStack(7, 4, false, "O'Maley");
	std::cout << std::endl;
	ponyOnTheHeap(14, 5, true, "Frimousse");
}
