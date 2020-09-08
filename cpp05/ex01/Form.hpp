#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	protected:
		Form(void);
	public:
		Form(std::string const name, int signGrade, int execGrade);
		Form(Form const &src);
		virtual ~Form(void);

		Form	&operator=(Form const &rhs);

		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};

		std::string const	getName(void) const;
		unsigned short int	getSignGrade(void) const;
		unsigned short int	getExecGrade(void) const;
		bool				getSignState(void) const;

		void				beSigned(Bureaucrat const &sb);
	protected:
	private:
		std::string const			_name;
		unsigned short int const	_SignGrade;
		unsigned short int const	_ExecGrade;
		bool						_signed;
};

std::ostream	&operator<<(std::ostream &o, Form const & i);

#endif // ************************************************ FORM_CLASS_HPP end //
