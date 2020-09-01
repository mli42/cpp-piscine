#ifndef SORCERER_CLASS_HPP
# define SORCERER_CLASS_HPP

# include <iostream>
# include <string>

class Sorcerer {
	private:
		Sorcerer(void);
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &src);
		~Sorcerer(void);

		Sorcerer	&operator=(Sorcerer const &rhs);

		std::string getName(void) const;
		std::string setName(std::string name);
		std::string getTitle(void) const;
		std::string setTitle(std::string title);

	protected:
	private:
		std::string	_name;
		std::string	_title;
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const & i);

#endif // ******************************************** SORCERER_CLASS_HPP end //
