/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:05:19 by mli               #+#    #+#             */
/*   Updated: 2020/09/13 12:23:53 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

# include <iostream>
# include <string>
# include <deque>
# include <exception>
# include <algorithm>

class span {
	public:
		span(void);
		span(unsigned int n);
		span(span const &src);
		virtual ~span(void);

		span	&operator=(span const &rhs);

		class SpanFull : public std::exception {
			virtual const char *what() const throw();
		};
		class SpanImpossible : public std::exception {
			virtual const char *what() const throw();
		};

		std::deque<int> content;
		template<typename InputIterator>
		void			add(InputIterator start, InputIterator end);
		void			addNumber(int newNumber);
		int				shortestSpan(void) const;
		int				longestSpan(void) const;
		unsigned int max_size(void) const;
	protected:
	private:
		unsigned int	_n;
};

std::ostream	&operator<<(std::ostream &o, span const & i);

#endif // ************************************************ SPAN_CLASS_HPP end //
