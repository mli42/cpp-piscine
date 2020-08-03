#include <iostream>
#include "Pony.hpp"

Pony::Pony(int age, int nbLegs, bool freckles, std::string name) : age(age),
	nbLegs(nbLegs), freckles(freckles), name(name) {
		std::cout << "A new " << age << " years-old Poney just arrived! It's " \
		<< name << " with " << nbLegs << " legs and ... ";
		if (freckles == true)
			std::cout << "wow there are freckles on it!";
		else
			std::cout << "it's a regular poney :(";
		std::cout << std::endl;
}

Pony::~Pony(void) {
	std::cout << "Unfortunately " << this->name << " had to quit... " \
		"at the age of " << this->age << ". Rest In Peace <3." << std::endl;
}
