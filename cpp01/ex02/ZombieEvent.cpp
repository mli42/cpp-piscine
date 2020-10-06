/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:20:11 by mli               #+#    #+#             */
/*   Updated: 2020/10/06 11:47:44 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	std::srand(::time(NULL));
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}

void	ZombieEvent::setZombieType(std::string type) {
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	return (new Zombie(name, type));
}

Zombie	*ZombieEvent::randomChump(void) {
	const std::string name[] = {"John", "Alexia", "Guigui", "Auguste",
		"Jehanne", "Emma", "Jojo", "Red1", "Blue2th", "Froufrou"};
	const int alea = std::rand() % sizeof(name) / sizeof(*name);
	Zombie	*nZombie = newZombie(name[alea]);

	nZombie->advert();

	return (nZombie);
}
