/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:17:31 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/21 16:55:14 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(Brain const & copy) {
	std::cout << "Brain Constructor called" << std::endl;
	*this = copy;
}

Brain	&Brain::operator=(Brain const & copy) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return *this;
}

Brain::~Brain(void) {
	std::cout << "Brain Destructor called" << std::endl;
}

void	Brain::setIdea(std::string idea, int index) {
	if (index >= 0 && index <= 99)
		this->_ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const {
	if (index >= 0 && index <= 99)
		return this->_ideas[index];
	else
		return NULL;
}
