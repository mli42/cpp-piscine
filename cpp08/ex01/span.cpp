/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:05:17 by mli               #+#    #+#             */
/*   Updated: 2020/10/17 15:37:02 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span(void) : _n(0) {
	return ;
}

span::span(unsigned int n) : _n(n) {
	return ;
}

span::span(span const &src) {
	*this = src;
}

span::~span(void) {
	return ;
}

span	&span::operator=(span const &rhs) {
	if (this == &rhs)
		return (*this);
	this->_n = rhs._n;
	this->content = rhs.content;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, span const &i) {
	(void)i;
//	o << i.;
	return (o);
}

std::string const span::ExcepSpanFull = "Span is Full";
std::string const span::ExcepSpanImpossible = "Too few int in span: no span to find";

void		span::addNumber(int newNumber) {
	if (this->content.size() == this->_n)
		throw std::logic_error(span::ExcepSpanFull);
	this->content.push_back(newNumber);
}

int			span::shortestSpan(void) const {
	if (this->content.size() <= 1)
		throw std::logic_error(span::ExcepSpanImpossible);

	span	tmp(*this);
	int		shortSpan = INT_MAX;
	std::sort(tmp.content.begin(), tmp.content.end());

	std::deque<int>::iterator it = tmp.content.begin();
	std::deque<int>::iterator ite = tmp.content.end();
	--ite;
	for ( ; it != ite; ++it)
	{
		int tmpSpan = *(it + 1) - *it;
		if (tmpSpan < shortSpan)
			shortSpan = tmpSpan;
	}
	return (shortSpan);
}

int			span::longestSpan(void) const {
	if (this->content.size() <= 1)
		throw std::logic_error(span::ExcepSpanImpossible);
	int const _max = *std::max_element(this->content.begin(), this->content.end());
	int const _min = *std::min_element(this->content.begin(), this->content.end());
	return (_max - _min);
}

unsigned int	span::max_size(void) const { return (this->_n); }
