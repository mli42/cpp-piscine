#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class AMateria {
	protected:
		AMateria(void);
	public:
		AMateria(AMateria const &src);
		virtual ~AMateria(void);

		AMateria	&operator=(AMateria const &rhs);
	private:
		unsigned int _xp;
		std::string _type;

	public:
		AMateria(std::string const & type);

		std::string const	&getType(void) const; // Returns the materia type
		unsigned int		getXP(void) const; // Returns the Materia's XP
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

std::ostream	&operator<<(std::ostream &o, AMateria const & i);

#endif // ******************************************** AMATERIA_CLASS_HPP end //
