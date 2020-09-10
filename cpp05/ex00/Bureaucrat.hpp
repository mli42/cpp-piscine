/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:48:54 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:48:55 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat {
	protected:
		Bureaucrat(void);
	public:
		Bureaucrat(std::string const name, unsigned short int const grade);
		Bureaucrat(Bureaucrat const &src);
		virtual ~Bureaucrat(void);

		Bureaucrat	&operator=(Bureaucrat const &rhs);

		void			incGrade(void);
		void			decGrade(void);

		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};

		std::string const	getName(void) const;
		int					getGrade(void) const;
	protected:
		const std::string	_name;
		unsigned short int	_grade;
	private:
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const & i);

#endif // ****************************************** BUREAUCRAT_CLASS_HPP end //
