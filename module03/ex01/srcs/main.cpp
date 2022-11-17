/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:05:25 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 09:21:22 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	Serge("Serge");
	ScavTrap	Marc("Marc");

	Serge.attack("Marc");
	Marc.takeDamage(Serge.getDamage());
	Marc.attack("Serge");
	Serge.takeDamage(Marc.getDamage());
	Marc.beRepaired(20);
	Serge.beRepaired(20);
	Marc.guardGate();
	Serge.guardGate();
	return 0;
}
