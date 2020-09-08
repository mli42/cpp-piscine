#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : \
		Form("PresidentialPardonForm", 25, 5, target) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) {
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
}

void			PresidentialPardonForm::action(std::string const &target) const {
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
