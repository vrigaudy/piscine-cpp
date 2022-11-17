/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:15:33 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/28 14:44:19 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class	Form;

class	Bureaucrat {
	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const & name, int const & grade);
		Bureaucrat(Bureaucrat const & copy);

		~Bureaucrat(void);

		Bureaucrat	&operator=(Bureaucrat const & copy);
		Bureaucrat	&operator++(void);
		Bureaucrat	&operator--(void);

		int			getGrade(void) const;
		std::string	getName(void) const;

		void		signForm(Form & form);

		class	GradeTooHighException :	public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("GradeTooHighException : grade cannot be higher than 1");
				}
		};

		class	GradeTooLowException :	public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("GradeTooLowException : grade cannot be lower than 150");
				}
		};
};

std::ostream	&operator<<(std::ostream & o, Bureaucrat const & rhs);

