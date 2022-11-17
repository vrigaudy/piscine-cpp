/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:07:59 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/11 01:45:13 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie		*zombie;
	int			number = 3;
	std::string	name = "zombie";

	zombie = zombieHorde(number, name);
	if (!zombie)
		return 1;
	for (int i = 0; i < number; ++i)
		zombie->announce();
	delete [] zombie;
	return 0;
}
