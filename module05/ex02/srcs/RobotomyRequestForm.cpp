/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:12:13 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/30 02:16:25 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):	Form("random robotomy form", 72, 45),
												_target("random dude") {
	_fail = false;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & name, std::string const & target):	Form(name, 72, 45),
																								_target(target) {
	_fail = false;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy):	Form(copy) {
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const & copy) {
	this->_fail = copy.getFail();
	this->_target = copy.getTarget();
	return *this;
}

std::string	RobotomyRequestForm::getTarget(void) const {
	return _target;
}

bool	RobotomyRequestForm::getFail(void) const {
	return _fail;
}

void	RobotomyRequestForm::changeFail(void) {
	if (this->getFail() == false)
		_fail = true;
	else
		_fail = false;
}

 void	RobotomyRequestForm::doExec(void) {
	if (this->getFail() == false)
		std::cout << "Robotomy has been succesfully performed on " << _target << std::endl;
	else
		std::cout << "Robotomy on " << _target << " has failed" << std::endl;
	this->changeFail();
 }
