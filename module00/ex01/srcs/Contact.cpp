/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 02:39:52 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/07 05:05:53 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::_fields_name[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};


Contact::Contact(void) {
	for (int i = FirstName; i <= DarkestSecret; i++)
		this->_informations[i] = std::string();
	return;
}

Contact::~Contact(void) {
	return;
}

void	Contact::set_contact(void) {
	std::cout << std::endl;
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << "Enter the " << Contact::_fields_name[i] << " : ";
		while (!(std::getline(std::cin, this->_informations[i])) || this->_informations[i].length() == 0)
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You have pressed Ctrl-D. Exiting the program." << std::endl;
				std::exit(0);
			}
			if (this->_informations[i].length() == 0)
			{
				this->_informations[i].clear();
				std::cout << "Please enter the " << Contact::_fields_name[i] << " : ";
			}
		}
	}
	std::cout << std::endl << "The contact has been added successfully" << std::endl;
}

void	Contact::get_all_contacts_for_display(int index) {
	std::cout << "|" << std::setw(10) << index;
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << "|";
		if (this->_informations[i].length() > 10)
			std::cout << this->_informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_informations[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::get_contact_for_display(void) {
	std::cout << std::endl;
	for (int i = FirstName; i <= DarkestSecret; i++)
		std::cout << Contact::_fields_name[i] << " : " << this->_informations[i] << std::endl;
}
