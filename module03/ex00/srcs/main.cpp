/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:05:25 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/18 20:37:55 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	Serge("Serge");
	ClapTrap	Marc("Marc");

	Serge.attack("Marc");
	Marc.takeDamage(Serge.getDamage());
	Marc.attack("Serge");
	Serge.takeDamage(Marc.getDamage());
	Marc.beRepaired(0);
	Serge.beRepaired(0);
	return 0;
}
