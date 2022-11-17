/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:37:00 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/21 17:55:22 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	Animal {
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(Animal const & copy);

		Animal			&operator=(Animal const & copy);

		virtual ~Animal(void);

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};
