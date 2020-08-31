/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 18:46:11 by mli               #+#    #+#             */
/*   Updated: 2020/08/31 10:41:24 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	robot("RobotName");

	robot.meleeAttack("some target");
	robot.rangedAttack("some target");

	robot.takeDamage(60);
	robot.takeDamage(60);

	robot.beRepaired(20);
	robot.beRepaired(200);

	robot.challengeNewcomer("a rock1");
	robot.challengeNewcomer("a rock2");
	robot.challengeNewcomer("a rock3");
	robot.challengeNewcomer("a rock4");
	robot.challengeNewcomer("a rock5");
}
