/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 02:40:05 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/07 05:08:23 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) {
	this->_index = 0;
	this->_full = false;
	return;
}

Phonebook::~Phonebook(void) {
	return;
}

void	Phonebook::get_information(void) {
	int	index;

	if (this->_index == 0 && this->_full == false)
		std::cout << std::endl << "Add at least one contact before searching" << std::endl;
	else
	{
		std::string	str;
		std::cout << std::endl << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		if (this->_full == false)
		{
			for (int i = 0; i < this->_index; i++)
				this->_contacts[i].get_all_contacts_for_display(i);
		}
		else
		{
			for (int i = 0; i < 8; i++)
				this->_contacts[i].get_all_contacts_for_display(i);
		}
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << std::endl << "Enter the index of the contact you want to see : ";
		while (!(std::getline(std::cin, str))
				|| str.length() != 1
				|| str.compare("0") < 0
				|| str.compare("7") > 0
				|| (this->_full == false && std::atoi(str.c_str()) >= this->_index))
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You have pressed Ctrl-D. Exiting the program." << std::endl;
				std::exit(0);
			}
			std::cout << "Enter the index of the contact you want to see : ";
		}
		index = std::atoi(str.c_str());
		this->_contacts[index].get_contact_for_display();
	}
}

void	Phonebook::set_information(void) {
	this->_contacts[this->_index].set_contact();
	this->_index++;
	if (this->_index > 7)
	{
		this->_index = 0;
		this->_full = true;
	}
}

void	Phonebook::instructions(void) {
	std::cout << std::endl << "Enter a command :" << std::endl;
	std::cout << "- type ADD to add a contact" << std::endl;
	std::cout << "- type SEARCH to find a contact" << std::endl;
	std::cout << "- type EXIT to exit the program" << std::endl;
	std::cout << "> ";
}
