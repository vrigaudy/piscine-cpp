/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:27:22 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 18:03:15 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(WrongCat const & copy);

		WrongCat		&operator=(WrongCat const & copy);

		~WrongCat(void);

		void	makeSound(void) const;
};
