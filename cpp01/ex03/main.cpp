/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 15:49:02 by mli               #+#    #+#             */
/*   Updated: 2020/08/22 16:30:16 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(void)
{
	int			NbHorde = 4;
	ZombieHorde firstHorde(NbHorde);

	std::cout << "This is my first Horde, there are " << NbHorde \
		<< " Zombies:" << std::endl;

	firstHorde.announce();
}
