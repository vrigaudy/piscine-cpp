/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:05:52 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 01:36:04 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

class	ClapTrap {
	protected:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const & copy);
		ClapTrap(std::string const & name);

		ClapTrap	&operator=(ClapTrap const & copy);

		~ClapTrap(void);

		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int		getDamage(void) const;
};

#endif
