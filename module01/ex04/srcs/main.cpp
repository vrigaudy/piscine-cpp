/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 05:58:27 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/13 07:20:32 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv) {
	if (argc == 4) {
		Sed	sed(argv[1]);
		sed.replace(argv[2], argv[3]);
	}
	else
		std::cout << "Please provide the correct arguments" << std::endl;
	return (0);
}
