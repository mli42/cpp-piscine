#include <iostream>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	return ;
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
