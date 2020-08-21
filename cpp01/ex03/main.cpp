/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 15:49:02 by mli               #+#    #+#             */
/*   Updated: 2020/08/21 16:23:45 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#define NB_CHILDREN 5

int		main(void)
{
	Zombie OldZ("Georges", "Really Old");
	ZombieEvent	EventZ;
	Zombie *childrenZ[NB_CHILDREN];

	std::cout << "\e[1;95m";
	std::cout << "\t\tThis is the life of an old Zombie:\n" << std::endl;
	std::cout << "\e[m";

	OldZ.advert();

	std::cout << "He had several children..." << std::endl;
	EventZ.setZombieType("Child");
	for (int i = 0; i < NB_CHILDREN; i++)
		childrenZ[i] = EventZ.randomChump();

	std::cout << "They lived peacefully! But one day ..." << std::endl;
	for (int i = 0; i < NB_CHILDREN; i++)
		delete childrenZ[i];

	std::cout << "Then, it was " << OldZ.name << " turn." << std::endl;
}
