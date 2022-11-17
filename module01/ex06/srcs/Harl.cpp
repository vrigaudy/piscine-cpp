/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 07:36:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/13 09:39:25 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
}

Harl::~Harl(void) {
}

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl <<
	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl <<
	"I cannot believe adding extra bacon costs more money." << std::endl <<
	"You didn’t put enough bacon in my burger !" << std::endl <<
	"If you did, I wouldn’t be asking for more !" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl <<
	"I think I deserve to have some extra bacon for free." << std::endl <<
	"I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl <<
	"This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level) {
	std::string error[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int	i = 0;
	while (i < 4 && level.compare(error[i]))
		i++;
	switch (i) {
		case 0:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break;
		case 1:
			this->info();
			this->warning();
			this->error();
			break;
		case 2:
			this->warning();
			this->error();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
