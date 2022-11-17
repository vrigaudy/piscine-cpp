/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:30:54 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/07 14:57:14 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void) {
	std::cout << "**********INT ARRAY***********" << std::endl;
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::cout << "initial int array values:" << std::endl;
	iter(array, 10, &print);
	std::cout << std::endl;
	iter(array, 10, &add);
	std::cout << "int array values after add:" << std::endl;
	iter(array, 10, &print);
	std::cout << std::endl;
	iter(array, 10, &del);
	std::cout << "int array values after del:" << std::endl;
	iter(array, 10, &print);
	std::cout << std::endl;
	std::cout << "**********CHAR ARRAY**********" << std::endl;
	char array2[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'k'};
	std::cout << "initial char array values:" << std::endl;
	iter(array2, 10, &print);
	std::cout << std::endl;
	iter(array2, 10, &add);
	std::cout << "char array values after add:" << std::endl;
	iter(array2, 10, &print);
	std::cout << std::endl;
	iter(array2, 10, &del);
	std::cout << "char array values after del:" << std::endl;
	iter(array2, 10, &print);
	std::cout << std::endl;
}
