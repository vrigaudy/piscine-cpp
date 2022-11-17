/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:05:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/07 10:16:24 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct	Data {
	unsigned int	u;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int	main(void)
{
	Data		*base;
	Data		*transfo;
	uintptr_t	tmp;

	base = new Data;
	base->u = 4222;
	tmp = serialize(base);
	transfo = deserialize(tmp);
	std::cout << "base:    " << base->u << std::endl;
	std::cout << "tmp:     " << tmp << std::endl;
	std::cout << "transfo: " << transfo->u << std::endl;
	delete base;
	return 0;
}
