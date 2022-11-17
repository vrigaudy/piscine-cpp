/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:05:25 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 11:40:00 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap	Serge("Serge");
	DiamondTrap	Marc("Marc");

	Serge.attack("Marc");
	Marc.attack("Serge");
	Marc.whoAmI();
	Serge.whoAmI();
	return 0;
}
