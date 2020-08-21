#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);

		std::string name;
		std::string type;

		void	advert(void);

	private:
};

#endif // ********************************************** ZOMBIE_CLASS_HPP end //
