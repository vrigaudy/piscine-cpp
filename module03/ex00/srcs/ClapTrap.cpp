/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:05:36 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 09:05:35 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	this->_name = "TNO";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << std::endl << "ClapTrap " << _name << " awakens!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy) : _name(copy._name) {
	*this = copy;
	std::cout << std::endl << "ClapTrap " << _name << " awakens!" << std::endl;
}


ClapTrap::ClapTrap(std::string const & name) : _name(name) {
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << std::endl << "ClapTrap " << _name << " awakens!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const & copy) {
	this->_hit_points = copy._hit_points;
	this->_energy_points = copy._energy_points;
	this->_attack_damage = copy._attack_damage;
	std::cout << std::endl << "ClapTrap " << _name << " awakens!" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << std::endl << "ClapTrap " << _name <<
	" goes back to sleep." << std::endl;
}

void	ClapTrap::attack(const std::string & target) {
	std::cout << std::endl;
	if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target <<
		", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
		std::cout << "ClapTrap " << _name << " has " << _energy_points << 
		" energy points left!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " has no energy points left!" <<
		std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->_hit_points -= amount;
	if (_hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " has " << _hit_points <<
		" hit points left!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " died!" << std::endl;
		std::exit(0);
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << std::endl;
	if (_energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " healed itself for " << amount <<
		" hit points!" << std::endl;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << "  now has " << _hit_points << 
		 " hit points left!" << std::endl;
		_energy_points--;
		std::cout << "ClapTrap " << _name << " has " << _energy_points 
		<< " energy points left!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " has no energy points left!" <<
		std::endl;
}

int	ClapTrap::getDamage(void) const {
	return _attack_damage;
}






