/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:50:18 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/28 14:55:15 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Form		F1("F1", 150, 150);
		Bureaucrat	B1("B1", 150);
		std::cout << F1 << std::endl;
		std::cout << B1 << std::endl;
		B1.signForm(F1);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Form		F2("F2", 149, 149);
		Bureaucrat	B2("B2", 150);
		std::cout << F2 << std::endl;
		std::cout << B2 << std::endl;
		B2.signForm(F2);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Form		F3("F3", 0, 150);
		Bureaucrat	B3("B3", 150);
		std::cout << F3 << std::endl;
		std::cout << B3 << std::endl;
		B3.signForm(F3);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Form		F4("F4", 151, 149);
		Bureaucrat	B4("B4", 150);
		std::cout << F4 << std::endl;
		std::cout << B4 << std::endl;
		B4.signForm(F4);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	return 0;
}
