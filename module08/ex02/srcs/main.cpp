/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:24:49 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/14 20:18:36 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void) {
	MutantStack<int>	stack;
	for (int i = 0; i < 10; i++)
		stack.push(i);
	for (int i = 0; stack.begin() + i != stack.end(); i++)
		std::cout << i << ": " << *(stack.begin() + i) << std::endl;
	return 0;
}
