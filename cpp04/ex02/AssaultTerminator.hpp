#ifndef ASSAULTTERMINATOR_CLASS_HPP
# define ASSAULTTERMINATOR_CLASS_HPP

# include "ISpaceMarine.hpp"
# include <iostream>
# include <string>

class AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &src);
		virtual ~AssaultTerminator(void);

		AssaultTerminator	&operator=(AssaultTerminator const &rhs);

		virtual ISpaceMarine	*clone(void) const;
		virtual void			battleCry(void) const;
		virtual void			rangedAttack(void) const;
		virtual void			meleeAttack(void) const;
	protected:
	private:
};

std::ostream	&operator<<(std::ostream &o, AssaultTerminator const & i);

#endif // ************************************** ASSAULTTERMINATOR_CLASS_HPP end //
