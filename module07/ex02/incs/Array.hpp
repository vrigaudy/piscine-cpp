/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:10:48 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/08 12:03:47 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
class	Array {
	private:
		T*				_array;
		unsigned int	_size;
	public:
		Array(void): _array(new T[0]()), _size(0) {}
		Array(unsigned int size): _array(new T[size]()), _size(size) {}
		Array(Array<T> const &src): _array(new T[src.size()]()), _size(src.size()) {*this = src;}

		~Array(void) {delete [] _array;}

		Array<T>&	operator=(Array<T> const &copy) {
			if (this == &copy)
				return *this;
			this->_size = copy.size();
			if (_size > 0)
				delete [] _array;
			_array = new T[_size]();
			for (unsigned int i = 0; i < _size; ++i)
				this->_array[i] = copy._array[i];
			return *this;
		}

		T	&operator[](unsigned int i) {
			if (i >= this->size())
				throw wrongAccess();
			return (this->_array[i]);
		}

		unsigned int	size(void) const {return _size;}

		class	wrongAccess: public std::exception {
			virtual const char * what() const throw() {
				return ("The wanted element does not exist");
			}
		};

};
