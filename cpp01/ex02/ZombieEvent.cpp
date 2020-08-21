#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	std::srand(std::time(NULL));
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
