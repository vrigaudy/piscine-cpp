/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:59:54 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/26 06:31:54 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) :	_name("random bureaucrat"),
								_grade(150) {
}

Bureaucrat::Bureaucrat(std::string const & name, int const & grade) :	_name(name),
																		_grade(grade) {
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) :	_name(copy.getName()),
													_grade(copy.getGrade()) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & copy) {
	this->_grade = copy.getGrade();
	return *this;
}

Bureaucrat	&Bureaucrat::operator++(void) {
	this->_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return *this;
}

Bureaucrat	&Bureaucrat::operator--(void) {
	this->_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return *this;
}

int	Bureaucrat::getGrade(void) const {
	return this->_grade;
}
std::string	Bureaucrat::getName(void) const {
	return this->_name;
}

std::ostream	&operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}
