/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:41:21 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/21 16:53:46 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	Brain {
	private:
		std::string	_ideas[100];
	public:
		Brain(void);
		Brain(Brain const & copy);

		Brain	&operator=(Brain const & copy);

		~Brain(void);

		void		setIdea(std::string idea, int index);
		std::string	getIdea(int index) const;
};
