/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:05:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/07 13:25:44 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class	Base {public: virtual ~Base(void) {} };

class	A: public Base {};

class	B: public Base {};

class	C: public Base {};

class	typeError :	public std::exception {
	public:
		virtual const char * what() const throw() {
			return ("wrong type");
		}
};

Base*	generate(void) {
	std::srand(std::time(0));
	int	random = std::rand() % 3;
	std::cout << "random number value:" << std::endl << "- " << random << std::endl;
	if (random == 2) {
		return (new C);
	}
	if (random  == 1) {
		return (new B);
	}
	return (new A);
}

void	identify(Base* p) {
	std::cout << "with pointer: " << std::endl;
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "- type A" << std::endl;
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "- type B" << std::endl;
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "- type C" << std::endl;
}

void	identify(Base& p) {
	std::cout << "with reference:" << std::endl;
	try {
		std::cout << "- trying type A: ";
		if (dynamic_cast<A*>(&p) == NULL)
			throw typeError();
		std::cout << "good type" << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "- trying type B: ";
		if (dynamic_cast<B*>(&p) == NULL)
			throw typeError();
		std::cout << "good type" << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "- trying type C: ";
		if (dynamic_cast<C*>(&p) == NULL)
			throw typeError();
		std::cout << "good type" << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	std::cout << "********TEST STARTING********" << std::endl;
	Base* test = generate();
	identify(test);
	identify(*test);
	delete test;
	std::cout << "********TEST FINISHED********" << std::endl;
	return 0;
}
