#ifndef ZOMBIEEVENT_CLASS_HPP
# define ZOMBIEEVENT_CLASS_HPP

#include "Zombie.hpp"

class ZombieEvent {
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump(void);

	private:
		std::string type;
};

#endif // ***************************************** ZOMBIEEVENT_CLASS_HPP end //
