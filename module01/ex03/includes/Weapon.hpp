/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:46:53 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/13 05:39:23 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

#pragma once

#include <string>
#include <iostream>

class	Weapon {
	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		~Weapon(void);

		void				setType(std::string);
		std::string const	&getType(void) const;
};

#endif
