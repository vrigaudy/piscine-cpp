/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:42:04 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 10:38:31 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP

#pragma once

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(FragTrap const & copy);
		FragTrap(std::string const & name);

		FragTrap	&operator=(FragTrap const & copy);

		~FragTrap(void);

		void	attack(const std::string & target);
		void	highFivesGuys(void);
};

#endif
