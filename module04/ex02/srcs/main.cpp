/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:23:16 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/21 17:57:16 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
	std::cout << "-------------------------------------------------------" << std::endl;
	const Animal	*cat = new Cat();
	delete cat;
	std::cout << "-------------------------------------------------------" << std::endl;
	Dog	*dog = new Dog();
	dog->setIdea("1", 0);
	dog->setIdea("2", 1);
	dog->setIdea("3", 2);
	std::cout << "dog : " << dog->getIdea(0) << std::endl;
	std::cout << "dog : " << dog->getIdea(1) << std::endl;
	std::cout << "dog : " << dog->getIdea(2) << std::endl;
	std::cout << "dog : " << dog->getIdea(3) << std::endl;
	Dog	*dig = new Dog(*dog);
	std::cout << "dig : " << dig->getIdea(0) << std::endl;
	std::cout << "dig : " << dig->getIdea(1) << std::endl;
	std::cout << "dig : " << dig->getIdea(2) << std::endl;
	std::cout << "dig : " << dig->getIdea(3) << std::endl;
	delete dog;
	delete dig;
	std::cout << "-------------------------------------------------------" << std::endl;
	Animal	*array[4];
	for (int i = 0; i < 2; i++)
		array[i] = new Cat();
	for (int i = 2; i < 4; i++)
		array[i] = new Dog();
	for (int i = 0; i < 4; i++)
		delete array[i];
	std::cout << "-------------------------------------------------------" << std::endl;
	Animal	*truc = new Animal();
	return 0;
}
