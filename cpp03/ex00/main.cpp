/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 18:46:11 by mli               #+#    #+#             */
/*   Updated: 2020/08/30 19:04:46 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	robot("RobotName");

	robot.meleeAttack("some target");
	robot.rangedAttack("some target");

	robot.takeDamage(60);
	robot.takeDamage(60);

	robot.beRepaired(20);
	robot.beRepaired(200);

	robot.vaulthunter_dot_exe("a rock1");
	robot.vaulthunter_dot_exe("a rock2");
	robot.vaulthunter_dot_exe("a rock3");
	robot.vaulthunter_dot_exe("a rock4");
	robot.vaulthunter_dot_exe("a rock5");
}
