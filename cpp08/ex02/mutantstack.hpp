/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 23:32:20 by mli               #+#    #+#             */
/*   Updated: 2020/09/13 23:32:29 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

# include <iostream>
# include <string>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack(void);
		MutantStack(MutantStack const &src);
		~MutantStack(void);

		MutantStack	&operator=(MutantStack const &rhs);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void) { return (this->c.begin()); };
		iterator	end(void) { return (this->c.end()); };
	protected:
	private:
};

template<typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>() {
	return ;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &src) : std::stack<T>(src) {
	return ;
}

template<typename T>
MutantStack<T>::~MutantStack(void) {
	return ;
}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack const &rhs) {
	if (this == &rhs)
		return (*this);
	this->c = rhs.c;
	return (*this);
}

#endif // ***************************************** MUTANTSTACK_CLASS_HPP end //
