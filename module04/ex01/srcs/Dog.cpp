/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:33:18 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/21 17:35:39 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	std::cout << "Dog Constructor called" << std::endl;
	this->_brain = new Brain();
	this->type = "dog";
}

Dog::Dog(Dog const & copy) : Animal() {
	std::cout << "Dog Constructor called" << std::endl;
	*this = copy;
}

Dog	&Dog::operator=(Dog const & copy) {
	this->type = copy.type;
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
	return *this;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound(void) const {
	std::cout << "The " << this->getType() << " goes woof" << std::endl; 
}

void	Dog::setIdea(std::string idea, int index) {
	this->_brain->setIdea(idea, index);
}

std::string	Dog::getIdea(int index) const {
	return this->_brain->getIdea(index);
}
