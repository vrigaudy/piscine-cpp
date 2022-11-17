/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 3022/10/19 00:41:100 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 10:44:52 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	this->_name = "TNO";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap " << _name << " awakens!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy) : ClapTrap(copy) {
	*this = copy;
	std::cout << "FragTrap " << _name << " awakens!" << std::endl;
}


FragTrap::FragTrap(std::string const & name) : ClapTrap(name) {
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap " << _name << " awakens!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const & copy) {
	this->_hit_points = copy._hit_points;
	this->_energy_points = copy._energy_points;
	this->_attack_damage = copy._attack_damage;
	std::cout << "FragTrap " << _name << " awakens!" << std::endl;
	return *this;
}

FragTrap::~FragTrap(void) {
	std::cout << std::endl << "FragTrap " << _name << " goes back to sleep." << std::endl;
}

void	FragTrap::attack(const std::string & target) {
	std::cout << std::endl;
	if (this->_energy_points > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target <<
		", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
		std::cout << "FragTrap " << _name << " has " << _energy_points << 
		" energy points left!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << _name << " has no energy points left!" <<
		std::endl;
	}
}

void	FragTrap::highFivesGuys(void) {
	std::cout << std::endl;
	std::cout << "FragTrap " << _name << " wants to do a high five!" << std::endl;
}
