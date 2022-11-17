/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:50:18 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/30 04:09:21 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern		intern;
	Bureaucrat	president("president", 1);
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Form	*pardon = intern.makeForm("presidential pardon", "John");
		std::cout << *pardon << std::endl;
		president.signForm(*pardon);
		president.executeForm(*pardon);
		delete pardon;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Form	*shruberry = intern.makeForm("shruberry creation", "tree");
		std::cout << *shruberry << std::endl;
		president.signForm(*shruberry);
		president.executeForm(*shruberry);
		delete shruberry;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Form	*robotomy = intern.makeForm("robotomy request", "Bob");
		std::cout << *robotomy << std::endl;
		president.signForm(*robotomy);
		president.executeForm(*robotomy);
		delete robotomy;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	try {
		Form	*random = intern.makeForm("random form", "My mom");
		std::cout << *random << std::endl;
		president.signForm(*random);
		president.executeForm(*random);
		delete random;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	return 0;
}
