/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:27:22 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/21 16:08:42 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {
	private:
		Brain		*_brain;
	public:
		Cat(void);
		Cat(Cat const & copy);

		Cat			&operator=(Cat const & copy);

		~Cat(void);

		void		makeSound(void) const;
		void		setIdea(std::string idea, int index);
		std::string	getIdea(int index) const;
};
