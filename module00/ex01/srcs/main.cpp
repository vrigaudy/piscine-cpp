/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 01:54:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/07 04:25:05 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void) {
	Phonebook	phonebook;
	bool		loop = true;
	std::string	command;

	phonebook.instructions();
	while (loop && std::getline(std::cin, command))
	{
		if (std::cin.eof() == true)
		{
			std::cout << std::endl << "You have pressed Ctrl-D. Exiting the program." << std::endl;
			std::exit(0);
		}
		else if (command.compare("ADD") == 0)
			phonebook.set_information();
		else if (command.compare("SEARCH") == 0)
			phonebook.get_information();
		else if (command.compare("EXIT") == 0)
		{
			std::cout << std::endl << "You have entered the EXIT command. Exiting the program." << std::endl;
			loop = false;
		}
		if (loop == true && std::cin.eof() == false)
			phonebook.instructions();
		command.clear();
	}
	return (0);
}
