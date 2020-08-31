/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 18:46:11 by mli               #+#    #+#             */
/*   Updated: 2020/09/01 00:06:57 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	SuperTrap	SuperBot("SuperBotName");
	ScavTrap	ScavBot("ScavBotName");

	SuperBot.ninjaShoebox(ScavBot);
	SuperBot.vaulthunter_dot_exe("new target");

	SuperBot.rangedAttack("a rock");
	SuperBot.meleeAttack("a rock");
}
