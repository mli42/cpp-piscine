/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:05:17 by mli               #+#    #+#             */
/*   Updated: 2020/09/13 14:11:19 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>

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

template<typename InputIterator>
void			span::add(InputIterator start, InputIterator end) {
	if ((end - start) + this->content.size() > this->_n)
		throw span::SpanFull();
	this->content.insert(this->content.end(), start, end);
}

const char	*span::SpanFull::what() const throw() {
	return ("Span is Full");
}

const char	*span::SpanImpossible::what() const throw() {
	return ("No numbers stored, or only one: no span to find");
}

void		span::addNumber(int newNumber) {
	if (this->content.size() == this->_n)
		throw span::SpanFull();
	this->content.push_back(newNumber);
}

int			span::shortestSpan(void) const {
	if (this->content.size() <= 1)
		throw span::SpanImpossible();
	int mins[2];
	int submin[2];
	std::deque<int>::const_iterator first_min_it;

	mins[0] = *std::min_element(this->content.begin(), this->content.end());
	first_min_it= std::find(this->content.begin(), this->content.end(), mins[0]);
	submin[0] = (&this->content.front() == &(*first_min_it) ?
		INT_MAX : *std::min_element(this->content.begin(), first_min_it - 1));
	submin[1] = (&this->content.back() == &(*first_min_it) ?
		INT_MAX : *std::min_element(first_min_it + 1, this->content.end()));
	mins[1] = std::min(submin[0], submin[1]);
	return (mins[1] - mins[0]);
}

int			span::longestSpan(void) const {
	if (this->content.size() <= 1)
		throw span::SpanImpossible();
	int const _max = *std::max_element(this->content.begin(), this->content.end());
	int const _min = *std::min_element(this->content.begin(), this->content.end());
	return (_max - _min);
}

unsigned int	span::max_size(void) const { return (this->_n); }
