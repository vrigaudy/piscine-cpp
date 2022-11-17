/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:04:36 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/11 01:51:15 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	if (N < 1)
		return NULL;
	Zombie *zombie = new Zombie[N];
	if (!zombie)
		return NULL;
	for (int i = 0; i < N; ++i)
		zombie[i].set_name(name);
	return zombie;
}
