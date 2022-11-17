/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:11:58 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/11 02:28:04 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << std::endl <<
	"ADDRESSES :" << std::endl <<
	"- str : " << &str << std::endl <<
	"- ptr : " << stringPTR << std::endl <<
	"- ref : " << &stringREF << std::endl;

	std::cout << std::endl <<
	"VALUES :" << std::endl <<
	"- str : " << str << std::endl <<
	"- ptr : " << *stringPTR << std::endl <<
	"- ref : " << stringREF << std::endl;
}
