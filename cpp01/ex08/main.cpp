/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 16:48:40 by mli               #+#    #+#             */
/*   Updated: 2020/08/24 16:56:00 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human human;
	std::string target = "Your target";

	human.action("meleeAttack", target);
	human.action("rangedAttack", target);
	human.action("intimidatingShout", target);

	return (0);
}
