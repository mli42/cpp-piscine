#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie(void);
		Zombie(std::string name, std::string type);
		~Zombie(void);

		std::string name;
		std::string type;

		void	announce(void);

	private:
};

#endif // ********************************************** ZOMBIE_CLASS_HPP end //