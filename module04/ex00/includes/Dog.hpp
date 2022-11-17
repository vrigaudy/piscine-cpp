/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:32:16 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 16:50:41 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const & copy);

		Dog		&operator=(Dog const & copy);

		~Dog(void);

		void	makeSound(void) const;
};
