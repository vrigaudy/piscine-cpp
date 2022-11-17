/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:40:10 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/30 03:55:25 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"

class	Intern {
	public:
		Intern(void);
		Intern(Intern const & copy);

		~Intern(void);

		Intern	&operator=(Intern const & copy);

		Form	*makeForm(std::string const & type, std::string const & target);

		Form	*makeRobotomy(std::string const & target);
		Form	*makeShruberry(std::string const & target);
		Form	*makePardon(std::string const & target);

		class	InvalidFormType:	public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("invalid form request");
				}
		};
};

typedef Form* (Intern::*t_function) (std::string const & target);
