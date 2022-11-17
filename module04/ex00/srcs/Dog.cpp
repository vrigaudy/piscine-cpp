/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:33:18 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 19:11:51 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	std::cout << "Dog Constructor called" << std::endl;
	this->type = "dog";
}

Dog::Dog(Dog const & copy) : Animal() {
	std::cout << "Dog Constructor called" << std::endl;
	*this = copy;
}

Dog	&Dog::operator=(Dog const & copy) {
	this->type = copy.type;
	return *this;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "The " << this->getType() << " goes woof" << std::endl; 
}
