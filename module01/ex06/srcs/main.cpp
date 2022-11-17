/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 07:37:07 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/13 09:05:34 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Please provide one argument and one argument only" << std::endl;
		std::exit(0);
	}
	std::string	input = argv[1];
	Harl		harl;
	harl.complain(input);
	return (0);
}
