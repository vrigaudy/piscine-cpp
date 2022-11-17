/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:30:07 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 19:13:22 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
	std::cout << "WrongCat Constructor called" << std::endl;
	this->type = "wrong cat";
}

WrongCat::WrongCat(WrongCat const & copy) : WrongAnimal() {
	std::cout << "WrongCat Constructor called" << std::endl;
	*this = copy;
}

WrongCat	&WrongCat::operator=(WrongCat const & copy) {
	this->type = copy.type;
	return *this;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "The " << this->getType() << " goes wrong meow" << std::endl; 
}
