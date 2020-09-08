#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	protected:
		PresidentialPardonForm(void);
	public:
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		virtual ~PresidentialPardonForm(void);

		PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);

		virtual void		action(std::string const &target) const;
	protected:
	private:
};

// std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const & i);

#endif // ******************************* PRESIDENTIALPARDONFORM_CLASS_HPP end //
