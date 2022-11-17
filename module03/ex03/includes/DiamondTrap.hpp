/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:42:04 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 13:23:01 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP

#define DIAMONDTRAP_HPP

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, ScavTrap {
	private:
		std::string	_name;
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const & copy);
		DiamondTrap(std::string const & name);

		DiamondTrap	&operator=(DiamondTrap const & copy);

		~DiamondTrap(void);

		void	attack(const std::string & target);
		void	whoAmI(void);
};

#endif
