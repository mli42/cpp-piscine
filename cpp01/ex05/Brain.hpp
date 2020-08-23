#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain {
	public:
		Brain(void);
		~Brain(void);

		int weight;
		int nbNeurons;

		std::string identify(void) const;

	private:
};

#endif // *********************************************** BRAIN_CLASS_HPP end //
