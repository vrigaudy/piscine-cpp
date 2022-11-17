/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:30:07 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 19:10:59 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	std::cout << "Cat Constructor called" << std::endl;
	this->type = "cat";
}

Cat::Cat(Cat const & copy) : Animal() {
	std::cout << "Cat Constructor called" << std::endl;
	*this = copy;
}

Cat	&Cat::operator=(Cat const & copy) {
	this->type = copy.type;
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "The " << this->getType() << " goes meow" << std::endl; 
}
