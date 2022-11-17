/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:10:47 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/21 17:55:58 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("animal") {
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(Animal const & copy) {
	std::cout << "Animal Constructor called" << std::endl;
	*this = copy;
}

Animal	&Animal::operator=(Animal const & copy) {
	this->type = copy.type;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const {
	std::cout << "The " << this->getType() <<
	" goes ... I have no fucking clue" << std::endl; 
}

std::string	Animal::getType(void) const {
	return this->type;
}
