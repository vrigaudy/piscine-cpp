/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:30:07 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/21 17:36:35 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	std::cout << "Cat Constructor called" << std::endl;
	this->_brain = new Brain();
	this->type = "cat";
}

Cat::Cat(Cat const & copy) : Animal() {
	std::cout << "Cat Constructor called" << std::endl;
	*this = copy;
}

Cat	&Cat::operator=(Cat const & copy) {
	this->type = copy.type;
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void	Cat::makeSound(void) const {
	std::cout << "The " << this->getType() << " goes meow" << std::endl; 
}

void	Cat::setIdea(std::string idea, int index) {
	this->_brain->setIdea(idea, index);
}

std::string	Cat::getIdea(int index) const {
	return this->_brain->getIdea(index);
}
