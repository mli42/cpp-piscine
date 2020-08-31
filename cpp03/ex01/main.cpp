/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 18:46:11 by mli               #+#    #+#             */
/*   Updated: 2020/08/31 11:22:18 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	FragBot("FragBotName");
	ScavTrap	ScavBot("ScavBotName");

	FragBot.meleeAttack("some target");
	FragBot.rangedAttack("some target");

	FragBot.takeDamage(60);
	FragBot.takeDamage(60);

	FragBot.beRepaired(20);
	FragBot.beRepaired(200);

	FragBot.vaulthunter_dot_exe("a rock1");
	FragBot.vaulthunter_dot_exe("a rock2");
	FragBot.vaulthunter_dot_exe("a rock3");
	FragBot.vaulthunter_dot_exe("a rock4");
	FragBot.vaulthunter_dot_exe("a rock5");

// #######################################################

	ScavBot.meleeAttack("some target");
	ScavBot.rangedAttack("some target");

	ScavBot.takeDamage(60);
	ScavBot.takeDamage(60);

	ScavBot.beRepaired(20);
	ScavBot.beRepaired(200);

	ScavBot.challengeNewcomer("a rock1");
	ScavBot.challengeNewcomer("a rock2");
	ScavBot.challengeNewcomer("a rock3");
	ScavBot.challengeNewcomer("a rock4");
	ScavBot.challengeNewcomer("a rock5");
}
