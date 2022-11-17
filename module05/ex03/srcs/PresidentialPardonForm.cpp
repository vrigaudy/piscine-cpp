/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:24:30 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/30 02:16:10 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):	Form("random pardon form", 25, 5),
														_target("random dude"){}

PresidentialPardonForm::PresidentialPardonForm(std::string const & name, std::string const & target):	Form(name, 25, 5),
																										_target(target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy):	Form(copy) {
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const & copy) {
	_target = copy.getTarget();
	return *this;
}

std::string	PresidentialPardonForm::getTarget(void) const {
	return _target;
}

 void	PresidentialPardonForm::doExec(void) {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
 }
