/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 07:04:42 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/28 14:53:18 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(void) :	_name("random form"),
					_grade_to_sign(150),
					_grade_to_exec(150) {
	this->_signed = false;
}

Form::Form(std::string const & name, int const & sign, int const & exec) :	_name(name),
																			_grade_to_sign(sign),
																			_grade_to_exec(exec) {
	if (_grade_to_sign > 150 || _grade_to_exec > 150)
		throw Form::GradeTooLowException();
	if (_grade_to_sign < 1 || _grade_to_exec < 1)
		throw Form::GradeTooHighException();
	this->_signed = false;
}

Form::Form(Form const & copy) :	_name(copy.getName()),
								_grade_to_sign(copy.getGradeToSign()),
								_grade_to_exec(copy.getGradeToExecute()) {}

Form::~Form(void) {}

Form	&Form::operator=(Form const & copy) {
	(void)copy;
	return *this;
}

int	Form::getGradeToSign(void) const {
	return this->_grade_to_sign;
}

int	Form::getGradeToExecute(void) const {
	return this->_grade_to_exec;
}

std::string	Form::getName(void) const {
	return this->_name;
}

void	Form::beSigned(Bureaucrat const & bureaucrat) {
	if (this->getGradeToSign() < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	this->_signed = true;
	std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
}

std::ostream	&operator<<(std::ostream & o, Form const & rhs) {
	o << rhs.getName() << " requires grade " << rhs.getGradeToSign() <<
	" to sign and grade " << rhs.getGradeToExecute() << " to execute";
	return o;
}
