/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 01:41:56 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/07 04:36:52 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <string>
# include <iomanip>
# include <cstdlib>
# include <iostream>

class Contact {
	private:
		static std::string	_fields_name[5];
		std::string			_informations[5];

		enum Field {
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DarkestSecret
		};
	public:
		Contact(void);
		~Contact(void);

		void	set_contact(void);
		void	get_contact_for_display(void);
		void	get_all_contacts_for_display(int index);
};

#endif
