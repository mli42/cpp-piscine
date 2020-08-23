/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 15:56:29 by mli               #+#    #+#             */
/*   Updated: 2020/08/23 15:59:23 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *strptr = &str;
	std::string &strref = str;

	std::cout << *strptr << std::endl;
	std::cout << strref << std::endl;
}
