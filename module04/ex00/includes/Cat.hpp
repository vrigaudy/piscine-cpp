/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:27:22 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 16:50:58 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat const & copy);

		Cat		&operator=(Cat const & copy);

		~Cat(void);

		void	makeSound(void) const;
};
