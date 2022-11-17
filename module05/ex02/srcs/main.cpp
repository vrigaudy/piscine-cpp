/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:50:18 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/30 02:15:09 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"

int main(void)
{
	Bureaucrat	president("president", 1);
	Bureaucrat	random;
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		PresidentialPardonForm	unsignedPardon;
		std::cout << unsignedPardon << std::endl;
		president.executeForm(unsignedPardon);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		PresidentialPardonForm	signedPardon;
		std::cout << signedPardon << std::endl;
		president.signForm(signedPardon);
		random.executeForm(signedPardon);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		PresidentialPardonForm	Pardon;
		std::cout << Pardon << std::endl;
		president.signForm(Pardon);
		president.executeForm(Pardon);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		RobotomyRequestForm	robotomy;
		std::cout << robotomy << std::endl;
		president.signForm(robotomy);
		president.executeForm(robotomy);
		president.executeForm(robotomy);
		president.executeForm(robotomy);
		president.executeForm(robotomy);
		president.executeForm(robotomy);
		president.executeForm(robotomy);
		president.executeForm(robotomy);
		president.executeForm(robotomy);
		president.executeForm(robotomy);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		ShruberryCreationForm	tree;
		std::cout << tree << std::endl;
		president.signForm(tree);
		president.executeForm(tree);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	return 0;
}
