/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 07:37:07 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/13 08:29:32 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl		harl;
	std::string	input;
	bool		loop = true;

	std::cout << "Enter a level : ";
	std::getline(std::cin, input);
	harl.complain(input);
	while (loop == true) {
		if (std::cin.eof() == true)
			std::exit(0);
		std::cout << "Enter a level : ";
		std::getline(std::cin, input);
		harl.complain(input);
	}
	return (0);
}
