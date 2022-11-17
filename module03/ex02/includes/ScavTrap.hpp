/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:42:04 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 10:32:04 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

#define SCAVTRAP_HPP

#pragma once

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const & copy);
		ScavTrap(std::string const & name);

		ScavTrap	&operator=(ScavTrap const & copy);

		~ScavTrap(void);

		void	attack(const std::string & target);
		void	guardGate(void);
};

#endif
