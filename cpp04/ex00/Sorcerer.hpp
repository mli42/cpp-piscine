#ifndef SORCERER_CLASS_HPP
# define SORCERER_CLASS_HPP

# include "Victim.hpp"
# include <iostream>
# include <string>

class Sorcerer {
	private:
		Sorcerer(void);
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &src);
		~Sorcerer(void);

		Sorcerer	&operator=(Sorcerer const &rhs);

		std::string	getName(void) const;
		void		setName(std::string name);
		std::string	getTitle(void) const;
		void		setTitle(std::string title);

		void		polymorph(Victim const &) const;
	protected:
	private:
		std::string	_name;
		std::string	_title;
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const & i);

#endif // ******************************************** SORCERER_CLASS_HPP end //
