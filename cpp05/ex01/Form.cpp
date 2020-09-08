#include "Form.hpp"

Form::Form(void) : _name(""), _SignGrade(0), _ExecGrade(0) {
	return ;
}

Form::Form(std::string const name, int signGrade, int execGrade) : \
	_name(name), _SignGrade(signGrade), _ExecGrade(execGrade), _signed(false) {
	return ;
}

Form::Form(Form const &src) : _name(""), _SignGrade(0), _ExecGrade(0) {
	*this = src;
}

Form::~Form(void) {
	return ;
}

Form	&Form::operator=(Form const &rhs) {
	if (this == &rhs)
		return (*this);
	this->_signed = rhs._signed;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Form const &i) {
	o << i.getName() << "Signed(" << i.getSignState() << "); SignGrade(" \
		<< i.getSignGrade() << "); ExecGrade(" << i.getExecGrade() << ");";
	return (o);
}

const char	*Form::GradeTooLowException::what(void) const throw()
	{ return ("Form::Grade Too Low, Need a higher Graded Bureaucrat"); }

const char	*Form::GradeTooHighException::what(void) const throw()
	{ return ("Form::Grade Too High"); }

std::string const	Form::getName(void) const { return (this->_name); }
unsigned short int	Form::getSignGrade(void) const { return (this->_SignGrade); }
unsigned short int	Form::getExecGrade(void) const { return (this->_ExecGrade); }
bool				Form::getSignState(void) const { return (this->_signed); }

void				Form::beSigned(Bureaucrat const &sb) {
	const unsigned short int sbGrade = sb.getGrade();

	if (sbGrade > this->_SignGrade)
		throw Form::GradeTooLowException();
	this->_signed = true;
}
