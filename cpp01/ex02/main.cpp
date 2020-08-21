
#include "ZombieEvent.hpp"

int		main(int argc, char **argv)
{
	(void)argc; (void)argv;

	const std::string name[] = {"John", "Alexia", "Guigui", "Auguste", "Jehanne"
	"Emma", "Jojo", "Red1", "Blue2th"};
	int alea;

	std::srand(std::time(NULL));
	std::cout << (alea = std::rand() % sizeof(name) / sizeof(*name)) << std::endl;

	std::cout << name[alea] << std::endl;
}
