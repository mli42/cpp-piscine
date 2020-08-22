#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : nbHorde(N) {
	if (N < 0)
		return ;

	std::srand(std::time(NULL));
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
