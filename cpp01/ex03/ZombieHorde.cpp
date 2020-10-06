/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:20:24 by mli               #+#    #+#             */
/*   Updated: 2020/10/06 11:48:30 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : nbHorde(N) {
	if (N < 0)
		return ;

	std::srand(::time(NULL));
	this->Horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		ZombieHorde::randomAttributes(this->Horde[i]);
}

ZombieHorde::~ZombieHorde(void) {
	if (this->nbHorde < 0)
		return ;
	delete [] this->Horde;
	std::cout << "The Horde of " << this->nbHorde << " Zombies is released." \
		<< std::endl;
}

void	ZombieHorde::announce(void) {
	for (int i = 0; i < this->nbHorde; i++)
		this->Horde[i].announce();
}

void	ZombieHorde::randomAttributes(Zombie &nZombie) {
	const std::string name[] = {"John", "Alexia", "Guigui", "Auguste",
		"Jehanne", "Emma", "Jojo", "Red1", "Blue2th", "Froufrou"};
	const std::string type[] = {"Witch", "Fighter", "Poney", "Archer", "Swordman"};
	int alea;

	alea = std::rand() % sizeof(name) / sizeof(*name);
	nZombie.name = name[alea];

	alea = std::rand() % sizeof(type) / sizeof(*type);
	nZombie.type = type[alea];
}
