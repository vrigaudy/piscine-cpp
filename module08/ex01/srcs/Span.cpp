	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:09:20 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/14 18:17:33 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0) {}

Span::Span(unsigned int n): _size(n) {}

Span::Span(Span const & src) {
	*this = src;
}

Span::~Span(void) {}

Span&	Span::operator=(Span const & src) {
	this->_size = src._size;
	this->_vec = src._vec;
	return *this;
}

void	Span::addNumber(int nb) {
	if (this->_vec.size() == _size)
		throw Span::MaxSize();
	this->_vec.push_back(nb);
}

void	Span::addNumber(void) {
	if (this->_vec.size() == _size)
		throw Span::MaxSize();
	for (unsigned int i = 0; i < _size; i++) {
		this->addNumber(rand() / 10000000);
		std::cout << i << ": " << _vec[i] << std::endl;
	}
}

int	Span::shortestSpan(void) const {
	if (this->_vec.size() < 2)
		throw Span::NotEnoughMembers();
	std::vector<int>	tmp = this->_vec;
	sort(tmp.begin(), tmp.end());
	int	ret = *(tmp.begin() + 1) - *(tmp.begin());
	for (std::vector<int>::iterator iter = tmp.begin() + 1; iter != tmp.end() - 1; iter++)
	{
		if (*(iter + 1) - *iter < ret)
			ret = *(iter + 1) - *iter;
	}
	return (ret < 0 ? ret * -1 : ret);
}

int	Span::longestSpan(void) const {
	if (this->_vec.size() < 2)
		throw Span::NotEnoughMembers();
	std::vector<int>	tmp = this->_vec;
	sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *(tmp.begin()));
}
