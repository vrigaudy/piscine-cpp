/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 05:58:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/13 07:14:18 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP

# define SED_HPP

#pragma once

#include <iostream>
#include <fstream>

class	Sed {
	private:
		std::string	_inFile;
		std::string	_outFile;

	public:
		Sed(std::string name);
		~Sed(void);

		void	replace(std::string s1, std::string s2);
};

#endif
