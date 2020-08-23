#ifndef HUMAN_CLASS_HPP
# define HUMAN_CLASS_HPP

# include "Brain.hpp"
# include <iostream>
# include <string>

class Human {
	public:
		Human(void);
		~Human(void);

		std::string	identify(void) const;
		const Brain	&getBrain(void) const;

	private:
		const Brain _Brain;
};

#endif // *********************************************** HUMAN_CLASS_HPP end //
