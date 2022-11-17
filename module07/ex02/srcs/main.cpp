/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:10:38 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/08 12:12:45 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int	main(void) {
	try {
		std::cout << "*** TEST WITH INT ARRAY *********" << std::endl;
		Array<int>	test1(3);
		std::cout << test1.size() << std::endl;
		for (unsigned int i = 0; i < test1.size(); ++i)
			test1[i] = i;
		for (unsigned int i = 0; i < test1.size(); ++i)
			std::cout << test1[i] << " ";
		std::cout << std::endl;
		std::cout << test1[test1.size()];
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "*** TEST WITH INT ARRAY COPY ****" << std::endl;
		Array<int>	test1(6);
		for (unsigned int i = 0; i < test1.size(); ++i)
			test1[i] = i;
		Array<int>	test2(12);
		std::cout << test2.size() << std::endl;
		test2 = test1;
		std::cout << test2.size() << std::endl;
		for (unsigned int i = 0; i < test2.size(); ++i)
			std::cout << test1[i] << " ";
		std::cout << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "*** TEST WITH CHAR ARRAY ********" << std::endl;
		Array<char>	test1(8);
		char		letter = 'a';
		std::cout << test1.size() << std::endl;
		for (unsigned int i = 0; i < test1.size(); ++i) {
			test1[i] = letter;
			letter++;
		}
		for (unsigned int i = 0; i < test1.size(); ++i)
			std::cout << test1[i] << " ";
		std::cout << std::endl;
		std::cout << test1[-38];
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "*** TEST WITH STR ARRAY *********" << std::endl;
		Array<std::string>	test1(4);
		std::string		letter[] = {"Mark", "John", "Bob", "Tim"};
		std::cout << test1.size() << std::endl;
		for (unsigned int i = 0; i < test1.size(); ++i) {
			test1[i] = letter[i];
		}
		for (unsigned int i = 0; i < test1.size(); ++i)
			std::cout << test1[i] << " ";
		std::cout << std::endl;
		std::cout << test1[200];
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
