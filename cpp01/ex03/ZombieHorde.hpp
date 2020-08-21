#ifndef ZOMBIEHORDE_CLASS_HPP
# define ZOMBIEHORDE_CLASS_HPP

#include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);

		void	announce(void);

		Zombie		*Horde;
		const int	nbHorde;

	private:
};

#endif // ***************************************** ZOMBIEHORDE_CLASS_HPP end //
