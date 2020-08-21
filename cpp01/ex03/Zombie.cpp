#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::srand(std::time(NULL));

	const std::string name[] = {"John", "Alexia", "Guigui", "Auguste",
		"Jehanne", "Emma", "Jojo", "Red1", "Blue2th", "Froufrou"};
	const std::string type[] = {"Witch", "Fighter", "Poney", "Archer", "Swordman"};

	int alea = std::rand() % sizeof(name) / sizeof(*name);
	this->name = name[alea];

	alea = std::rand() % sizeof(type) / sizeof(*type);
	this->type = type[alea];
}

Zombie::~Zombie(void) {
	std::cout << "\e[91m";
	std::cout << "/!\\ " << this->name << " (" << this->type << ") " << "passed away...\n";
	std::cout << "\e[m";
}

void Zombie::announce(void) {
	std::cout << "\e[96m";
	std::cout << "<" << this->name << " (" << this->type << ")>" << " Braiiiiiiinnnssss ...\n";
	std::cout << "\e[m";
}
