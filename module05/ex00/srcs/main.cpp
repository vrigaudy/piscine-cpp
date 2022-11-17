/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:50:18 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/26 06:37:08 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Bureaucrat	random;
		std::cout << random;
		std::cout << ++random;
		std::cout << --random;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Bureaucrat	bob("Bob", 150);
		std::cout << bob;
		std::cout << --bob;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Bureaucrat	james("James", 1);
		std::cout << james;
		std::cout << ++james;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Bureaucrat	bill("Bill", 153);
		std::cerr << bill;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Bureaucrat	john("John", -1);
		std::cerr << john;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	return 0;
}
