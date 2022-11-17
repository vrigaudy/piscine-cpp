/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:05:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/07 12:52:55 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <string>
#include <cmath>

void	convert(std::string arg) {

	std::string	nan_inf[6] = {
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"
	};

	std::string	cdisplay;
	int			idisplay = 0;
	float		fdisplay = 0;
	double		ddisplay = 0;

	if (arg.size() == 1 && std::isprint(arg[0]) && !std::isdigit(arg[0])) {
		cdisplay = arg[0];
		std::cout << "char: " << "'" << cdisplay << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(cdisplay[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(cdisplay[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(cdisplay[0]) << ".0" << std::endl;
		return ;
	}

	if (arg[arg.length() - 1] == 'f') {
		fdisplay = atof(arg.c_str());
		ddisplay = static_cast<double>(fdisplay);
		idisplay = static_cast<int>(fdisplay);
	} else {
		ddisplay = atof(arg.c_str());
		fdisplay = static_cast<float>(ddisplay);
		idisplay = static_cast<int>(ddisplay);
	}

	for (int i = 0; i < 6; ++i) {
		if (arg.compare(nan_inf[i]) == 0) {
			cdisplay = "impossible";
			break;
		}
	}

	if (cdisplay.compare("impossible") != 0 && idisplay >= 31  && idisplay <= 127) {
			cdisplay += "'";
			cdisplay += static_cast<char>(idisplay);
			cdisplay += "'";
	} else if (cdisplay.compare("impossible") != 0) {
		cdisplay = "Non displayable";
	}

	std::cout << "char: " << cdisplay << std::endl;

	std::cout << "int: ";

	if (cdisplay.compare("impossible") == 0)
 		std::cout << "impossible" << std::endl;
	else
		std::cout << idisplay << std::endl;

	if (cdisplay.compare("impossible") == 0 && fdisplay == 0) {
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	} else if (cdisplay.compare("impossible") != 0 && fdisplay - idisplay == 0) {
		std::cout << "float: " << fdisplay << ".0f" << std::endl;
		std::cout << "double: " << ddisplay << ".0" << std::endl;
	} else {
		std::cout << "float: " << fdisplay << "f" << std::endl;
		std::cout << "double: " << ddisplay << std::endl;
	}
}


int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		std::string	argument(argv[1]);
		convert(argument);
	}
	else
		std::cerr << "Error : please provide one argument and one argument only" << std::endl;
	return 0;
}
