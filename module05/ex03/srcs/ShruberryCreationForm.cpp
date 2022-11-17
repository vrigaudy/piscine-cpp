/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:12:13 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/30 02:16:39 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm(void):	Form("random tree planter form", 145, 137),
													_target("tree") {}

ShruberryCreationForm::ShruberryCreationForm(std::string const & name, std::string const & target):	Form(name, 145, 137),
																									_target(target) {}

ShruberryCreationForm::ShruberryCreationForm(ShruberryCreationForm const & copy):	Form(copy) {
	*this = copy;
}

ShruberryCreationForm::~ShruberryCreationForm(void) {}

ShruberryCreationForm	&ShruberryCreationForm::operator=(ShruberryCreationForm const & copy) {
	_target = copy.getTarget();
	return *this;
}
std::string	ShruberryCreationForm::getTarget(void) const {
	return _target;
}

 void	ShruberryCreationForm::doExec(void) {
	std::ofstream	of;

	of.open((this->_target + "_shrubbery").c_str());
	if (of.fail())
	{
		std::cout << "Could not open output file" << std::endl;
		return ;
	}
	of << TREE;
	of.close();
 }
