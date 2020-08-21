#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : nbHorde(N) {
	this->Horde = new Zombie[N];
}

ZombieHorde::~ZombieHorde(void) {
	std::cout << "The Horde is released" << std::endl;
}

void	ZombieHorde::announce(void) {
	for (int i = 0; i < this->nbHorde; i++)
		this->Horde[i].announce();
}
