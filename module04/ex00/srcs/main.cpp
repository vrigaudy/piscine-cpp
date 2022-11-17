/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:23:16 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/19 18:23:50 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
	std::cout << "-------------------------------------------------------" << std::endl;
	const Animal	*meta =  new Animal();
	std::cout << "type: " << meta->getType() << std::endl;
	meta->makeSound();
	delete meta;
	std::cout << "-------------------------------------------------------" << std::endl;
	const Animal	*catto = new Cat();
	std::cout << "type: " << catto->getType() << std::endl;
	catto->makeSound();
	delete catto;
	std::cout << "-------------------------------------------------------" << std::endl;
	const Animal	*doggo = new Dog();
	std::cout << "type: " << doggo->getType() <<std::endl;
	doggo->makeSound();
	delete doggo;
	std::cout << "-------------------------------------------------------" << std::endl;
	const WrongAnimal	*wrong_meta = new WrongAnimal();
	std::cout << "type: " << wrong_meta->getType() << std::endl;
	wrong_meta->makeSound();
	delete wrong_meta;
	std::cout << "-------------------------------------------------------" << std::endl;
	const WrongAnimal	*wrong_catto = new WrongCat();
	std::cout << "type: " << wrong_catto->getType() <<std::endl;
	wrong_catto->makeSound();
	delete wrong_catto;
	std::cout << "-------------------------------------------------------" << std::endl;
	const WrongCat	*wrong_catta = new WrongCat();
	std::cout << "type: " << wrong_catta->getType() <<std::endl;
	wrong_catta->makeSound();
	delete wrong_catta;
	std::cout << "-------------------------------------------------------" << std::endl;
	return 0;
}
