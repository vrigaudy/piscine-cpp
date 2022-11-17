/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:37:00 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 18:22:23 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	WrongAnimal {
	protected:
		std::string	type;
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & copy);

		WrongAnimal			&operator=(WrongAnimal const & copy);

		virtual ~WrongAnimal(void);

		void	makeSound(void) const;
		std::string		getType(void) const;
};
