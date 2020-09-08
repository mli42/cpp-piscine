#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
	protected:
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		virtual ~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);

		virtual void		action(void) const;
		std::string			target;
	protected:
	private:
};

// std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const & i);

#endif // ******************************* SHRUBBERYCREATIONFORM_CLASS_HPP end //
