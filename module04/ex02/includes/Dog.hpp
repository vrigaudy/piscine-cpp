/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:32:16 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/21 16:09:44 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {
	private:
		Brain	*_brain;
	public:
		Dog(void);
		Dog(Dog const & copy);

		Dog			&operator=(Dog const & copy);

		~Dog(void);

		void		makeSound(void) const;
		void		setIdea(std::string idea, int index);
		std::string	getIdea(int index) const;
};
