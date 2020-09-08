#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	protected:
		RobotomyRequestForm(void);
	public:
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		virtual ~RobotomyRequestForm(void);

		RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);

		virtual void		action(std::string const &target) const;
	protected:
	private:
};

// std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const & i);

#endif // ********************************* ROBOTOMYREQUESTFORM_CLASS_HPP end //
