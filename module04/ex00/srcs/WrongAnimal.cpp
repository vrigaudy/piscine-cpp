/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:10:47 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 19:12:44 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal Constructor called" << std::endl;
	this->type = "wrong animal";
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy) {
	std::cout << "WrongAnimal Constructor called" << std::endl;
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & copy) {
	this->type = copy.type;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "The " << this->getType() <<
	" goes ... whatever a wrong animal goes" << std::endl; 
}

std::string	WrongAnimal::getType(void) const {
	return this->type;
}
