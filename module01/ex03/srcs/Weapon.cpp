/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:46:28 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/13 03:14:24 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->setType(type);
}

Weapon::~Weapon(void) {
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

std::string const	&Weapon::getType(void) const {
	return this->_type;
}
