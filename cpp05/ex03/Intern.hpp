/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:49:31 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:49:32 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# define NbForms 3

class Intern {
	public:
		Intern(void);
		Intern(Intern const &src);
		virtual ~Intern(void);

		Intern	&operator=(Intern const &rhs);

		Form	*makeForm(std::string const type, std::string const target) const;
	protected:
	private:
		typedef struct	s_intern
		{
			std::string cmp;
			Form		*(*fct)(std::string const &target);
		}				t_intern;
		static t_intern	const	tintern[NbForms];
		static Form		*newShrubbery(std::string const &target);
		static Form		*newRobotomy(std::string const &target);
		static Form		*newPresidentialPardon(std::string const &target);
};

std::ostream	&operator<<(std::ostream &o, Intern const & i);

#endif // ********************************************** INTERN_CLASS_HPP end //
