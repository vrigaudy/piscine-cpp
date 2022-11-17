/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 01:41:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/07 03:57:57 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook {
	private:
		Contact	_contacts[8];
		int		_index;
		bool	_full;

	public:
		Phonebook(void);
		~Phonebook(void);

		void	set_information(void);
		void	get_information(void);
		void	instructions(void);
};

#endif
