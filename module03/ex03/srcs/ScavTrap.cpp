/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:41:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 13:01:32 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	this->_name = "TNO";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << _name << " awakens!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap(copy) {
	*this = copy;
	std::cout << "ScavTrap " << _name << " awakens!" << std::endl;
}


ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name) {
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << _name << " awakens!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const & copy) {
	this->_hit_points = copy._hit_points;
	this->_energy_points = copy._energy_points;
	this->_attack_damage = copy._attack_damage;
	return *this;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << _name << " goes back to sleep." << std::endl;
}

void	ScavTrap::attack(const std::string & target) {
	std::cout << std::endl;
	if (this->_energy_points > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target <<
		", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
		std::cout << "ScavTrap " << _name << " has " << _energy_points << 
		" energy points left!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " has no energy points left!" <<
		std::endl;
	}
}

void	ScavTrap::guardGate(void) {
	std::cout << std::endl;
	std::cout << "ScavTrap " << _name << " entered guard mode!" << std::endl;
}
