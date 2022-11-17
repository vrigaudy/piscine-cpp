/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:09:17 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/14 18:13:59 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void) {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try {
		std::cout << "TEST 1: " << std::endl;
		Span	test1(1);
		test1.addNumber(0);
		test1.addNumber(1);
		std::cout << "success" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "TEST 2: " << std::endl;
		Span	test2(10);
		test2.addNumber();
		std::cout << "longest span: " << test2.longestSpan() << std::endl;
		std::cout << "shortest span: " << test2.shortestSpan() << std::endl;
		std::cout << "success" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "TEST 3: " << std::endl;
		Span	test2(100000);
		for (unsigned int i = 0; i < 100001; ++i)
			test2.addNumber(i);
		std::cout << "success" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "TEST 4: " << std::endl;
		Span	test4(5);
		test4.addNumber(-7);
		test4.addNumber(43);
		test4.addNumber(28);
		test4.addNumber(117);
		test4.addNumber(7);
		std::cout << "longest span: " << test4.longestSpan() << std::endl;
		std::cout << "shortest span: " << test4.shortestSpan() << std::endl;
		std::cout << "success" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
