/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:05:25 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 10:37:29 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	FragTrap	Serge("Serge");
	FragTrap	Marc("Marc");

	Serge.attack("Marc");
	Marc.takeDamage(Serge.getDamage());
	Marc.attack("Serge");
	Serge.takeDamage(Marc.getDamage());
	Marc.beRepaired(20);
	Serge.beRepaired(20);
	Marc.highFivesGuys();
	Serge.highFivesGuys();
	return 0;
}
