/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:41:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 13:21:02 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("TNO_clap_trap") {
	this->_name = "TNO";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap " << _name << " awakens!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy) {
	*this = copy;
	std::cout << "DiamondTrap " << _name << " awakens!" << std::endl;
}


DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap(name + "_clap_trap"), FragTrap(name), ScavTrap(name) {
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap " << _name << " awakens!" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const & copy) {
	this->_name = copy._name + "_clap_name";
	this->_hit_points = copy._hit_points;
	this->_energy_points = copy._energy_points;
	this->_attack_damage = copy._attack_damage;
	return *this;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << std::endl << "DiamondTrap " << _name << " goes back to sleep." << std::endl;
}

void	DiamondTrap::attack(const std::string & target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << std::endl;
	std::cout << "DiamondTrap " << _name << " also is named " << ClapTrap::_name << std::endl;
}
