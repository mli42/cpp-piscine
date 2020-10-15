/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:05:19 by mli               #+#    #+#             */
/*   Updated: 2020/10/15 23:42:19 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

# include <iostream>
# include <string>
# include <deque>
# include <exception>
# include <algorithm>
# include <stdexcept>

class span {
	public:
		span(void);
		span(unsigned int n);
		span(span const &src);
		virtual ~span(void);

		span	&operator=(span const &rhs);

		std::deque<int> content;
		void			addNumber(int newNumber);
		int				shortestSpan(void) const;
		int				longestSpan(void) const;
		unsigned int max_size(void) const;

		template<typename InputIterator>
		void			add(InputIterator start, InputIterator end) {
			if ((end - start) + this->content.size() > this->_n)
				throw std::logic_error(span::ExcepSpanFull);
			this->content.insert(this->content.end(), start, end);
		}
	protected:
		static std::string const ExcepSpanFull;
		static std::string const ExcepSpanImpossible;
	private:
		unsigned int	_n;
};

std::ostream	&operator<<(std::ostream &o, span const & i);

#endif // ************************************************ SPAN_CLASS_HPP end //
