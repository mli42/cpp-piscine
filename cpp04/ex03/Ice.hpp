#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(Ice const &src);
		virtual ~Ice(void);

		Ice	&operator=(Ice const &rhs);

		virtual AMateria	*clone(void) const;
	protected:
	private:
};

std::ostream	&operator<<(std::ostream &o, Ice const & i);

#endif // ************************************************* ICE_CLASS_HPP end //
