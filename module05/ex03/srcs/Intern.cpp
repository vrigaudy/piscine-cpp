/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:53:46 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/30 04:10:49 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const & copy) {
	(void)copy;
}

Intern::~Intern(void) {}

Intern	&Intern::operator=(Intern const & copy) {
	(void)copy;
	return *this;
}

Form	*Intern::makeRobotomy(std::string const & target) {
	return new RobotomyRequestForm("random robotomy request", target);
}

Form	*Intern::makeShruberry(std::string const & target) {
	return new ShruberryCreationForm("random shruberry creation", target);
}

Form	*Intern::makePardon(std::string const & target) {
	return new PresidentialPardonForm("random presidential pardon", target);
}

Form	*Intern::makeForm(std::string const & type, std::string const & target) {
	std::string	forms[] = {
		"shruberry creation",
		"presidential pardon",
		"robotomy request"
	};

	t_function	f[] = {
		&Intern::makeShruberry,
		&Intern::makePardon,
		&Intern::makeRobotomy
	};

	int	i = 0;
	while (type.compare(forms[i]) != 0 && i < 3)
		i++;
	if (i >= 3)
		throw Intern::InvalidFormType();
	return ((this->*f[i])(target));

}

