/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 05:58:39 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/13 07:23:05 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string name) : _inFile(name) {
	this->_outFile = this->_inFile + ".replace";
}

Sed::~Sed(void) {
}

void	Sed::replace(std::string s1, std::string s2) {
	std::ifstream	ifs(this->_inFile.c_str());

	if (ifs.is_open()) {
		std::string		input;
		if (std::getline(ifs, input, '\0')) {
			std::ofstream	ofs(this->_outFile.c_str());
			size_t			pos = input.find(s1);
			while (pos < std::string::npos) {
				input.erase(pos, s1.length());
				input.insert(pos, s2);
				pos = input.find(s1);
			}
			ofs << input;
			ofs.close();
		}
		else
			std::cout << "Input file is empty" << std::endl;
	}
	else {
		std::cerr << "File cannot be opened" << std::endl;
	}
}
