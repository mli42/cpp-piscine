#include "Intern.hpp"

Intern::Intern(void) {
	return ;
}

Intern::Intern(Intern const &src) {
	*this = src;
}

Intern::~Intern(void) {
	return ;
}

Intern	&Intern::operator=(Intern const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Intern const &i) {
	(void)i;
//	o << i.;
	return (o);
}

Form			*Intern::newShrubbery(std::string const &target) {
	return (new ShrubberyCreationForm(target));
}
Form			*Intern::newRobotomy(std::string const &target) {
	return (new RobotomyRequestForm(target));
}
Form			*Intern::newPresidentialPardon(std::string const &target) {
	return (new PresidentialPardonForm(target));
}

Intern::t_intern const	Intern::tintern[NbForms] = {
	{"shrubbery creation" , &Intern::newShrubbery},
	{"robotomy request" , &Intern::newRobotomy},
	{"presidential pardon" , &Intern::newPresidentialPardon}
};

Form	*Intern::makeForm(std::string const type, std::string const target) const {
	for (int i = 0; i < NbForms; i++)
	{
		if (Intern::tintern[i].cmp == type)
		{
			std::cout << "Intern creates " << type << std::endl;
			return (Intern::tintern[i].fct(target));
		}
	}
	std::cout << "Error: Form name not recognized" << std::endl;
	return (NULL);
}
