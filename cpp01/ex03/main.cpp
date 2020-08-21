/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 15:49:02 by mli               #+#    #+#             */
/*   Updated: 2020/08/21 19:49:38 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde firstHorde(10);

	std::cout << "This is my first Horde, composed by 10 Zombies:" << std::endl;
	firstHorde.announce();

	delete firstHorde.Horde;
}
